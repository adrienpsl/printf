#include "pf_2.h"

long get_var_into_va(t_pf *pf, va_list *ap)
{
	pf->data = va_arg(*ap, long);
}

static void set_zero_struct_pf()
{

}

int send_to_good_manager(t_pf *pf)
{
	if (check_char_into_str("Ddi",pf->specifier))
		return manage_decimal(pf);
	if (check_char_into_str("Uu",pf->specifier))
		return manage_unsigned(pf);

}

long ft_printf(char *str, ...)
{
	va_list ap;
	t_pf pf;

	va_start(ap, str);
	pf.ap = &ap;
	pf.s = &str;
	ft_set_buff(&pf.buff);

	// si le parceur choppe une etoile, il doit rappeler la fonction lui meme pour
	// la precision et la size

 	while (printf_parseur(&pf))
	{
		pf.data = get_star_nxt_argv(&pf);
		send_to_good_manager(&pf);
		// print la data, recommencer

	}
	ft_print_buff(&pf.buff);
	return pf.retour;
}