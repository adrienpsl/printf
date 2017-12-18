#include "../../../print_f.h"

void manage_char(t_pf *pf)
{
	pf->data = (unsigned char)pf->data;
	if (pf->o.length == LONG)
	{
		pf->o.c_w[0] = (wchar_t)pf->data;
	}
	order_manage_numeric(pf);
	manage_maker(pf);
}