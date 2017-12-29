.PHONY: all, $(NAME), clean, fclean, re, again

NAME = libftprintf.a
PATH_SRC = src/
HEADER = ./includes/libft.h
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
DO_IN_SHELL = find . -type f -name '*.c' | tr '\n' ' ' | pbcopy

SR = ./buffer/head_buffer.c ./data/manage_before_printer.c ./data/nb/float/head_double.c ./data/nb/integer/head_integer_signed.c ./data/nb/integer/head_interger_n.c ./data/nb/unsigned/head_integer_unsigned.c ./data/nb/unsigned/utils_unsigned_integer.c ./data/nb/unsigned_variation/head_unsigned_binairy.c ./data/nb/unsigned_variation/head_unsigned_hexa.c ./data/nb/unsigned_variation/head_unsigned_octal.c ./data/nb/unsigned_variation/head_unsigned_ptr.c ./data/text/char/head_char_CHAR.c ./data/text/other/head_percent.c ./data/text/str/manage_str.c ./libft/lib/check_char_into_str.c ./libft/lib/ft_atoi.c ./libft/lib/ft_bzero.c ./libft/lib/ft_isalnum.c ./libft/lib/ft_isalpha.c ./libft/lib/ft_isascii.c ./libft/lib/ft_isdigit.c ./libft/lib/ft_isprint.c ./libft/lib/ft_itoa.c ./libft/lib/ft_lst_reverse.c ./libft/lib/ft_lstadd.c ./libft/lib/ft_lstdel.c ./libft/lib/ft_lstdelone.c ./libft/lib/ft_lstiter.c ./libft/lib/ft_lstmap.c ./libft/lib/ft_lstnew.c ./libft/lib/ft_memalloc.c ./libft/lib/ft_memccpy.c ./libft/lib/ft_memchr.c ./libft/lib/ft_memcmp.c ./libft/lib/ft_memcpy.c ./libft/lib/ft_memdel.c ./libft/lib/ft_memmove.c ./libft/lib/ft_memset.c ./libft/lib/ft_put_uni.c ./libft/lib/ft_putchar.c ./libft/lib/ft_putchar_fd.c ./libft/lib/ft_putendl.c ./libft/lib/ft_putendl_fd.c ./libft/lib/ft_putnbr.c ./libft/lib/ft_putnbr_fd.c ./libft/lib/ft_putstr.c ./libft/lib/ft_putstr_fd.c ./libft/lib/ft_str_rev.c ./libft/lib/ft_strcat.c ./libft/lib/ft_strchr.c ./libft/lib/ft_strchr_dup.c ./libft/lib/ft_strchr_how_many.c ./libft/lib/ft_strchr_len.c ./libft/lib/ft_strclr.c ./libft/lib/ft_strcmp.c ./libft/lib/ft_strcpy.c ./libft/lib/ft_strdel.c ./libft/lib/ft_strdup.c ./libft/lib/ft_strequ.c ./libft/lib/ft_striter.c ./libft/lib/ft_striteri.c ./libft/lib/ft_strjoin.c ./libft/lib/ft_strlcat.c ./libft/lib/ft_strlen.c ./libft/lib/ft_strmap.c ./libft/lib/ft_strmapi.c ./libft/lib/ft_strncat.c ./libft/lib/ft_strncmp.c ./libft/lib/ft_strncpy.c ./libft/lib/ft_strndup.c ./libft/lib/ft_strnequ.c ./libft/lib/ft_strnew.c ./libft/lib/ft_strnjoin.c ./libft/lib/ft_strnstr.c ./libft/lib/ft_strrchr.c ./libft/lib/ft_strsplit.c ./libft/lib/ft_strstr.c ./libft/lib/ft_strsub.c ./libft/lib/ft_strtrim.c ./libft/lib/ft_tolower.c ./libft/lib/ft_toupper.c ./libft/lib/get_last_char_str.c ./libft/lib/index_of_char.c ./main_pfff.c ./parseur/head_parseur.c ./parseur/parseur_flag.c ./parseur/parseur_flag_utils.c ./parseur/parseur_utils.c ./printer/function_printer.c ./printer/head_printer.c ./printer/utils_printer.c ./utils_main.c

SRC = $(addprefix src/, $(SR))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^

%.o: %.c
	@gcc $(FLAG) -o $@ -c $<

clean:..
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

#again: fclean all clean