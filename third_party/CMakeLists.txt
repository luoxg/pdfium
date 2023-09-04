cmake_minimum_required(VERSION 3.10)

add_subdirectory(abseil-cpp)
add_subdirectory(skia-prebuild)

#add_library(libjpeg
#        libjpeg_turbo/jcapimin.c
#        libjpeg_turbo/jcapistd.c
#        libjpeg_turbo/jccoefct.c
#        libjpeg_turbo/jccolor.c
#        libjpeg_turbo/jcdctmgr.c
#        libjpeg_turbo/jchuff.c
#        libjpeg_turbo/jcicc.c
#        libjpeg_turbo/jcinit.c
#        libjpeg_turbo/jcmainct.c
#        libjpeg_turbo/jcmarker.c
#        libjpeg_turbo/jcmaster.c
#        libjpeg_turbo/jcomapi.c
#        libjpeg_turbo/jcparam.c
#        libjpeg_turbo/jcphuff.c
#        libjpeg_turbo/jcprepct.c
#        libjpeg_turbo/jcsample.c
#        libjpeg_turbo/jctrans.c
#        libjpeg_turbo/jdapimin.c
#        libjpeg_turbo/jdapistd.c
#        libjpeg_turbo/jdatadst.c
#        libjpeg_turbo/jdatasrc.c
#        libjpeg_turbo/jdcoefct.c
#        libjpeg_turbo/jdcolor.c
#        libjpeg_turbo/jddctmgr.c
#        libjpeg_turbo/jdhuff.c
#        libjpeg_turbo/jdicc.c
#        libjpeg_turbo/jdinput.c
#        libjpeg_turbo/jdmainct.c
#        libjpeg_turbo/jdmarker.c
#        libjpeg_turbo/jdmaster.c
#        libjpeg_turbo/jdmerge.c
#        libjpeg_turbo/jdphuff.c
#        libjpeg_turbo/jdpostct.c
#        libjpeg_turbo/jdsample.c
#        libjpeg_turbo/jdtrans.c
#        libjpeg_turbo/jerror.c
#        libjpeg_turbo/jfdctflt.c
#        libjpeg_turbo/jfdctfst.c
#        libjpeg_turbo/jfdctint.c
#        libjpeg_turbo/jidctflt.c
#        libjpeg_turbo/jidctfst.c
#        libjpeg_turbo/jidctint.c
#        libjpeg_turbo/jidctred.c
#        libjpeg_turbo/jmemmgr.c
#        libjpeg_turbo/jmemnobs.c
#        libjpeg_turbo/jpeg_nbits_table.c
#        libjpeg_turbo/jquant1.c
#        libjpeg_turbo/jquant2.c
#        libjpeg_turbo/jutils.c
#
#        libjpeg_turbo/jdatadst-tj.c
#        libjpeg_turbo/jdatasrc-tj.c
#        libjpeg_turbo/rdbmp.c
#        libjpeg_turbo/rdppm.c
#        libjpeg_turbo/transupp.c
#        libjpeg_turbo/turbojpeg.c
#        libjpeg_turbo/wrbmp.c
#        libjpeg_turbo/wrppm.c
#
#        libjpeg_turbo/simd/x86_64/jccolor-avx2.asm
#        libjpeg_turbo/simd/x86_64/jccolor-sse2.asm
#        libjpeg_turbo/simd/x86_64/jcgray-avx2.asm
#        libjpeg_turbo/simd/x86_64/jcgray-sse2.asm
#        libjpeg_turbo/simd/x86_64/jchuff-sse2.asm
#        libjpeg_turbo/simd/x86_64/jcphuff-sse2.asm
#        libjpeg_turbo/simd/x86_64/jcsample-avx2.asm
#        libjpeg_turbo/simd/x86_64/jcsample-sse2.asm
#        libjpeg_turbo/simd/x86_64/jdcolor-avx2.asm
#        libjpeg_turbo/simd/x86_64/jdcolor-sse2.asm
#        libjpeg_turbo/simd/x86_64/jdmerge-avx2.asm
#        libjpeg_turbo/simd/x86_64/jdmerge-sse2.asm
#        libjpeg_turbo/simd/x86_64/jdsample-avx2.asm
#        libjpeg_turbo/simd/x86_64/jdsample-sse2.asm
#        libjpeg_turbo/simd/x86_64/jfdctflt-sse.asm
#        libjpeg_turbo/simd/x86_64/jfdctfst-sse2.asm
#        libjpeg_turbo/simd/x86_64/jfdctint-avx2.asm
#        libjpeg_turbo/simd/x86_64/jfdctint-sse2.asm
#        libjpeg_turbo/simd/x86_64/jidctflt-sse2.asm
#        libjpeg_turbo/simd/x86_64/jidctfst-sse2.asm
#        libjpeg_turbo/simd/x86_64/jidctint-avx2.asm
#        libjpeg_turbo/simd/x86_64/jidctint-sse2.asm
#        libjpeg_turbo/simd/x86_64/jidctred-sse2.asm
#        libjpeg_turbo/simd/x86_64/jquantf-sse2.asm
#        libjpeg_turbo/simd/x86_64/jquanti-avx2.asm
#        libjpeg_turbo/simd/x86_64/jquanti-sse2.asm
#        libjpeg_turbo/simd/x86_64/jsimdcpu.asm
#        )
#
#target_include_directories(libjpeg PUBLIC
#        ${CMAKE_CURRENT_SOURCE_DIR}
#        ${CMAKE_CURRENT_SOURCE_DIR}/../
#        ${CMAKE_CURRENT_SOURCE_DIR}/libjpeg_turbo
#        )

add_library(openjpeg2
        libopenjpeg/bio.c
        libopenjpeg/cio.c
        libopenjpeg/dwt.c
        libopenjpeg/event.c
        libopenjpeg/function_list.c
        libopenjpeg/ht_dec.c
        libopenjpeg/image.c
        libopenjpeg/invert.c
        libopenjpeg/j2k.c
        libopenjpeg/jp2.c
        libopenjpeg/mct.c
        libopenjpeg/mqc.c
        libopenjpeg/openjpeg.c

        # NOTE: libopenjpeg/opj_clock.c is not used.
        libopenjpeg/opj_malloc.cc
        libopenjpeg/opj_malloc.h
        libopenjpeg/pi.c
        libopenjpeg/sparse_array.c
        libopenjpeg/sparse_array.h
        libopenjpeg/t1.c
        libopenjpeg/t1_ht_luts.h
        libopenjpeg/t2.c
        libopenjpeg/tcd.c
        libopenjpeg/tgt.c
        libopenjpeg/thread.c
        )

target_include_directories(openjpeg2 PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        ${CMAKE_CURRENT_SOURCE_DIR}/libopenjpeg
        )

target_link_libraries(openjpeg2 PUBLIC pdfium_base)

add_library(fx_lcms2
        lcms/include/lcms2.h
        lcms/include/lcms2_plugin.h
        lcms/src/cmsalpha.c
        lcms/src/cmscam02.c
        lcms/src/cmscgats.c
        lcms/src/cmscnvrt.c
        lcms/src/cmserr.c
        lcms/src/cmsgamma.c
        lcms/src/cmsgmt.c
        lcms/src/cmshalf.c
        lcms/src/cmsintrp.c
        lcms/src/cmsio0.c
        lcms/src/cmsio1.c
        lcms/src/cmslut.c
        lcms/src/cmsmd5.c
        lcms/src/cmsmtrx.c
        lcms/src/cmsnamed.c
        lcms/src/cmsopt.c
        lcms/src/cmspack.c
        lcms/src/cmspcs.c
        lcms/src/cmsplugin.c
        lcms/src/cmsps2.c
        lcms/src/cmssamp.c
        lcms/src/cmssm.c
        lcms/src/cmstypes.c
        lcms/src/cmsvirt.c
        lcms/src/cmswtpnt.c
        lcms/src/cmsxform.c
        )

target_include_directories(fx_lcms2 PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        ${CMAKE_CURRENT_SOURCE_DIR}/lcms
        ${CMAKE_CURRENT_SOURCE_DIR}/lcms/include
        )

add_library(pdfium_base
        base/compiler_specific.h
        base/bits.h
        base/check.h
        base/check_op.h
        base/component_export.h
        base/containers/adapters.h
        base/containers/contains.h
        base/containers/span.h
        base/debug/alias.cc
        base/debug/alias.h
        base/immediate_crash.h
        base/memory/aligned_memory.cc
        base/memory/aligned_memory.h
        base/memory/ptr_util.h
        base/no_destructor.h
        base/notreached.h
        base/numerics/checked_math.h
        base/numerics/checked_math_impl.h
        base/numerics/clamped_math.h
        base/numerics/clamped_math_impl.h
        base/numerics/safe_conversions.h
        base/numerics/safe_conversions_arm_impl.h
        base/numerics/safe_conversions_impl.h
        base/numerics/safe_math.h
        base/numerics/safe_math_arm_impl.h
        base/numerics/safe_math_clang_gcc_impl.h
        base/numerics/safe_math_shared_impl.h
        base/sys_byteorder.h
        base/template_util.h
        )

target_include_directories(pdfium_base PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        ${CMAKE_CURRENT_SOURCE_DIR}/base
        )

add_subdirectory(freetype/src)

add_library(fx_freetype
        freetype/include/empty.cpp
        freetype/include/pstables.h
        freetype/include/freetype-custom-config/ftmodule.h
        freetype/include/freetype-custom-config/ftoption.h
#        freetype/include/pstables.h
#        freetype/src/include/freetype/config/ftconfig.h
#        freetype/src/include/freetype/config/ftheader.h
#        freetype/src/include/freetype/config/ftmodule.h
#        freetype/src/include/freetype/config/ftoption.h
#        freetype/src/include/freetype/config/ftstdlib.h
#        freetype/src/include/freetype/freetype.h
#        freetype/src/include/freetype/ftadvanc.h
#        freetype/src/include/freetype/ftbbox.h
#        freetype/src/include/freetype/ftbdf.h
#        freetype/src/include/freetype/ftbitmap.h
#        freetype/src/include/freetype/ftbzip2.h
#        freetype/src/include/freetype/ftcache.h
#        freetype/src/include/freetype/ftchapters.h
#        freetype/src/include/freetype/ftcid.h
#        freetype/src/include/freetype/ftcolor.h
#        freetype/src/include/freetype/ftdriver.h
#        freetype/src/include/freetype/fterrdef.h
#        freetype/src/include/freetype/fterrors.h
#        freetype/src/include/freetype/ftfntfmt.h
#        freetype/src/include/freetype/ftgasp.h
#        freetype/src/include/freetype/ftglyph.h
#        freetype/src/include/freetype/ftgxval.h
#        freetype/src/include/freetype/ftgzip.h
#        freetype/src/include/freetype/ftimage.h
#        freetype/src/include/freetype/ftincrem.h
#        freetype/src/include/freetype/ftlcdfil.h
#        freetype/src/include/freetype/ftlist.h
#        freetype/src/include/freetype/ftlzw.h
#        freetype/src/include/freetype/ftmac.h
#        freetype/src/include/freetype/ftmm.h
#        freetype/src/include/freetype/ftmodapi.h
#        freetype/src/include/freetype/ftmoderr.h
#        freetype/src/include/freetype/ftotval.h
#        freetype/src/include/freetype/ftoutln.h
#        freetype/src/include/freetype/ftparams.h
#        freetype/src/include/freetype/ftpfr.h
#        freetype/src/include/freetype/ftrender.h
#        freetype/src/include/freetype/ftsizes.h
#        freetype/src/include/freetype/ftsnames.h
#        freetype/src/include/freetype/ftstroke.h
#        freetype/src/include/freetype/ftsynth.h
#        freetype/src/include/freetype/ftsystem.h
#        freetype/src/include/freetype/fttrigon.h
#        freetype/src/include/freetype/fttypes.h
#        freetype/src/include/freetype/ftwinfnt.h
#        freetype/src/include/freetype/internal/autohint.h
#        freetype/src/include/freetype/internal/cffotypes.h
#        freetype/src/include/freetype/internal/cfftypes.h
#        freetype/src/include/freetype/internal/ftcalc.h
#        freetype/src/include/freetype/internal/ftdebug.h
#        freetype/src/include/freetype/internal/ftdrv.h
#        freetype/src/include/freetype/internal/ftgloadr.h
#        freetype/src/include/freetype/internal/fthash.h
#        freetype/src/include/freetype/internal/ftmemory.h
#        freetype/src/include/freetype/internal/ftobjs.h
#        freetype/src/include/freetype/internal/ftpsprop.h
#        freetype/src/include/freetype/internal/ftrfork.h
#        freetype/src/include/freetype/internal/ftserv.h
#        freetype/src/include/freetype/internal/ftstream.h
#        freetype/src/include/freetype/internal/fttrace.h
#        freetype/src/include/freetype/internal/ftvalid.h
#        freetype/src/include/freetype/internal/psaux.h
#        freetype/src/include/freetype/internal/pshints.h
#        freetype/src/include/freetype/internal/services/svbdf.h
#        freetype/src/include/freetype/internal/services/svcfftl.h
#        freetype/src/include/freetype/internal/services/svcid.h
#        freetype/src/include/freetype/internal/services/svfntfmt.h
#        freetype/src/include/freetype/internal/services/svgldict.h
#        freetype/src/include/freetype/internal/services/svgxval.h
#        freetype/src/include/freetype/internal/services/svkern.h
#        freetype/src/include/freetype/internal/services/svmetric.h
#        freetype/src/include/freetype/internal/services/svmm.h
#        freetype/src/include/freetype/internal/services/svotval.h
#        freetype/src/include/freetype/internal/services/svpfr.h
#        freetype/src/include/freetype/internal/services/svpostnm.h
#        freetype/src/include/freetype/internal/services/svprop.h
#        freetype/src/include/freetype/internal/services/svpscmap.h
#        freetype/src/include/freetype/internal/services/svpsinfo.h
#        freetype/src/include/freetype/internal/services/svsfnt.h
#        freetype/src/include/freetype/internal/services/svttcmap.h
#        freetype/src/include/freetype/internal/services/svtteng.h
#        freetype/src/include/freetype/internal/services/svttglyf.h
#        freetype/src/include/freetype/internal/services/svwinfnt.h
#        freetype/src/include/freetype/internal/sfnt.h
#        freetype/src/include/freetype/internal/t1types.h
#        freetype/src/include/freetype/internal/tttypes.h
#        freetype/src/include/freetype/t1tables.h
#        freetype/src/include/freetype/ttnameid.h
#        freetype/src/include/freetype/tttables.h
#        freetype/src/include/freetype/tttags.h
#        freetype/src/include/ft2build.h
#        freetype/src/src/base/ftbase.c
#        freetype/src/src/base/ftbase.h
#        freetype/src/src/base/ftbitmap.c
#        freetype/src/src/base/ftdebug.c
#        freetype/src/src/base/ftfstype.c
#        freetype/src/src/base/ftglyph.c
#        freetype/src/src/base/ftinit.c
#        freetype/src/src/base/ftmm.c
#        freetype/src/src/base/ftsystem.c
#        freetype/src/src/cff/cff.c
#        freetype/src/src/cff/cffobjs.h
#        freetype/src/src/cid/type1cid.c
#        freetype/src/src/psaux/psaux.c
#        freetype/src/src/pshinter/pshinter.c
#        freetype/src/src/psnames/psmodule.c
#        freetype/src/src/raster/raster.c
#        freetype/src/src/sfnt/sfnt.c
#        freetype/src/src/smooth/smooth.c
#        freetype/src/src/truetype/truetype.c
#        freetype/src/src/type1/type1.c
#
#        freetype/src/include/freetype/ftsynth.h
#        freetype/src/src/base/fttype1.c
        )

target_include_directories(fx_freetype PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        ${CMAKE_CURRENT_SOURCE_DIR}/freetype
        ${CMAKE_CURRENT_SOURCE_DIR}/freetype/include
        ${CMAKE_CURRENT_SOURCE_DIR}/freetype/src
        ${CMAKE_CURRENT_SOURCE_DIR}/freetype/src/src
        ${CMAKE_CURRENT_SOURCE_DIR}/freetype/src/include
        ${CMAKE_CURRENT_SOURCE_DIR}/freetype/src/include/freetype
        )

target_compile_definitions(fx_freetype PRIVATE FT2_BUILD_LIBRARY)

target_link_libraries(fx_freetype PUBLIC freetype fontconfig z)

add_library(fx_agg
        agg23/agg_array.h
        agg23/agg_basics.h
        agg23/agg_clip_liang_barsky.h
        agg23/agg_color_gray.h
        agg23/agg_conv_adaptor_vcgen.h
        agg23/agg_conv_dash.h
        agg23/agg_conv_stroke.h
        agg23/agg_curves.cpp
        agg23/agg_curves.h
        agg23/agg_math.h
        agg23/agg_math_stroke.h
        agg23/agg_path_storage.cpp
        agg23/agg_path_storage.h
        agg23/agg_pixfmt_gray.h
        agg23/agg_rasterizer_scanline_aa.cpp
        agg23/agg_rasterizer_scanline_aa.h
        agg23/agg_render_scanlines.h
        agg23/agg_renderer_base.h
        agg23/agg_renderer_scanline.h
        agg23/agg_rendering_buffer.h
        agg23/agg_scanline_u.h
        agg23/agg_shorten_path.h
        agg23/agg_vcgen_dash.cpp
        agg23/agg_vcgen_dash.h
        agg23/agg_vcgen_stroke.cpp
        agg23/agg_vcgen_stroke.h
        agg23/agg_vertex_sequence.h
        )

target_include_directories(fx_agg PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../
        ${CMAKE_CURRENT_SOURCE_DIR}/agg23
        )

add_library(absl INTERFACE)

target_link_libraries(absl INTERFACE
        absl_algorithm
        absl_base
        absl_cleanup
        absl_debugging
        absl_flags
        absl_hash
        absl_log
        absl_memory
        absl_meta
        absl_numeric
        absl_status
        absl_strings
        absl_synchronization
        absl_time
        absl_utility)
