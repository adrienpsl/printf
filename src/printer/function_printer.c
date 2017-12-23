
#include "../../src2/pf_2.h"

void printer_space(t_pf *pf)
{
	if (pf->op.zero)
	{
		while (pf->op.nb_space > 0)
		{
			buff_set_or_print_char('0', pf);
			pf->op.nb_space--;
		}
	}
	else
		while (pf->op.nb_space > 0)
		{
			buff_set_or_print_char(' ', pf);
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

void manage_buff_and_s(t_pf *pf)
{
	if (pf->op.dot)
	{
		while (pf->text.precision && *pf->text.out != END)
		{
			buff_set_or_print_char(*pf->text.out,pf);
			pf->text.out++;
			pf->text.precision--;
		}
	}
	else
		buff_set_or_print(pf->text.out,pf);
}

void printer_value(t_pf *pf)
{
	if (check_char_into_str("s", pf->specifier))
		manage_buff_and_s(pf);
	buff_set_or_print(pf->pf_int.nb_s, pf);
}