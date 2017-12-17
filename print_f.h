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

typedef enum		e_length
{
	RIEN,
	H,
	SHORT,
	LONG,
	LONG_LONG,
	INTMAX,
	SIZE_T
}					t_length;

typedef enum		e_specifier
{
	NOTHING,	//0
	DECIMAL,	//1
	OCTA,		//2
	UNSIGNED,	//3
	HEXA,		//4
	hexa,		//4
	CHAR,		//5
	kart,		//6
	STR,		//7
	str,		//8
	PTR,		//9
}					t_specifier;


typedef struct		s_option
{
	t_specifier		specifier;
	t_length		length;
	int 			nb_space;
	int				nb_preci;
	long			nb_zero;
	uint8_t			zero:1;
	uint8_t			dot:1;
	uint8_t 		diez:1;
	uint8_t			left:1;
	uint8_t			plus:1;
	uint8_t 		space:1;
	uint8_t 		neg:1;
	uint8_t 		first_char:1;
}					t_option;

typedef struct		s_pf
{
	t_option		o;
	char			nb_s[30];
	char			*out;
	long 			data;
	long 			retour;
	size_t			lenght_out;
	char 			**s;
}					t_pf;

int set_flag(char **str, t_option *option);
int manage_str(t_pf *pf);
long ft_printf(char *str, ...);
void pf_option(t_option *o);
void set_op(t_option *o);
void manage_decimal(t_pf *pf);
void manage_unsigned(t_pf *pf);
void print_first_char(t_pf *pf);




// printer
void printer_right_dot(t_pf *pf);
void printer_right_no_dot(t_pf *pf);
void printer_left_dot(t_pf *pf);
void printer_left_no_dot(t_pf *pf);

// parseur
void order_manage_numeric(t_pf *pf);


//test
void manage_maker(t_pf *pf);


#endif
