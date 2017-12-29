cmake_minimum_required(VERSION 3.9)
project(printf C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
#set ( CMAKE_C_FLAGS "-Wall -Wextra -Werror ")

add_executable(printf
        #        maintest.c main.c src/parser/main_parser.c print_f.h src/print_set.c src/parser/manage_flag.c src/main_pf.c src/data/manage_decimal/manage_decimal.c src/data/manage_decimal/utils_decimals/utilities_decimal.c src/data/manage_decimal/utils_decimals/manage_unsigned.c src/printer/manage_printer.c src/printer/printer.c src/printer/utilities_printer.c src/data/manage_decimal/manage_hexa.c src/data/manage_decimal/handle_before_printer.c src/data/manage_decimal/manage_octal.c src/utils/utilities_main.c src/data/manage_text/manage_char.c


        #       second attent
        src/data/nb/integer/head_integer_signed.c

        #       parseur

        #        buffer
        src/main_pfff.c src/pf_2.h src/buffer/head_buffer.c


        #        main
#        main.c
        maintest.c

        src/parseur/head_parseur.c src/parseur/parseur_utils.c src/parseur/parseur_flag.c src/data/manage_before_printer.c src/printer/head_printer.c src/utils_main.c src/printer/function_printer.c src/data/nb/unsigned/head_integer_unsigned.c src/data/nb/unsigned/utils_unsigned_integer.c src/data/nb/unsigned_variation/head_unsigned_octal.c src/data/nb/unsigned_variation/head_unsigned_hexa.c src/data/nb/unsigned_variation/head_unsigned_binairy.c src/data/text/char/head_char.c src/printer/utils_printer.c src/data/text/str/manage_str.c src/data/nb/unsigned_variation/head_unsigned_ptr.c src/data/nb/integer/head_interger_n.c src/parseur/parseur_flag_utils.c src/data/nb/float/head_double.c src/data/text/other/head_percent.c)
target_link_libraries(printf ${CMAKE_SOURCE_DIR}/libft/libft.a)
