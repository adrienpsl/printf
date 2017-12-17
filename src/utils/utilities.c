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

void handle_dot(t_pf *pf)
{
	pf->o.zero = 0;

	if (pf->o.nb_preci >= pf->lenght_out)
		pf->o.nb_preci = pf->o.nb_preci - pf->lenght_out;
	if (pf->o.nb_preci)
		pf->o.nb_space = pf->o.nb_space - pf->o.nb_preci;
	if (pf->o.nb_space)
		pf->o.nb_space = pf->o.nb_space - pf->lenght_out;
}

void handle_no_dot(t_pf *pf)
{
	if (pf->o.zero)
		pf->o.nb_zero = (pf->o.nb_space - pf->lenght_out);
	else
	{
		pf->o.nb_space = pf->o.nb_space - pf->lenght_out;
	}
}

void order_manage_numeric(t_pf *pf)
{
	// print var
	pf->out = &pf->nb_s;
	pf->lenght_out = ft_strlen(pf->out);

	if (pf->o.neg || pf->o.plus || pf->o.space)
		pf->o.first_char = 1;

	// si dot == arrange la size || pas dot == nb_space - nb
	if(pf->o.dot)
		handle_dot(pf);
	else if (pf->o.left)
		pf->o.zero = 0;
	else
	{

	}


}