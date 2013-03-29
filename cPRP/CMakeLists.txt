project(cprp)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIR})

set(CPRP_HEADERS cprp.h)

set(CPRP_SOURCES
    module.c
)

source_group("Source Files" FILES ${CPRP_SOURCES})
source_group("Header Files" FILES ${CPRP_HEADERS})

add_library(cprp SHARED ${CPRP_SOURCES} ${CPRP_HEADERS})

if(WIN32)
    set_target_properties(cprp PROPERTIES SUFFIX ".pyd")
endif()

if(PYTHON_DEBUG_LIBRARY)
    target_link_libraries(cprp debug ${PYTHON_DEBUG_LIBRARY})
    target_link_libraries(cprp optimized ${PYTHON_LIBRARY})
else()
    target_link_libraries(cprp ${PYTHON_LIBRARY})
endif()
