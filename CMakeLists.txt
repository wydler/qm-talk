cmake_minimum_required( VERSION 2.8 )
project( DEMO )
enable_testing()

# project specific setup:
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/" )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin )
set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic -std=c99" )
include_directories( ./src )

# main executable:
add_executable( main src/main.c src/func.c )

# unit test executables:
add_executable( funcTest test/funcTest.c src/func.c )
add_test( funcTest ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/funcTest )

# extra target to generate documentation via doxygen
find_package( Doxygen )
if( DOXYGEN_FOUND )
        add_custom_target( doc ${DOXYGEN_EXECUTABLE} Doxyfile )
        set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "doc/html;doc/latex;" )
else( DOXYGEN_FOUND )
        message( "Doxygen not found - 'doc' can't be generated." )
endif( DOXYGEN_FOUND )
