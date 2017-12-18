#include "../../../print_f.h"

void manage_hexa(t_pf *pf)
{
	char *s_hexa;
	char *s_HEXA;

	s_hexa = "0123456789abcdef";
	s_HEXA = "0123456789ABCDEF";
	set_lenght_unsigned(pf);
	if (pf->o.specifier == HEXA)
		convert_base_fill_unsigned(pf, s_HEXA);
	else
		convert_base_fill_unsigned(pf, s_hexa);
	pf->o.plus = 0;
	pf->o.space = 0;
	if(pf->o.diez)
		pf->o.nb_space -= 2;
	order_manage_numeric(pf);
	manage_maker(pf);
}