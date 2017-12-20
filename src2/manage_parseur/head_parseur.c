#include "../pf_2.h"
#include "../../print_f.h"

// tant que 0 continue

//str_launch_get_option(pf)

static int str_forward_into_str(t_pf *pf)
{
}

static int parseur_manage_str(t_pf *pf)
{
	while (**pf->s)
	{
		if (**pf->s == '%')
		{
//			if (str_manage_percent)
				return (1);
		}
		else{}
			// put into buffer
	}
	return (1);
}

char printf_parseur(t_pf *pf)
{
	ft_memset(&pf->op, 0, sizeof(t_op));
	parseur_manage_str(pf);
}