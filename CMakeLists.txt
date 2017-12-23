cmake_minimum_required(VERSION 3.9)
project(printf C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
#set ( CMAKE_C_FLAGS "-Wall -Wextra -Werror ")

add_executable(printf
        #        maintest.c main.c src/parser/main_parser.c print_f.h src/print_set.c src/parser/manage_flag.c src/main_pf.c src/manage_data/manage_decimal/manage_decimal.c src/manage_data/manage_decimal/utils_decimals/utilities_decimal.c src/manage_data/manage_decimal/utils_decimals/manage_unsigned.c src/printer/manage_printer.c src/printer/printer.c src/printer/utilities_printer.c src/manage_data/manage_decimal/manage_hexa.c src/manage_data/manage_decimal/handle_before_printer.c src/manage_data/manage_decimal/manage_octal.c src/utils/utilities_main.c src/manage_data/manage_text/manage_char.c


        #       second attent
        src2/manage_data/nb/integer/head_integer_signed.c

        #       parseur
        src2/manage_parseur/parseur_head.c

        #        buffer
        src2/main_pfff.c src2/pf_2.h src2/manage_buffer/head_buffer.c


        #        main
        main.c

        src2/manage_parseur/parseur_manage_percent.c src2/manage_parseur/parseur_utils.c src2/manage_parseur/parseur_percent_manage_flag.c maintest_1.0.c src2/printer/manage_before_printer.c src/printer/head_printer.c src2/utils_main.c src/printer/function_printer.c src2/manage_data/nb/unsigned/head_integer_unsigned.c src2/manage_data/nb/unsigned/utils_unsigned_integer.c src2/manage_data/nb/unsigned_variation/head_unsigned_octal.c src2/manage_data/nb/unsigned_variation/head_unsigned_hexa.c src2/manage_data/nb/unsigned_variation/head_unsigned_binairy.c src2/manage_data/text/char/head_char_CHAR.c src2/printer/utils_printer.c src2/manage_data/text/str/manage_str.c)
target_link_libraries(printf ${CMAKE_SOURCE_DIR}/libft/libft.a)
