#include "../../print_f.h"

void print_by_left(t_pf *pf)
{
	printer_first_char(pf);
	printer_zero(pf);
	printer_precision(pf);
	printer_out(pf);
	printer_space(pf);
}

void print_by_right(t_pf *pf)
{
	printer_space(pf);
	printer_first_char(pf);
	printer_zero(pf);
	printer_precision(pf);
	printer_out(pf);
}

void manage_maker(t_pf *pf)
{
	if (pf->o.left)
		print_by_left(pf);
	else
		print_by_right(pf);
}