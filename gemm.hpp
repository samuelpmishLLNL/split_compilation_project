#pragma once

#include "gemm_kernel.hpp"

template < int hash_size, int group_size >
void call_gemm() {
  call_gemm_kernel< hash_size, group_size ><<< 1, 1 >>>();
}
