#include "../pf_2.h"

int manage_neg_star(int nb, t_pf *pf)
{
	(void)pf;
	if (nb < 0)
	{
		nb = -nb;
		pf->op.left = 1;
	}
	return (nb);
}
long get_star_nxt_argv(t_pf *pf)
{
	return (manage_neg_star(va_arg(*pf->ap, int), pf));
}

long get_star_nxt_argv2(t_pf *pf)
{
//	int a;
//
//	a = va_arg(*pf->ap, int);
//	return (a < 0 ? 0 : a);
	return (va_arg(*pf->ap, int));
}