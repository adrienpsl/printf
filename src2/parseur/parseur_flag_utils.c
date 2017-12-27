#include "../pf_2.h"

int get_color(t_pf *pf)
{
	(*pf->s)++;
	pf->op.color = **pf->s;
	(*pf->s)++;
	return (1);
}

int get_maj(t_pf *pf)
{
	(*pf->s)++;
	pf->op.police = **pf->s;
	(*pf->s)++;
	return (1);
}
