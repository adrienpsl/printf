#include "../../../pf_2.h"

void manage_ptr(t_pf *pf)
{
	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	pf->op.length = 'L';
	set_lenght_unsigned(pf);
	if (pf->data)
		convert_base_fill_unsigned(pf, "0123456789abcdef");
	else if (!pf->data && !pf->op.dot)
		convert_base_fill_unsigned(pf, "0123456789abcdef");
	pf->op.plus = 0;
	pf->op.diez = 1;
	pf->op.space = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}