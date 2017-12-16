#include "../print_f.h"

int size_nb(long long int nb, unsigned long long u_nb, int base)
{
	int size;

	size = 1;
	if (nb < 0)
		size++;
	if (nb)
		while (nb /= base)
		{
			size++;
		}
	else
		while (u_nb /= base)
		{
			size++;
		}
	return (size);
}

int return_bigger()
{
}

// gere les uintmax
// je verifie les h et les l
// le retour je le gere pas

void set_type(char c, t_option *option)
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

void set_length(char c, t_option *option)
{
	if (c == 'j' || option->length == INTMAX)
		option->length = INTMAX;

	else if (c == 'z' || option->length == SIZE_T)
		option->length = SIZE_T;

		//	else if (c == 'l' && option->length == LONG_LONG)
		//		option->length = LONG;
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

int set_flag(char **ss, t_option *option)
{
	char *s;

	s = *ss;
	if (*s == '.')
	{
		option->nb_preci = ft_atoi(s);
		while (ft_isdigit(*s))
		{
			s++;
		}
	}
	if (ft_isdigit(*s))
	{
		option->nb_space = ft_atoi(s);
		while (ft_isdigit(*s))
		{
			s++;
		}
	}
	if (*s == '#')
		option->diez = 1;
	if (*s == '+')
		option->plus = 1;
	if (*s == '-')
		option->left = 1;
	if (*s == '0')
		option->zero = 1;
	if (*s == ' ')
		option->space = 1;
}

int manage_f(char *s, t_option o)
{
	while (*s)
	{
		set_type(*s, &o);
		set_length(*s, &o);
		set_flag(&s, &o);

		s++;
	}
}
//void pf_option(t_option *o)
//{
//	printf("zero %d \n", o->zero);
//	printf("diez %d \n", o->diez);
//	printf("left %d \n", o->left);
//	printf("plus %d \n", o->plus);
//	printf("space %d \n", o->space);
//
//	printf("nb_space %d \n", o->nb_space);
//	printf("nb_preci %d \n", o->nb_preci);
//
//	printf("%d \n", o->specifier);
//	printf("%d \n", o->length);
//}

void set_op(t_option *o)
{
	o->specifier = 0;
	o->length = 0;
	o->nb_space = 0;
	o->nb_preci = 0;
	o->zero = 0;
	o->diez = 0;
	o->left = 0;
	o->plus = 0;
	o->space = 0;
}