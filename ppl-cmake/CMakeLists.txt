

add_executable (ppl-cmake "ppl-cmake.cpp" "ppl-cmake.h")

set_property(TARGET ppl-cmake PROPERTY CXX_STANDARD 17)

find_package(Threads REQUIRED)
target_link_libraries(ppl-cmake PRIVATE Threads::Threads)