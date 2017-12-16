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

typedef struct		s_w_flag
{
	void			*content;
	char			*name;
}					t_w_flag;

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
	RIE,		//0
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
	char 			*key;
	int 			nb_space;
	int				nb_preci;
	uint8_t			zero:1;
	uint8_t 		diez:1;
	uint8_t			left:1;
	uint8_t			plus:1;
	uint8_t 		space:1;

}					t_option;


#endif
