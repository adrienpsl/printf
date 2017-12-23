#include "../../../pf_2.h"

int manage_hexa(t_pf *pf)
{
	char *hexa;
	char *HEXA;

	hexa = "0123456789abcdef";
	HEXA = "0123456789ABCDEF";

	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	set_lenght_unsigned(pf);
	if (pf->specifier == 'X')
		convert_base_fill_unsigned(pf, HEXA);
	else
		convert_base_fill_unsigned(pf, hexa);
	pf->op.plus = 0;
	pf->op.space = 0;
	manage_before_printer(pf);
	manage_printer(pf);
	return (1);
}