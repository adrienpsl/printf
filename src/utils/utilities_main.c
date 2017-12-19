#include "../../print_f.h"

void putstr_and_count(char *s, t_pf *pf)
{
	while (*s)
	{
		if (pf->o.specifier == str)
			put_and_count_str(*s, pf);
		else
			put_and_count(*s, pf);
		s++;
	}
}

void put_and_count(char c, t_pf *pf)
{
	ft_putchar(c);
	pf->retour++;
}

void size_black(int a)
{
	while (a)
	{
		ft_put_uni(L' ');
		a--;
	}
}

void put_uni_and_count(wchar_t c, t_pf *pf)
{
	// en fonction des taille augmenter le retour
	if (c <= 0x7F)
	{
		if(pf->o.nb_dot_str < 1)
			return size_black(1);
		pf->retour++;
	}
	else if (c <= 0x7FF)
	{
		if(pf->o.nb_dot_str < 2)
			return size_black(2);
		pf->retour += 2;
	}
	else if (c <= 0xFFFF)
	{
		if(pf->o.nb_dot_str < 3)
			return size_black(3);
		pf->retour += 3;
	}
	else if (c <= 0x1FFFFF)
	{
		if(pf->o.nb_dot_str < 4)
			return size_black(4);
		pf->retour += 4;
	}
	ft_put_uni(c);
}

void put_uni_count_str(wchar_t *s, t_pf *pf)
{
	if (s)
		while (*s != 0)
		{
			put_uni_and_count(*s, pf);
			s++;
		}
}

size_t strlen_uni(wchar_t *s)
{
	size_t i;

	if (!s)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s <= 0x7F)
			i++;
		else if (*s <= 0x7FF)
			i += 2;
		else if (*s <= 0xFFFF)
			i += 3;
		else if (*s <= 0x1FFFFF)
			i += 4;
		s++;
	}
	//	printf("%d \n", i);
	return (i);
}