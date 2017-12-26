
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

static int manage_dot(char **str, t_pf *pf)
{
	pf->op.dot = 1;
	if (*((*str) + 1) == '*')
		pf->op.nb_dot = get_star_nxt_argv(pf);
	else
		pf->op.nb_dot = ft_atoi((*str) + 1);
	clean_str(str);
	return (TRUE);
}

static int manage_digit(char **str, t_op *option)
{
	option->nb_space = ft_atoi(*str);
	clean_str(str);
	return (TRUE);
}

int str_set_flag(t_pf *pf)
{
	if (**pf->s == '0')
		pf->op.zero = 1;
	else if (**pf->s == '.')
		return (manage_dot(pf->s, pf));
	else if (ft_isdigit(**pf->s))
		return (manage_digit(pf->s, &pf->op));
	else if (**pf->s == '*')
		pf->op.nb_space = get_star_nxt_argv(pf);
	else if (**pf->s == '#')
		pf->op.diez = 1;
	else if (**pf->s == '+')
		pf->op.plus = 1;
	else if (**pf->s == '-')
		pf->op.left = 1;
	else if (**pf->s == ' ')
		pf->op.space = 1;
	else if (**pf->s == '&')
		return (get_color(pf));
	else if (**pf->s == '!')
		return (get_maj(pf));
	else
		return (FALSE);
	(*pf->s)++;
	return (TRUE);
}