# Adding a New Op in Tensorflow (CPU and GPU)
This Op computes the double of an input tensor (2 * input)

Tensorflow 1.11 built from source with GPU support.

Ubuntu 16.04.

#### Build the op library
Place a BUILD file with the .cc files in the tensorflow/core/user_ops directory.

Run the following command in the tensorflow directory to compile double_out.so
```bash
bazel build --config opt //tensorflow/core/user_ops:double_out.so
```

#### Use the op
The jupyter file (.ipynb) shows how to use the op in Python.
