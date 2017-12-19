#include "../../print_f.h"

// gere les uintmax
// je verifie les h et les l
// le retour je le gere pas
// si mon nb est negatif ?

// tte les fonctions doivent clean apres avoir get leur char  

void set_specifier(char **s, t_option *option)
{
	if (check_char_into_str("Ddi", **s))
		option->specifier = DECIMAL;
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
	else
		return ;
	(*s)++;
}

void get_length(char **s, t_option *option)
{
	if (**s == 'j' || option->length == INTMAX)
		option->length = INTMAX;

	else if (**s == 'z' || option->length == SIZE_T)
		option->length = SIZE_T;

	else if (**s == 'l' && option->length == LONG)
		option->length = LONG_LONG;
	else if (**s == 'l')
		option->length = LONG;

	else if (**s == 'h' && option->length == SHORT)
		option->length = H;
	else if (**s == 'h' && option->length == H)
		option->length = SHORT;
	else if (**s == 'h')
		option->length = SHORT;
	else
		return ;
	(*s)++;
}

int handle_pourcent(char **s, t_option *o)
{
	(*s)++;
	set_specifier(s, o);
	while (o->specifier == NOTHING && **s != '\0')
	{
		get_length(s, o);
		set_flag(s, o);
		set_specifier(s, o);
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
	putchar('\n');
	return (0);
}
