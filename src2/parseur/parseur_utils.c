#include "../pf_2.h"

long get_nxt_argv(t_pf *pf)
{
	return (va_arg(*pf->ap, long));
}

int manage_neg_star(int nb, t_pf *pf)
{
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