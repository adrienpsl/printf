#include "../../../pf_2.h"

void manage_n(t_pf *pf)
{
	int *tmp;
	tmp = pf->data;
	*tmp = pf->retour;
}