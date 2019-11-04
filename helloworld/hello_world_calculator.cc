#include "mediapipe/framework/calculator_framework.h"
#include "absl/memory/memory.h"
namespace mediapipe {
namespace {
// Should generate only 5 packets from this calculator.
constexpr int kHelloWorldLoopMax = 5;
}  // namespace
// Source node calculator that generates a std::string packet every mediapipe process
// call.
//
// Usage:
// node {
//   calculator: "HelloWorldCalculator"
//   output_stream: "output_test"
// }
class HelloWorldCalculator : public CalculatorBase {
 public:
  HelloWorldCalculator() {}
  ~HelloWorldCalculator() override {}
  // Overrided mediapipe method. Makes sure the mediapipe node is valid.
  static ::mediapipe::Status GetContract(CalculatorContract* cc) {
    cc->Outputs().Index(0).Set<std::string>();
    return ::mediapipe::OkStatus();
  }
  // Overrided mediapipe method. Takes in and processes calculator options.
  ::mediapipe::Status Open(CalculatorContext* cc) override {
    return ::mediapipe::OkStatus();
  }
  // Overrided mediapipe method. Prints "Hello, World!" and also outputs it as a
  // std::string.
  ::mediapipe::Status Process(CalculatorContext* cc) override {
    LOG(INFO) << "Hello, World!";
    auto output_string = absl::make_unique<std::string>("Hello, World!");
    Packet output_packet =
        Adopt(output_string.release()).At(Timestamp(++timestamp_));
    cc->Outputs().Index(0).AddPacket(output_packet);
    if (timestamp_ > kHelloWorldLoopMax) {
      return tool::StatusStop();
    }
    return ::mediapipe::OkStatus();
  }
 private:
  // MediaPipe timestamps don't have to be an actual time. In this case, it will
  // just be a simple increasing integer.
  int64 timestamp_ = 0;
};
REGISTER_CALCULATOR(HelloWorldCalculator);
}  // namespace mediapipe