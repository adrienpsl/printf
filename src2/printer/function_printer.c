
#include "../pf_2.h"

void printer_space(t_pf *pf)
{
	if (pf->op.zero)
	{
		while (pf->op.nb_space > 0)
		{
			buff_set_or_print_char('0', pf);
			pf->op.nb_space--;
		}
	}
	else
		while (pf->op.nb_space > 0)
		{
			buff_set_or_print_char(' ', pf);
			pf->op.nb_space--;
		}
}

void printer_precision(t_pf *pf)
{
	while (pf->op.nb_dot > 0)
	{
		buff_set_or_print_char('0', pf);
		pf->op.nb_dot--;
	}
}

/*
**  if the specifier is string
*/
void manage_buff_and_s(t_pf *pf)
{
	if (pf->op.dot)
	{
		while (pf->text.precision && *pf->text.out != END)
		{
			buff_set_or_print_char(*pf->text.out, pf);
			pf->text.out++;
			pf->text.precision--;
		}
	}
	else
		buff_set_or_print(pf->text.out, pf);
}

/*
**  if the specifier is STRING
*/
void manage_buff_and_sbig(t_pf *pf)
{

	char tmp[5];

	while (*pf->text.u_out)
	{
		ft_memset(&tmp, 0, 5);
		put_uni_into_tab(*pf->text.u_out, tmp, pf->text.precision);
		buff_set_or_print(tmp, pf);
		pf->text.u_out++;
	}
}
//	else
//		buff_set_or_print(pf->text.out, pf);
//}

/*
**	dispatch between specifier s / S / other
*/
void printer_value(t_pf *pf)
{
	if (check_char_into_str("s", pf->specifier))
		manage_buff_and_s(pf);
	if (check_char_into_str("S", pf->specifier))
		manage_buff_and_sbig(pf);
	buff_set_or_print(pf->pf_int.nb_s, pf);
}