#include "../../../print_f.h"

void manage_char(t_pf *pf)
{
	if (pf->o.length != LONG)
		pf->data = (unsigned char) pf->data;
	else
	{
		pf->o.c_w[0] = (wchar_t) pf->data;
	}
	order_manage_numeric(pf);
	manage_maker(pf);
}