
CUDA_BUILD = """
cc_library(
    name = "cuda",
    hdrs = ["cuda.h"],
    srcs = [
        "libcuda.a",
    ],
    visibility = ["//visibility:public"]
)
"""

new_local_repository(
      name = "cuda_archive",
      path = "/Users/zuowang/bazel-example-cpp-external-lib",
      build_file = "cuda.BUILD",
)
