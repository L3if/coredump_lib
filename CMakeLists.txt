cmake_minimum_required(VERSION 3.5)

project(pie_test)
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_BUILD_RPATH_USE_ORIGIN TRUE)
add_library(${PROJECT_NAME} SHARED
        lib/lib.cpp
        )
target_compile_options(${PROJECT_NAME} PUBLIC "-pie")
target_link_libraries(${PROJECT_NAME} "-pie -Wl")
set_property(TARGET ${PROJECT_NAME} PROPERTY POSITION_INDEPENDENT_CODE 1)

add_executable(test_test
        src/test.cpp
        )
target_link_libraries(test_test pie_test)
set_property(TARGET test_test PROPERTY POSITION_INDEPENDENT_CODE 1)
#install_name_tool -change @rpath/libpie_test.dylib  @executable_path/libpie_test.dylib cmake-build-debug/test_test