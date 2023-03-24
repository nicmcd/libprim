load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")

release = "1.13.0"
http_archive(
  name = "googletest",
  urls = ["https://github.com/google/googletest/archive/refs/tags/v" + release + ".tar.gz"],
  strip_prefix = "googletest-" + release,
)

http_file(
  name = "cpplint_build",
  urls = ["https://raw.githubusercontent.com/nicmcd/pkgbuild/master/cpplint.BUILD"],
)

release = "1.5.4"
http_archive(
  name = "cpplint",
  urls = ["https://github.com/cpplint/cpplint/archive/" + release + ".tar.gz"],
  strip_prefix = "cpplint-" + release,
  build_file = "@cpplint_build//file:downloaded",
)

http_file(
  name = "clang_format",
  urls = ["https://raw.githubusercontent.com/nicmcd/pkgbuild/master/clang-format"],
)
