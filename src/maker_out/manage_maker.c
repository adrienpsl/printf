#include "../../print_f.h"

void print_by_left(t_pf *pf)
{

}

void print_by_right(t_pf *pf)
{
	if(pf->o.dot)
		printer_right_dot(pf);
	else
		printer_right_no_dot(pf);
}

void manage_maker(t_pf *pf)
{
//	pf->lenght_out = ft_strlen(pf->out);
//	if(pf->o.left)
//		print_by_left(pf);
//	else
//		print_by_right(pf);
	while (pf->o.nb_space)
	{
		ft_putchar(' ');
		pf->o.nb_space--;
	}
	print_first_char(pf);
	while (pf->o.nb_zero)
	{
		ft_putchar('0');
		pf->o.nb_zero--;
	}

	ft_putstr(pf->out);
}