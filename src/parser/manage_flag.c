#include "../../print_f.h"

static void get_precision_nb(char **s, t_option *option)
{
	int i;

	option->dot = 1;
	i = 1;
	option->nb_preci = ft_atoi((*s) + 1);
	while (ft_isdigit((*s)[i]))
	{
		i++;
	}
	*s += i;
}

static void get_space_nb(char **s, t_option *option)
{
	option->nb_space = ft_atoi(*s);
	while (ft_isdigit(**s))
	{
		(*s)++;
	}
}

void set_flag(char **str, t_option *option)
{
	if (**str == '0')
		option->zero = 1;
	else if (**str == '.')
		return get_precision_nb(str, option);
	else if (ft_isdigit(**str))
		return get_space_nb(str, option);
	else if (**str == '#')
		option->diez = 1;
	else if (**str == '+')
		option->plus = 1;
	else if (**str == '-')
		option->left = 1;
	else if (**str == ' ')
		option->space = 1;
	else
		return ;
	(*str)++;
}