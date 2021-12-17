cmake_minimum_required(VERSION 3.16)

project(split_compilation_test LANGUAGES CUDA)

file(GLOB_RECURSE gemm_kernels ${CMAKE_CURRENT_SOURCE_DIR}/gemm_instantiation*)

add_executable(main ${SOURCE_FILES} main.cu ${gemm_kernels})
#target_precompile_headers(main PRIVATE pch.hpp)
