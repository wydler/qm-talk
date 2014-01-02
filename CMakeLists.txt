cmake_minimum_required( VERSION 2.8 )
project( DEMO )
enable_testing()

set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/" )

find_package( Doxygen )
if( DOXYGEN_FOUND )
        add_custom_target( doc ${DOXYGEN_EXECUTABLE} Doxyfile )
        set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "doc/html;doc/latex;" )
else( DOXYGEN_FOUND )
        message( "Doxygen not found - 'doc' can't be generated." )
endif( DOXYGEN_FOUND )

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++11 -Wno-unknown-pragmas" )

add_executable( main src/main.c src/func.c )

add_executable( funcTest test/funcTest.c src/func.c )
add_test( funcTest bin/funcTest )