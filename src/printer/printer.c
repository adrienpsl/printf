#include "../../print_f.h"

void printer_space(t_pf *pf)
{
	while (pf->o.nb_space > 0)
	{
		put_and_count(' ', pf);
		pf->o.nb_space--;
	}
}

void printer_first_char(t_pf *pf)
{
	if (pf->o.specifier == DECIMAL)
		print_first_char(pf);
	if (pf->o.specifier == HEXA || pf->o.specifier == hexa)
		print_first_char(pf);
}

void printer_zero(t_pf *pf)
{
	while (pf->o.nb_zero > 0)
	{
		put_and_count('0', pf);
		pf->o.nb_zero--;
	}
}

void printer_precision(t_pf *pf)
{
	while (pf->o.nb_preci > 0)
	{
		put_and_count('0', pf);
		pf->o.nb_preci--;
	}
}

void printer_out(t_pf *pf)
{
	if (pf->o.uni == 1)
		put_uni_count_str(pf->s_w, pf);

	else
		putstr_and_count(pf->out, pf);
}