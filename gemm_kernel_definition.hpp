#pragma once

#include <cstdio> // for printf()

template < int hash_size, int group_size >
__global__ void call_gemm_kernel() {
  printf("%d, %d\n", hash_size, group_size);
}
