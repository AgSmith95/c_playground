cmake_minimum_required(VERSION 3.13)
project(simplest_daemon)

set(EXECUTABLE simplest_daemon)

add_executable(
    ${EXECUTABLE}
    main.c
)