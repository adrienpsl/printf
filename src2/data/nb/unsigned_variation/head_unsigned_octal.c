#include "../../../pf_2.h"

int manage_octal(t_pf *pf)
{
	char *s_octal;

	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	s_octal = "01234567";
	set_lenght_unsigned(pf);
	convert_base_fill_unsigned(pf, s_octal);
	pf->op.plus = 0;
	pf->op.space = 0;
	manage_before_printer(pf);
	manage_printer(pf);
	return (1);
}