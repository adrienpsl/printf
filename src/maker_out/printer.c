#include "../../print_f.h"

void printer_space(t_pf *pf)
{
	while (pf->o.nb_space > 0)
	{
		ft_putchar(' ');
		pf->o.nb_space--;
	}
}

void printer_first_char(t_pf *pf)
{
	if (pf->o.specifier == DECIMAL)
		print_first_char(pf);
}

void printer_zero(t_pf *pf)
{
	while (pf->o.nb_zero > 0)
	{
		ft_putchar('0');
		pf->o.nb_zero--;
	}
}

void printer_precision(t_pf *pf)
{
	while (pf->o.nb_preci > 0)
	{
		ft_putchar('0');
		pf->o.nb_preci--;
	}
}

void printer_out(t_pf *pf)
{
	ft_putstr(pf->out);
}