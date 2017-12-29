#include "../../../pf_2.h"

void manage_octal(t_pf *pf)
{
	char *s_octal;

	if (pf->specifier == 'O')
		pf->op.length = 'l';
	s_octal = "01234567";
	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	set_lenght_unsigned(pf);
	if (pf->data)
		convert_base_fill_unsigned(pf, s_octal);
	else if (pf->data == 0 && !pf->op.dot)
	{
		pf->pf_int.nb_s[0] = '0';
		pf->op.diez = 0;
	}
//	else if (pf->data == 0 && pf->op.dot && !pf->op.nb_dot)
//		pf->op.diez = 0;
	pf->op.plus = 0;
	pf->op.space = 0;
	if(pf->op.diez && pf->op.dot && pf->op.nb_dot)
		pf->op.diez = 0;
	manage_before_printer(pf);
	manage_printer(pf);
}
