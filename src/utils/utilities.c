#include "../../print_f.h"

int fill_number_str_signed(long nb, t_pf *pf)
{
	int i;
	
	i = 0;
	if (nb == LONG_MIN)
	{
		pf->nb_s[i] = (LONG_MIN % 10) * -1 + '0';
		nb /= 10;
		i++;
	}
//	if (nb < 0)
//		nb *= -1;
	while (nb)
	{
	    pf->nb_s[i] = (nb % 10) * -1 + '0';;
		nb /= 10;
		i++;
	}
	ft_str_rev(pf->nb_s);
}
