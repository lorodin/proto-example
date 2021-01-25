cmake_minimum_required(VERSION 3.17)

project(protobuf-example)

include_directories(include)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})

# to find *.bp.h files
include_directories(${CMAKE_CURRENT_BINARY_DIR})

protobuf_generate_cpp(foo_PROTO_SRC foo_PROTO_HEADER protocol/foo.proto)
add_library(foo_proto ${foo_PROTO_HEADER} ${foo_PROTO_SRC})

protobuf_generate_cpp(bar_PROTO_SRC bar_PROTO_HEAD protocol/bar.proto)
add_library(bar_proto ${bar_PROTO_HEAD} ${bar_PROTO_SRC} src/Canvas.cpp inc/Canvas.h)

add_executable(main main.cpp)
target_link_libraries(main foo_proto bar_proto ${PROTOBUF_LIBRARY} Threads::Threads)
