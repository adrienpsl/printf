
#include "../../../pf_2.h"

void manage_str(t_pf *pf)
{
	if (pf->op.length == 'l' || pf->op.length == 'L')
		return manage_str_big(pf);
	ft_memset(&pf->text, 0, sizeof(t_text));
	pf->text.out = (char *) pf->data;
	pf->text.precision = pf->op.nb_dot;
	pf->op.nb_dot = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}

void manage_str_big(t_pf *pf)
{
	ft_memset(&pf->text, 0, sizeof(t_text));

	pf->text.u_out = (wchar_t *) pf->data;
	pf->text.precision = pf->op.dot ? pf->op.nb_dot : 4;
	pf->op.nb_dot = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}