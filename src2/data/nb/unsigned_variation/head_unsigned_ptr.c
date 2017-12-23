#include "../../../pf_2.h"

int manage_ptr(t_pf *pf)
{
	pf->op.length = 'L';
	pf->op.diez = 1;
	manage_hexa(pf);
}