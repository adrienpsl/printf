#include "../../../print_f.h"

void manage_char(t_pf *pf)
{
//	if (pf->o.length == LONG)
//		pf->o.c_w[0] = (wchar_t)pf->data;
//	else
//		pf->data = (unsigned char)pf->data;
//	pf->o.s_w = &pf->o.c_w;
	order_manage_numeric(pf);
	manage_maker(pf);
}