#include "../../print_f.h"

// gere les uintmax
// je verifie les h et les l
// le retour je le gere pas
// si mon nb est negatif ?


void set_specifier(char c, t_option *option)
{
	if (check_char_into_str("Ddi", c))
		option->specifier = DECIMAL;
	if (c == 'O' || c == 'o')
		option->specifier = OCTA;
	if (c == 'U' || c == 'u')
		option->specifier = UNSIGNED;
	if (c == 'x')
		option->specifier = hexa;
	if (c == 'X')
		option->specifier = HEXA;
	if (c == 'c')
		option->specifier = kart;
	if (c == 'C')
		option->specifier = CHAR;
	if (c == 's')
		option->specifier = str;
	if (c == 'S')
		option->specifier = STR;
	if (c == 'p')
		option->specifier = PTR;
}

void get_length(char c, t_option *option)
{
	if (c == 'j' || option->length == INTMAX)
		option->length = INTMAX;

	else if (c == 'z' || option->length == SIZE_T)
		option->length = SIZE_T;

	else if (c == 'l' && option->length == LONG)
		option->length = LONG_LONG;
	else if (c == 'l')
		option->length = LONG;

	else if (c == 'h' && option->length == SHORT)
		option->length = H;
	else if (c == 'h' && option->length == H)
		option->length = SHORT;
	else if (c == 'h')
		option->length = SHORT;
}

int handle_pourcent(char **s, t_option *o)
{
	(*s)++;
	set_specifier(**s, o);
	while (o->specifier == NOTHING && **s != '\0')
	{
		get_length(**s, o);
		set_flag(s, o);
		set_specifier(**s, o);
		if (**s)
			(*s)++;
	}
}

int manage_str(t_pf *pf)
{
	set_op(&pf->o);
	while (**pf->s)
	{
		if (**pf->s == '%')
		{
			handle_pourcent(pf->s, &pf->o);
			return (1);
		}
		if (**pf->s)
		{
			write(1, *pf->s, 1);
			(*pf->s)++;
			pf->retour++;
		}
	}
	return (0);
}
