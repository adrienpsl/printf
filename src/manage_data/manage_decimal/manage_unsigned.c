#include "../../../print_f.h"

static int set_lenght_unsigned(t_pf *pf)
{
	if (pf->o.length == H)
		pf->data = (unsigned char) pf->data;
	else if (pf->o.length == SHORT)
		pf->data = (unsigned short) pf->data;
	else if (pf->o.length == LONG)
		pf->data = (unsigned long) pf->data;
	else if (pf->o.length == INTMAX)
		pf->data = (uintmax_t)(pf->data);
	else if (pf->o.length == SIZE_T)
		pf->data = (size_t)pf->data;
	else if (pf->o.length == LONG_LONG)
		pf->data = (unsigned long long)pf->data;
	else
		pf->data = (unsigned int)pf->data;
}

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
	fill_number_str_unsigned(pf->data,pf);
	order_manage_numeric(pf);
	manage_maker(pf);
}