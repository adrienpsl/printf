#include "../../../pf_2.h"

static int fill_number_str_unsigned(unsigned long nb, t_pf *pf)
{
	int i;

	i = 0;
	if (nb == 0)
		pf->pf_int.nb_s[0] = '0';
	while (nb)
	{
		pf->pf_int.nb_s[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	ft_str_rev(pf->pf_int.nb_s);
}

int manage_unsigned(t_pf *pf)
{
	set_lenght_unsigned(pf);
	fill_number_str_unsigned(pf->data, pf);

	manage_nb_before_printer(pf);
	manage_printer(pf);
}