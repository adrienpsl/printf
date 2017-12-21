#include "../../pf_2.h"

void print_by_left(t_pf *pf)
{
	buff_set_or_print_char(pf->pf_int.first_char, pf);
	printer_precision(pf);
	printer_nb(pf);
	printer_space(pf);
}

void print_by_right(t_pf *pf)
{
	if (pf->op.nb_space == 0 &&pf->pf_int.first_char[0])
	{
		buff_set_or_print_char(pf->pf_int.first_char, pf);
		pf->pf_int.first_char[0] = 0;
	}
	if (pf->op.zero && pf->pf_int.first_char[0])
	{
		buff_set_or_print_char(pf->pf_int.first_char, pf);
		pf->pf_int.first_char[0] = 0;
	}
	printer_space(pf);
	if (pf->pf_int.first_char[0])
		buff_set_or_print_char(pf->pf_int.first_char, pf);
	printer_precision(pf);
	printer_nb(pf);
}

void manage_printer(t_pf *pf)
{
	if (pf->op.left)
		print_by_left(pf);
	else
		print_by_right(pf);
}