#include "../print_f.h"

long get_var(t_pf *pf, va_list *ap)
{
	pf->data = va_arg(*ap,long);
}



// fonction qui redirige les datas en fonction de l'enigme :)
int send_data_good_solver(t_pf *pf)
{
	fill_number_str_signed(pf->data,pf);
}

long ft_printf(char *str, ...)
{
	va_list ap;
	t_pf pf;

	pf.s = &str;
	pf.retour = 0;
	va_start(ap, str);
	while (manage_str(&pf))
	{
		ft_memset(pf.nb_s,0,30);
		get_var(&pf, &ap);
		send_data_good_solver(&pf);
		printf("%s \n",pf.nb_s);
		// print la data, recommencer
	}
}
