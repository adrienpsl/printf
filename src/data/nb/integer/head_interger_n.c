#include "../../../pf_2.h"

void manage_n(t_pf *pf)
{
	uint64_t *tmp;
	tmp = (uint64_t *)pf->data;
	*tmp = pf->retour;
}