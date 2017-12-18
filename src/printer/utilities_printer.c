#include "../../print_f.h"

static void handle_diez_hexa(t_pf *pf)
{
	if (pf->o.specifier == HEXA)
		putstr_and_count("0X", pf);
	else if (pf->o.specifier == hexa)
		putstr_and_count("0x", pf);
}

void print_first_char(t_pf *pf)
{
	if (pf->o.neg)
		put_and_count('-', pf);
	else if (pf->o.plus)
		put_and_count('+', pf);
	else if (pf->o.space)
		put_and_count(' ', pf);
	else if (pf->o.diez)
	{
		if (pf->o.specifier == HEXA || pf->o.specifier == hexa)
			handle_diez_hexa(pf);
	}
}
