#include "../../../pf_2.h"

void manage_percent(t_pf *pf)
{
	ft_memset(&pf->text, 0, sizeof(t_text));
	ft_memset(&pf->pf_int, 0, sizeof(pf->pf_int));
	pf->text.out = pf->pf_int.nb_s;
	pf->text.out[0] = '%';
	pf->text.precision = pf->op.nb_dot;
	pf->op.nb_dot = 0;
	pf->op.space = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}

void manage_fuck(t_pf *pf)
{
	ft_memset(&pf->text, 0, sizeof(t_text));
	ft_memset(&pf->pf_int, 0, sizeof(pf->pf_int));
	pf->text.out = pf->pf_int.nb_s;
	pf->text.out[0] = pf->specifier;
	pf->text.precision = pf->op.nb_dot;
	pf->op.nb_dot = 0;
	pf->op.space = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}