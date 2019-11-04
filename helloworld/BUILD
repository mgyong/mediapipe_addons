package(
    default_visibility = ["//helloworld:internal"],
)

package_group(
    name = "internal",
    packages = [
        "//helloworld/...",
    ],
)

cc_test(
    name = "hello_world_calculator_test",
    srcs = ["hello_world_calculator_test.cc"],
    deps = [
        ":hello_world_calculator",
        "@mediapipe//mediapipe/framework:calculator_runner",
        "@mediapipe//mediapipe/framework/port:gtest_main",        
    ],
)

cc_library(
    name = "hello_world_calculator",
    srcs = ["hello_world_calculator.cc"],
    deps = [
        "@mediapipe//mediapipe/framework:calculator_framework",
        "@com_google_absl//absl/memory",
    ],
)

cc_binary(
    name = "hello_world",
    srcs = ["hello_world.cc"],
    visibility = ["//visibility:public"],
    deps = [
        "@mediapipe//mediapipe/calculators/core:pass_through_calculator",
        "@mediapipe//mediapipe/framework:calculator_framework", 
        #unable to directly refer to calculator_graph which has visibility private to within mediapipe/framework
        #mediapipe/framework:calculator_framework has dependency on mediapipe/framework:calculator_graph
        #"@mediapipe//mediapipe/framework:calculator_graph", 
        "@mediapipe//mediapipe/framework/port:logging",
        "@mediapipe//mediapipe/framework/port:parse_text_proto",
        "@mediapipe//mediapipe/framework/port:status",
    ],
)