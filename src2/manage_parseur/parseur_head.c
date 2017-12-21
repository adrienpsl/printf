#include "../pf_2.h"
#include "../../print_f.h"

// tant que 0 continue

static int parseur_manage_str(t_pf *pf)
{
	char tmp[2];

	tmp[1] = END;
	while (**pf->s != END)
	{
		if (**pf->s == '%')
		{
			if (str_manage_percent(pf) == TRUE)
				return (TRUE);
		}
		else if (**pf->s != END)
		{
			tmp[0] = **pf->s;
			buff_set_or_print(&tmp, pf);
			(*pf->s)++;
		}
	}
	return (1);
}

char printf_parseur(t_pf *pf)
{
	ft_memset(&pf->op, 0, sizeof(t_op));
	parseur_manage_str(pf);
	parseur_manage_str(pf);
	ft_print_buff(&pf->buff);
}