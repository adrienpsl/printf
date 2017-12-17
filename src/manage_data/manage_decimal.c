#include "../../print_f.h"

int set_lenght_decimal(t_pf *pf)
{
	if (pf->o.length == H)
		pf->data = (char) pf->data;
	else if (pf->o.length == SHORT)
		pf->data = (short) pf->data;
	else if (pf->o.length == LONG);
	else if (pf->o.length == INTMAX)
		pf->data = (intmax_t)(pf->data);
	else if (pf->o.length == SIZE_T)
		pf->data = (size_t)pf->data;
	else if (pf->o.length == LONG_LONG)
		pf->data = (long long)pf->data;
	else
		pf->data = (int)pf->data;
}

