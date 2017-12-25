#include "../../../pf_2.h"

void manage_char(t_pf *pf)
{
	if (pf->op.length == 'l' || pf->op.length == 'L')
		return manage_CHAR(pf);
	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	pf->data = (unsigned char)pf->data;
	pf->pf_int.nb_s[0] = pf->data;
	pf->op.nb_dot = 0;
	pf->op.dot = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}

void manage_CHAR(t_pf *pf)
{
	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	put_uni_into_tab(pf->data, pf->pf_int.nb_s, 4);
	pf->op.nb_dot = 0;
	pf->op.dot = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}