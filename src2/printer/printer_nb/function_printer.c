
#include "../../pf_2.h"

void printer_space(t_pf *pf)
{
	if (pf->op.dot)
	{
		while (pf->op.nb_space > 0)
		{
			buff_set_or_print_char(' ', pf);
			pf->op.nb_space--;
		}
	}
	else
		while (pf->op.nb_space > 0)
		{
			buff_set_or_print_char('0', pf);
			pf->op.nb_space--;
		}
}

void printer_precision(t_pf *pf)
{
	while (pf->op.nb_dot > 0)
	{
		buff_set_or_print_char('0', pf);
		pf->op.nb_dot--;
	}
}

void printer_nb(t_pf *pf)
{
	buff_set_or_print(pf->pf_int.nb_s, pf);
}