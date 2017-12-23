#include "../../../pf_2.h"

static int set_lenght_decimal(t_pf *pf)
{
	if (pf->op.length == 'H')
		pf->data = (char) pf->data;
	else if (pf->op.length == 'h')
		pf->data = (short) pf->data;
	else if (pf->op.length == 'l');
	else if (pf->op.length == 'j')
		pf->data = (intmax_t) (pf->data);
	else if (pf->op.length == 'z')
		pf->data = (size_t) pf->data;
	else if (pf->op.length == 'L')
		pf->data = (long long) pf->data;
	else
		pf->data = (int) pf->data;
}

static int fill_number_str_signed(long nb, t_pf *pf)
{
	int i;

	i = 0;
	if (nb == 0)
		pf->pf_int.nb_s[i] = '0';
	if (nb == LONG_MIN)
	{
		pf->pf_int.nb_s[i] = (LONG_MIN % 10) * -1 + '0';
		nb /= 10;
		i++;
	}
	if (nb < 0)
	{
		nb *= -1;
		pf->pf_int.neg = 1;
	}
	while (nb)
	{
		pf->pf_int.nb_s[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	ft_str_rev(pf->pf_int.nb_s);
}

int manage_decimal(t_pf *pf)
{
	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	set_lenght_decimal(pf);
	fill_number_str_signed(pf->data, pf);
	manage_before_printer(pf);
	manage_printer(pf);
}