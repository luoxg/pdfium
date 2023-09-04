cmake_minimum_required(VERSION 3.10)

add_library(fxjs
        cjs_event_context_stub.cpp
        cjs_event_context_stub.h
        cjs_runtimestub.cpp
        cjs_runtimestub.h
        ijs_event_context.h
        ijs_runtime.cpp
        ijs_runtime.h
        )

target_include_directories(fxjs PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        )

target_link_libraries(fxjs PUBLIC absl)