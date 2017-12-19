#include "../../../print_f.h"

void manage_octal(t_pf *pf)
{
	char *s_octal;

	s_octal = "01234567";
	set_lenght_unsigned(pf);
	convert_base_fill_unsigned(pf, s_octal);
	pf->o.plus = 0;
	pf->o.space = 0;
	if (pf->o.diez == 1)
		if(!pf->o.nb_preci)
		{
			pf->o.nb_preci = 1;
			pf->o.nb_space--;
		}
	order_manage_numeric(pf);
	manage_maker(pf);
}