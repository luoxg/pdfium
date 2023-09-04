cmake_minimum_required(VERSION 3.10)
cmake_policy(VERSION 3.10)
project(pdfiun LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wunused-parameter -Wunknown-attributes -Wall -Wextra -Wimplicit-fallthrough -Wextra-semi -Wno-unused-variable -Wno-c++11-narrowing -Wno-unused-function")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize=leak -g")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstandalone-debug")

#add_subdirectory(base)
add_subdirectory(constants)
add_subdirectory(core)
add_subdirectory(fpdfsdk)
#add_subdirectory(fxbarcode)
add_subdirectory(fxjs)
add_subdirectory(third_party)
add_subdirectory(testing)

add_executable(pdf_test
        samples/helpers/dump.cc
        samples/helpers/dump.h
        samples/helpers/event.cc
        samples/helpers/event.h
        samples/helpers/page_renderer.cc
        samples/helpers/page_renderer.h
        samples/helpers/write.cc
        samples/helpers/write.h
#        samples/pdfium_test.cc
        samples/onyx_test.cpp
        )

target_link_libraries(pdf_test PUBLIC constants pdf_core pdf_sdk test_support absl)

