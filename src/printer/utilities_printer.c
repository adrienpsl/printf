#include "../../print_f.h"

static void handle_diez_hexa(t_pf *pf)
{
	if (pf->o.specifier == HEXA)
		put_uni_count_str(L"0X", pf);
	else if (pf->o.specifier == hexa)
		put_uni_count_str(L"0x", pf);
}

void print_first_char(t_pf *pf)
{
	if (pf->o.neg)
		put_uni_and_count('-', pf);
	else if (pf->o.plus)
		put_uni_and_count('+', pf);
	else if (pf->o.space)
		put_uni_and_count(' ', pf);
	else if (pf->o.diez)
	{
		if (pf->o.specifier == HEXA || pf->o.specifier == hexa)
			handle_diez_hexa(pf);
	}
}