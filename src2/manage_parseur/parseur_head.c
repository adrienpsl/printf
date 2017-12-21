#include "../pf_2.h"
#include "../../print_f.h"

// tant que 0 continue

static int parseur_manage_str(t_pf *pf)
{
	while (**pf->s != END)
	{
		if (**pf->s == '%')
		{
			if (str_manage_percent(pf) == TRUE)
				return (TRUE);
		}
		else if (**pf->s != END)
		{
			buff_set_or_print_char(**pf->s,pf);
			(*pf->s)++;
		}
	}
	return (0);
}

int printf_parseur(t_pf *pf)
{
	ft_memset(&pf->op, 0, sizeof(t_op));
	return (parseur_manage_str(pf));
}