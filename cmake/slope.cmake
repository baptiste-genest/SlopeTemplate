include(FetchContent)
FetchContent_Declare(
  slope
  GIT_REPOSITORY https://github.com/baptiste-genest/slope.git
  GIT_TAG v0.2.0
)
FetchContent_MakeAvailable(slope)
