#include "../pf_2.h"

static int get_length_nxt(char **s, t_pf *pf)
{
	t_op *option;

	option = &pf->op;
	if (**s == 'j' || option->length == 'j')
		option->length = 'j';

	else if (**s == 'z' || option->length == 'z')
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
		return str_set_flag(s, pf);
	(*s)++;
	return (0);
}

static int get_all_option(char **s, t_pf *pf)
{
	if (check_char_into_str("DdiOoUuxXcCsSP%", **s))
	{
		pf->specifier = **s;
		(*s)++;
		return (1);
	}
	return get_length_nxt(s, pf);
	/*		option->specifier = DECIMAL;
		else if (**s == 'O' || **s == 'o')
			option->specifier = OCTA;
		else if (**s == 'U' || **s == 'u')
			option->specifier = UNSIGNED;
		else if (**s == 'x')
			option->specifier = hexa;
		else if (**s == 'X')
			option->specifier = HEXA;
		else if (**s == 'c')
			option->specifier = kart;
		else if (**s == 'C')
			option->specifier = CHAR;
		else if (**s == 's')
			option->specifier = str;
		else if (**s == 'S')
			option->specifier = STR;
		else if (**s == 'p')
			option->specifier = PTR;
		else if (**s == '%')
			option->specifier = PERCENT;
		else
			return ;
		return (1);*/
}

int str_manage_percent(t_pf *pf)
{
	char **copy_s;

	(*pf->s)++;
	copy_s = pf->s;
	while (**copy_s != END)
	{
		if (get_all_option(copy_s, pf) == TRUE)
		{
			pf->s = copy_s;
			return (TRUE);
		}
	}
	return (FALSE);
}