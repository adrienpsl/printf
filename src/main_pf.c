#include "../print_f.h"

long get_var(t_pf *pf, va_list *ap)
{
	pf->data = va_arg(*ap, long);
}

// fonction qui redirige les datas en fonction de l'enigme :)
int send_data_good_solver(t_pf *pf)
{
	if (pf->o.specifier == DECIMAL)
		manage_decimal(pf);
	else if (pf->o.specifier == UNSIGNED)
		manage_unsigned(pf);
	else if (pf->o.specifier == HEXA || pf->o.specifier == hexa)
		manage_hexa(pf);
	else if (pf->o.specifier == OCTA)
		manage_octal(pf);
	else if (pf->o.specifier == CHAR)
		 manage_CHAR(pf);
	else if (pf->o.specifier == kart)
		manage_char(pf);
	else if (pf->o.specifier == STR)
		manage_STR(pf);
	else if (pf->o.specifier == str)
		manage_strr(pf);
}

//long ft_printf(char *str, ...)
//{
//	va_list ap;
//	t_pf pf;
//
//	pf.s = &str;
//	pf.retour = 0;
//
//	pf.s_w = NULL;
//	pf.c_w[0] = 0;
//	pf.c_w[1] = 0;
//
//	va_start(ap, str);
//	while (manage_str(&pf))
//	{
//		ft_memset(pf.nb_s, 0, 30);
//		get_var(&pf, &ap);
//		send_data_good_solver(&pf);
//		// print la data, recommencer
//	}
//	return pf.retour;
//}
