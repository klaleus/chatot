cmake_minimum_required(VERSION 3.14)

project(
    chatot
    LANGUAGES C
    DESCRIPTION "minimal logging library"
    HOMEPAGE_URL "https://github.com/klaleus/chatot"
)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(CHATOT_STANDALONE ON)
else()
    set(CHATOT_STANDALONE OFF)
endif()

set(CHATOT_LIBRARY_TYPE STATIC CACHE STRING "cmake library type")
set(CHATOT_BUILD_EXAMPLE ${CHATOT_STANDALONE} CACHE BOOL "build example project")

add_library(
    chatot
    ${CHATOT_LIBRARY_TYPE}
    "${CMAKE_CURRENT_LIST_DIR}/src/chatot.c"
)

target_include_directories(
    chatot
    PUBLIC
    "${CMAKE_CURRENT_LIST_DIR}/include"
)

if(CHATOT_BUILD_EXAMPLE)

    add_executable(
        chatot_example
        "${CMAKE_CURRENT_LIST_DIR}/example/example.c"
    )

    target_link_libraries(
        chatot_example
        PRIVATE
        chatot
    )

endif()