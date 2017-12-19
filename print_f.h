/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpusel <adpusel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 10:48:06 by adpusel           #+#    #+#             */
/*   Updated: 2017/11/16 12:45:44 by adpusel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "../libft/includes/libft.h"
#include <stdarg.h>
# include <limits.h>

typedef enum e_length
{
	RIEN,
	H,
	SHORT,
	LONG,
	LONG_LONG,
	INTMAX,
	SIZE_T
} t_length;

typedef enum e_specifier
{
	NOTHING,    //0
	DECIMAL,    //1
	OCTA,        //2
	UNSIGNED,    //3
	HEXA,        //4
	hexa,        //4
	CHAR,        //5
	kart,        //6
	STR,        //7
	str,        //8
	PTR,        //9
} t_specifier;

typedef struct s_option
{
	t_specifier specifier;
	t_length length;
	int nb_space;
	int nb_preci;
	long nb_zero;
	wchar_t *s_w;
	wchar_t c_w[2];
	uint8_t uni:1;
	uint8_t zero:1;
	uint8_t dot:1;
	uint8_t diez:1;
	uint8_t left:1;
	uint8_t plus:1;
	uint8_t space:1;
	uint8_t neg:1;
	uint8_t first_char:1;
} t_option;

typedef struct s_pf
{
	t_option o;
	char nb_s[30];
	char *out;
	long data;
	long retour;
	size_t lenght_out;
	char **s;
} t_pf;

void set_flag(char **str, t_option *option);
int manage_str(t_pf *pf);
long ft_printf(char *str, ...);
void pf_option(t_option *o);
void set_op(t_option *o);

// manage separeters
void manage_decimal(t_pf *pf);
void manage_unsigned(t_pf *pf);
void manage_hexa(t_pf *pf);
void manage_octal(t_pf *pf);
void manage_char(t_pf *pf);

// utils numeric
void order_manage_numeric(t_pf *pf);
int set_lenght_unsigned(t_pf *pf);
void convert_base_fill_unsigned(t_pf *pf, char *base);

// printer utils
void print_first_char(t_pf *pf);

// printer
void printer_space(t_pf *pf);
void printer_first_char(t_pf *pf);
void printer_zero(t_pf *pf);
void printer_precision(t_pf *pf);
void printer_out(t_pf *pf);

// parseur
void order_manage_numeric(t_pf *pf);

//utils main
void put_and_count(char c, t_pf *pf);
void putstr_and_count(char *s, t_pf *pf);
void put_uni_and_count(wchar_t c, t_pf *pf);
void put_uni_count_str(wchar_t *s, t_pf *pf);

// seter
void set_pf(t_pf *pf);

//test
void manage_maker(t_pf *pf);

#endif
