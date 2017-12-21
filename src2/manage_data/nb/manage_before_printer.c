#include "../../pf_2.h"

static void manage_first_char(t_pf *pf)
{
	if (pf->pf_int.neg)
		pf->pf_int.first_char = '-';
	else if (pf->op.plus)
		pf->pf_int.first_char = '+';
	else if (pf->op.space)
		pf->pf_int.first_char = ' ';
	else if (pf->op.diez)
	{
		//		if (pf->o.specifier == HEXA || pf->o.specifier == hexa)
		//			handle_diez_hexa(pf);
	}
	// pour les octal
}

static void manage_precision(t_pf *pf, int size)
{
	pf->op.nb_dot -= size;
	if (pf->op.nb_dot < 0)
		pf->op.nb_dot = 0;
}

static void manage_length(t_pf *pf, int size)
{
	if (pf->pf_int.first_char)
		pf->op.nb_space -= 1;
	if (pf->op.nb_space < pf->op.nb_dot + size)
		pf->op.nb_space = 0;
	else
		pf->op.nb_space -= pf->op.nb_dot + size;

}

int manage_nb_before_printer(t_pf *pf)
{
	int size_nb;

	size_nb = ft_strlen(pf->pf_int.nb_s);
	manage_first_char(pf);
	manage_precision(pf,size_nb);
	manage_length(pf, size_nb);
}
