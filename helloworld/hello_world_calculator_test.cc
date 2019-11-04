#include "mediapipe/framework/calculator_runner.h"
#include "mediapipe/framework/deps/status_matchers.h"
#include "mediapipe/framework/port/gmock.h"
#include "mediapipe/framework/port/gtest.h"

namespace mediapipe {
namespace {
TEST(HelloWorldCalculatorTest, Initialization) {
  CalculatorRunner runner(R"pb(
    calculator: "HelloWorldCalculator"
    output_stream: "output_test"
  )pb");
  MP_ASSERT_OK(runner.Run());
  const std::string output = runner.Outputs().Index(0).packets.at(0).Get<std::string>();
  EXPECT_EQ(output, "Hello, World!");
}
 }  // namespace
}  // namespace mediapipe
