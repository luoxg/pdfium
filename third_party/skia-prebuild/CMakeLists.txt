cmake_minimum_required(VERSION 3.10)

add_library(skia_base STATIC IMPORTED GLOBAL)
add_library(skia_svg STATIC IMPORTED GLOBAL)
add_library(skia_shader STATIC IMPORTED GLOBAL)
add_library(skia_unicode STATIC IMPORTED GLOBAL)
add_library(skia_resource STATIC IMPORTED GLOBAL)

set_property(TARGET skia_base PROPERTY INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/../skia;${CMAKE_CURRENT_SOURCE_DIR}/../skia/include;${CMAKE_CURRENT_SOURCE_DIR}/../skia/include/core;${CMAKE_CURRENT_SOURCE_DIR}/../skia/modules;${CMAKE_CURRENT_SOURCE_DIR}/../skia/src")

set_property(TARGET skia_base PROPERTY IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/linux/clang-x86_64/libskia.a)
set_property(TARGET skia_svg PROPERTY IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/linux/clang-x86_64/libsvg.a)
set_property(TARGET skia_shader PROPERTY IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/linux/clang-x86_64/libskshaper.a)
set_property(TARGET skia_unicode PROPERTY IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/linux/clang-x86_64/libskunicode.a)
set_property(TARGET skia_resource PROPERTY IMPORTED_LOCATION  ${CMAKE_CURRENT_SOURCE_DIR}/linux/clang-x86_64/libskresources.a)

add_library(skia INTERFACE)
target_include_directories(skia INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        ${CMAKE_CURRENT_SOURCE_DIR}/../skia
        ${CMAKE_CURRENT_SOURCE_DIR}/../skia-prebuild
        )

target_link_libraries(skia INTERFACE skia_resource skia_svg skia_shader skia_unicode skia_base fontconfig fx_freetype pthread png jpeg z icui18n icuuc icudata GL)
