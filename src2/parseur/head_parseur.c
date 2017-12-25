#include "../pf_2.h"

static int get_length_nxt(t_pf *pf)
{
	if (**pf->s == 'j' || (**pf->s == 'j' && pf->op.length == 'j'))
		pf->op.length = 'j';
	else if (**pf->s == 'z' || (**pf->s == 'z' && pf->op.length == 'z'))
		pf->op.length = 'z';
	else if (**pf->s == 'l' && pf->op.length == 'l')
		pf->op.length = 'L';
	else if (**pf->s == 'l')
		pf->op.length = 'l';
	else if (**pf->s == 'h' && pf->op.length == 'H')
		pf->op.length = 'h';
	else if (**pf->s == 'h' && pf->op.length == 'h')
		pf->op.length = 'H';
	else if (**pf->s == 'h')
		pf->op.length = 'h';
	else
		return (0);
	(*pf->s)++;
	return (1);
}

static int get_specifier(t_pf *pf)
{
	if (check_char_into_str("DdiOoUuxXcCsSpP%BbnN", **pf->s))
	{
		pf->specifier = **pf->s;
		(*pf->s)++;
		return (1);
	}
	return (0);
}

int str_manage_percent(char **str, t_pf *pf)
{
	while (**str != END)
	{
		if (get_specifier(pf) == TRUE)
		{
			pf->s = str;
			return (TRUE);
		}
		if (get_length_nxt(pf) == TRUE)
			continue;
		if (str_set_flag(str, pf) == TRUE)
			continue;
		return (FALSE);
	}
	return (FALSE);
}

int printf_parseur(t_pf *pf)
{
	while (**pf->s != END)
	{
		if (**pf->s == '%')
		{
			ft_memset(&(pf->op), 0, sizeof(t_op));
			(*pf->s)++;
			if (str_manage_percent(pf->s ,pf) == TRUE)
			{
				return (TRUE);
			}
		}
		else if (**pf->s != END)
		{
			buff_set_or_print_char(**pf->s, pf);
			(*pf->s)++;
		}
	}
	return (0);
}