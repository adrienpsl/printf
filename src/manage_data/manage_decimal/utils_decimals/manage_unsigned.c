#include "../../../../print_f.h"

static int fill_number_str_unsigned(unsigned long nb, t_pf *pf)
{
	int i;

	i = 0;
	while (nb)
	{
		pf->nb_s[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	ft_str_rev(pf->nb_s);
}

void manage_unsigned(t_pf *pf)
{
	set_lenght_unsigned(pf);
	fill_number_str_unsigned(pf->data, pf);
	order_manage_numeric(pf);
	manage_maker(pf);
}