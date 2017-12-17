#include "../../print_f.h"

static int set_lenght_decimal(t_pf *pf)
{
	if (pf->o.length == H)
		pf->data = (char) pf->data;
	else if (pf->o.length == SHORT)
		pf->data = (short) pf->data;
	else if (pf->o.length == LONG);
	else if (pf->o.length == INTMAX)
		pf->data = (intmax_t)(pf->data);
	else if (pf->o.length == SIZE_T)
		pf->data = (size_t)pf->data;
	else if (pf->o.length == LONG_LONG)
		pf->data = (long long)pf->data;
	else
		pf->data = (int)pf->data;
}

static int fill_number_str_signed(long nb, t_pf *pf)
{
	int i;

	i = 0;
	if (nb == LONG_MIN)
	{
		pf->nb_s[i] = (LONG_MIN % 10) * -1 + '0';
		nb /= 10;
		i++;
	}
	if (nb < 0)
	{
		nb *= -1;
		pf->o.neg = 1;
	}
	while (nb)
	{
		pf->nb_s[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	ft_str_rev(pf->nb_s);
}

void manage_decimal(t_pf *pf)
{
	set_lenght_decimal(pf);
	fill_number_str_signed(pf->data,pf);

	pf->out = &pf->nb_s;
	pf->lenght_out = ft_strlen(pf->out);
	// il faut le check
	pf->o.first_char = 1;
}