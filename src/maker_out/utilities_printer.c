#include "../../print_f.h"

void print_first_char(t_pf *pf)
{
	if(pf->o.neg)
		ft_putchar('-');
	else if(pf->o.plus)
		ft_putchar('+');
	else if(pf->o.space)
		ft_putchar(' ');
}
