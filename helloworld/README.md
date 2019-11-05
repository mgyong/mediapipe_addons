# Example of C++ HelloWorld example with MediaPipe as bazel build dependency

This folder shows various examples in C++ of how to create your own independent application or calculator with MediaPipe repo as a bazel build dependency. This enables other MediaPipe users to be able to share examples and code easily

## Hello World C++ binary
[Hello World! C++](./hello_world.cc) This example is modified from the [Hello World! C++ example in MediaPipe](https://github.com/google/mediapipe/blob/master/mediapipe/docs/hello_world_desktop.md)

## HelloWorld Calculator with test (C++)
[Hello World! Calculator](./hello_world_calculator.cc) We show how to create a single independent calculator with MediaPipe repo (master branch) as a bazel build dependency. We include a [calculator test example](./hello_world_calculator_test.cc) that shows how to use the [MediaPipe graph runner](https://github.com/google/mediapipe/blob/master/mediapipe/framework/calculator_runner.cc)
