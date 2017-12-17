cmake_minimum_required(VERSION 3.9)
project(printf C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
#set ( CMAKE_C_FLAGS "-Wall -Wextra -Werror ")

add_executable(printf main.c src/parser/main_parser.c print_f.h src/print_set.c src/parser/manage_flag.c src/main_pf.c src/manage_data/manage_decimal.c src/utils/utilities.c src/manage_data/manage_unsigned.c src/maker_out/manage_maker.c src/maker_out/printer.c)
target_link_libraries(printf ${CMAKE_SOURCE_DIR}/libft/libft.a)
