
#include "../../../pf_2.h"

int manage_str(t_pf *pf)
{
//	if (pf->op.length == 'l' || pf->op.length == 'L')
//		return manage_CHAR(pf);
	ft_memset(&pf->text, 0, sizeof(t_text));
	pf->text.out = pf->data;
	pf->text.precision = pf->op.nb_dot;
	pf->op.nb_dot = 0;
	manage_before_printer(pf);
	manage_printer(pf);
	return (1);
}