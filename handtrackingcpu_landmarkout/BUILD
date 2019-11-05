package(
    default_visibility = ["//handtrackingcpu_landmarkout:internal"],
)

package_group(
    name = "internal",
    packages = [
        "//handtrackingcpu_landmarkout/...",
    ],
)

cc_binary(
    name = "demo_run_graph_main_out",
    srcs = ["demo_run_graph_main_out.cc"],
    visibility = ["//visibility:public"],
    deps = [
        "@mediapipe//mediapipe/framework:calculator_framework",
        "@mediapipe//mediapipe/framework/formats:image_frame",
        "@mediapipe//mediapipe/framework/formats:image_frame_opencv",
        "@mediapipe//mediapipe/framework/port:commandlineflags",
        "@mediapipe//mediapipe/framework/port:file_helpers",
        "@mediapipe//mediapipe/framework/port:opencv_highgui",
        "@mediapipe//mediapipe/framework/port:opencv_imgproc",
        "@mediapipe//mediapipe/framework/port:opencv_video",
        "@mediapipe//mediapipe/framework/port:parse_text_proto",
        "@mediapipe//mediapipe/framework/port:status",
        "@mediapipe//mediapipe/gpu:gl_calculator_helper",
        "@mediapipe//mediapipe/gpu:gpu_buffer",
        "@mediapipe//mediapipe/gpu:gpu_shared_data_internal",

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