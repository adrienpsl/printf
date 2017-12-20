
#include "../pf_2.h"

static void clean_str(char **s)
{
	if (**s == '.')
		(*s)++;
	if (**s == '*')
		(*s)++;
	while (ft_isdigit(**s))
	{
		(*s)++;
	}
}

static void manage_dot(char **str, t_pf *pf)
{
	if ((*str) + 2 == '*')
		pf->op.nb_dot = get_star_nxt_argv(pf);
	else
		pf->op.nb_dot = ft_atoi((*str) + 1);
}

int str_set_flag(char **str, t_pf *pf)
{
	t_op *option;

	option = &pf->op;
	if (**str == '0')
		option->zero = 1;
	else if (**str == '.')
		manage_dot(str,pf);
	else if (ft_isdigit(**str))
		option->nb_space = ft_atoi((*str) + 1);
	else if (**str == '#')
		option->diez = 1;
	else if (**str == '+')
		option->plus = 1;
	else if (**str == '-')
		option->left = 1;
	else if (**str == ' ')
		option->space = 1;
	else
	{
		(*str)++;
		return (0);
	}
	clean_str(str);
	return (0);
}