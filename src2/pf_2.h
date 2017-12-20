//
// Created by Adrien PUSEL on 12/20/17.
//

#ifndef PRINTF_PF_2_H
#define PRINTF_PF_2_H


# include "../libft/includes/libft.h"

#include <stdarg.h>
# include <limits.h>

#define TRUE 1
#define END 0
#define FALSE 0


typedef struct s_buff
{
	char	data[BUFF_SIZE + 1];
	size_t	remain_space;
} t_buff;

typedef enum e_length
{
	nothing,
	H,
	SHORT,
	LONG,
	LONG_LONG,
	INTMAX,
	SIZE_T
} t_length;

/*typedef enum e_specifier
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
	PERCENT
} t_specifier;*/

typedef struct s_int
{
	char nb_s[30];
	t_length length;
	uint8_t neg:1;
} t_int;
typedef struct s_op
{
	long nb_dot;
	long nb_space;
	char length;
	uint8_t zero:1;
	uint8_t dot:1;
	uint8_t diez:1;
	uint8_t left:1;
	uint8_t plus:1;
	uint8_t space:1;
} t_op;


typedef struct s_pf
{
	t_buff buff;
	t_op op;
	t_int pf_int;
	char specifier;
	long data;
	long retour;
	char *out;
	va_list *ap;
	char **s;
} t_pf;

/*
**	buffer function
*/
int ft_print_buff(t_buff *buff);
int ft_fill_buff(char *str, t_buff *buff);
void ft_set_buff(t_buff *buff);
int buff_set_or_print(char *for_print,t_pf *pf);

/*
**	head printf
*/
long ft_printf(char *str, ...);
int fill_buff(char *str, t_buff *buff);

/*
**  parseur
*/
char printf_parseur(t_pf *pf);
long get_star_nxt_argv(t_pf *pf);

int str_manage_percent(t_pf *pf);
int str_set_flag(char **str, t_pf *pf);

void set_op_zero(t_op *o);

#endif //PRINTF_PF_2_H