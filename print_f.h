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
	CHAR,
	SHORT,
	LONG,
	LONG_LONG,
	INTMAX,
	SIZE_T
}					t_length;

typedef enum		e_specifier
{
	STR,
	PTR,
	DECIMAL,
	UNSIGNED,
	OCTA,
	HEXA,
	CHAr
}					t_specifier;


typedef struct		s_option
{
	enum e_length	length;
	char 			*key;
	int 			nb_space;
	int				nb_zero;
	uint8_t			undigned:1;
	uint8_t 		diez:1;
	uint8_t			left:1;
	uint8_t			plus:1;
	uint8_t 		space:1;

}					t_option;

#endif
