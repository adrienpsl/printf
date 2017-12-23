#include "../../../pf_2.h"

int manage_binaire(t_pf *pf)
{
	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	set_lenght_unsigned(pf);
	convert_base_fill_unsigned(pf, "01");
	pf->op.plus = 0;
	pf->op.space = 0;
	manage_before_printer(pf);
	manage_printer(pf);
	return (1);
}