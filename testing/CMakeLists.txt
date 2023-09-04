cmake_minimum_required(VERSION 3.10)

add_library(test_support
#        allocator_shim_config.cpp
#        allocator_shim_config.h
        command_line_helpers.cpp
        command_line_helpers.h
        font_renamer.cpp
        font_renamer.h
        fx_string_testhelpers.cpp
        fx_string_testhelpers.h
        invalid_seekable_read_stream.cpp
        invalid_seekable_read_stream.h
        pseudo_retainable.h
        scoped_set_tz.cpp
        scoped_set_tz.h
        string_write_stream.cpp
        string_write_stream.h
        test_fonts.cpp
        test_fonts.h
        test_loader.cpp
        test_loader.h
        test_support.h
#        pdf_test_environment.cpp
#        pdf_test_environment.h
#        embedder_test.cpp
#        embedder_test.h
#        embedder_test_constants.cpp
#        embedder_test_constants.h
#        embedder_test_environment.cpp
#        embedder_test_environment.h
#        embedder_test_mock_delegate.h
#        embedder_test_timer_handling_delegate.h
        fake_file_access.cpp
        fake_file_access.h
        range_set.cpp
        range_set.h

#        fuzzer

        image_diff/image_diff_png.cpp
        image_diff/image_diff_png.h

        utils/bitmap_saver.cpp
        utils/bitmap_saver.h
        utils/file_util.cpp
        utils/file_util.h
        utils/hash.cpp
        utils/hash.h
        utils/path_service.cpp
        utils/path_service.h

        )

target_include_directories(test_support PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        )

target_link_libraries(test_support PUBLIC pdf_sdk)