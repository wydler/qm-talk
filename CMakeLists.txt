cmake_minimum_required( VERSION 2.8 )
project( DEMO )
include( CTest )
enable_testing()

# project specific setup:
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/" )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ./bin )
set( CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic -std=c99" )
include_directories( ./src )

# main executable:
add_executable( main src/main.c src/analyse.c )

# unit test executables:
add_executable( test_analyse test/test_analyse.c src/analyse.c )
add_executable( test_analyse_pedantic test/test_analyse_pedantic.c src/analyse.c )

# add tests
add_test( analyse ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test_analyse )
add_test( analyse_pedantic ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test_analyse_pedantic )

set( CTEST_MEMORYCHECK_COMMAND "valgrind" )

# extra target to generate documentation via doxygen
find_package( Doxygen )
if( DOXYGEN_FOUND )
        add_custom_target( doc ${DOXYGEN_EXECUTABLE} Doxyfile )
        set_directory_properties( PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "doc/html;doc/latex;" )
else( DOXYGEN_FOUND )
        message( "Doxygen not found - 'doc' can't be generated." )
endif( DOXYGEN_FOUND )
