#include "../../../print_f.h"

static void handle_dot(t_pf *pf)
{
	pf->o.zero = 0;

	if (pf->o.nb_preci >= pf->lenght_out)
		pf->o.nb_preci = pf->o.nb_preci - pf->lenght_out;
	else
		pf->o.nb_preci = 0;
	if (pf->o.nb_preci)
		pf->o.nb_space = pf->o.nb_space - pf->o.nb_preci;
	if (pf->o.nb_space)
	{
		pf->o.nb_space = pf->o.nb_space - pf->lenght_out;
	}
}

static void handle_no_dot(t_pf *pf)
{
	pf->o.nb_space = pf->o.nb_space - pf->lenght_out;
	if (pf->o.zero)
	{
		pf->o.nb_zero = pf->o.nb_space;
		pf->o.nb_space = 0;
	}
}

void order_manage_numeric(t_pf *pf)
{
	// print var
	pf->out = &pf->nb_s;
	pf->lenght_out = ft_strlen(pf->out);

	if (pf->o.neg || pf->o.plus || pf->o.space)
		pf->o.first_char = 1;
	pf->o.nb_space = pf->o.nb_space - pf->o.first_char;

	// si dot == arrange la size || pas dot == nb_space - nb
	if (pf->o.left)
		pf->o.zero = 0;
	if(pf->o.dot)
		handle_dot(pf);
	else
		handle_no_dot(pf);
}