#pragma once

#include "gemm_kernel_definition.hpp"

extern template __global__ void call_gemm_kernel< 1, 1 >();
extern template __global__ void call_gemm_kernel< 2, 2 >();
extern template __global__ void call_gemm_kernel< 3, 3 >();
extern template __global__ void call_gemm_kernel< 4, 4 >();
extern template __global__ void call_gemm_kernel< 5, 5 >();
extern template __global__ void call_gemm_kernel< 6, 6 >();
extern template __global__ void call_gemm_kernel< 7, 7 >();
extern template __global__ void call_gemm_kernel< 8, 8 >();
