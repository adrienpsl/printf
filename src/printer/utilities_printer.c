#include "../../print_f.h"

static void handle_diez_hexa(t_pf *pf)
{
	if (pf->o.specifier == HEXA)
		ft_putstr("0X");
	else if (pf->o.specifier == hexa)
		ft_putstr("0x");
}

void print_first_char(t_pf *pf)
{
	if (pf->o.neg)
		ft_putchar('-');
	else if (pf->o.plus)
		ft_putchar('+');
	else if (pf->o.space)
		ft_putchar(' ');
	else if (pf->o.diez)
	{
		if(pf->o.specifier == HEXA || pf->o.specifier == hexa)
			handle_diez_hexa(pf);
	}
}
