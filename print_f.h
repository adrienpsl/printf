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
	NOTHING,		//0
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
	long 			data;
	int 			nb_space;
	int				nb_preci;
	uint8_t			zero:1;
	uint8_t			dot:1;
	uint8_t 		diez:1;
	uint8_t			left:1;
	uint8_t			plus:1;
	uint8_t 		space:1;

}					t_option;

int set_flag(char **str, t_option *option);

#endif
