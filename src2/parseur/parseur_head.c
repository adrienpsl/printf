#include "../pf_2.h"
#include "../../print_f.h"

int printf_parseur(t_pf *pf)
{
	while (**pf->s != END)
	{
		if (**pf->s == '%')
		{
			ft_memset(&(pf->op), 0, sizeof(t_op));
			(*pf->s)++;
			if (str_manage_percent(pf->s ,pf) == TRUE)
			{
				return (TRUE);
			}
		}
		else if (**pf->s != END)
		{
			buff_set_or_print_char(**pf->s, pf);
			(*pf->s)++;
		}
	}
	return (0);
}