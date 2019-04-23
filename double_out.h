
#ifndef DOUBLE_OUT_H_
#define DOUBLE_OUT_H_

#include "third_party/eigen3/unsupported/Eigen/CXX11/Tensor"


template <typename Device, typename T>
struct ExampleFunctor {
  void operator()(const Device& d, int size, const T* in, T* out);
};

#if GOOGLE_CUDA
// Partially specialize functor for GpuDevice.
template <typename T>
struct ExampleFunctor<Eigen::GpuDevice, T> {
  void operator()(const Eigen::GpuDevice& d, int size, const T* in, T* out);
};
#endif

#endif // DOUBLE_OUT_H_