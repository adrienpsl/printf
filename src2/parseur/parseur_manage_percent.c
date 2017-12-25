#include "../pf_2.h"

static int get_length_nxt(char **s, t_pf *pf)
{
	t_op *option;

	option = &pf->op;
	if (**s == 'j' || (**s == 'j' && option->length == 'j'))
		option->length = 'j';
	else if (**s == 'z' || (**s == 'z' && option->length == 'z'))
		option->length = 'z';
	else if (**s == 'l' && option->length == 'l')
		option->length = 'L';
	else if (**s == 'l')
		option->length = 'l';
	else if (**s == 'h' && option->length == 'H')
		option->length = 'h';
	else if (**s == 'h' && option->length == 'h')
		option->length = 'H';
	else if (**s == 'h')
		option->length = 'h';
	else
		return (0);
	(*s)++;
	return (1);
}

static int get_specifier(char **s, t_pf *pf)
{
	if (check_char_into_str("DdiOoUuxXcCsSpP%Bb", **s))
	{
		pf->specifier = **s;
		(*s)++;
		return (1);
	}
	return (0);
}

int str_manage_percent(char **str, t_pf *pf)
{
	while (**str != END)
	{
		if (get_specifier(str, pf) == TRUE)
		{
			pf->s = str;
			return (TRUE);
		}
		if (get_length_nxt(str, pf) == TRUE)
			continue;
		if (str_set_flag(str, pf) == TRUE)
			continue;
		return (FALSE);
	}
	return (FALSE);
}