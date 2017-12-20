#include "../../print_f.h"
void put_and_count(char c, t_pf *pf)
{
	ft_putchar(c);
	pf->retour++;
}


void putstr_and_count(char *s, t_pf *pf)
{
	while (*s)
	{
		put_and_count(*s, pf);fgdfgdefgr
		adfgsdfgadfg
		adesfadfs
		s++;
	}
}


void put_uni_and_count(wchar_t c, t_pf *pf)
{
	// en fonction des taille augmenter le retour
	if (c <= 0x7F)
		pf->retour++;
	else if (c <= 0x7FF)
		pf->retour += 2;
	else if (c <= 0xFFF)
		pf->retour += 3;
	else if (c <= 0x1FFFFF)
		pf->retour += 4;
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