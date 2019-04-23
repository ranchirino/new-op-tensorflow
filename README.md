# Adding a New Op in Tensorflow (CPU and GPU)
This Op computes the double of a input tensor (2*input)

Tensorflow 1.11 built from source.
Ubuntu 16.04.

#### Build the op library
Place a BUILD file with the .cc files in the tensorflow/core/user_ops directory.

Run the following command in the tensorflow directory to compile double_out.so
bazel build --config opt //tensorflow/core/user_ops:double_out.so

The jupyter file shows how to use the op in Python.
