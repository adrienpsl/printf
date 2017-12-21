#include "pf_2.h"

void put_and_count(char c, t_pf *pf)
{
	ft_putchar(c);
	pf->retour++;
}

void putstr_and_count(char *s, t_pf *pf)
{
	while (*s)
	{
		put_and_count(*s, pf);
		s++;
	}
}