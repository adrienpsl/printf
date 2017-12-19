#include "../../../print_f.h"

void manage_CHAR(t_pf *pf)
{
	pf->c_w[0] = (wchar_t) pf->data;
	pf->s_w = &pf->c_w;
	pf->o.uni = 1;
	pf->o.nb_space -= strlen_uni(pf->s_w);
	pf->o.nb_preci = 0;
	order_manage_numeric(pf);
	manage_maker(pf);
}


void manage_char(t_pf *pf)
{
	pf->nb_s[0] = (unsigned  char) pf->data;
	pf->o.nb_preci = 0;
	pf->o.space = 0;
	pf->o.plus = 0;
	pf->o.neg = 0;
	order_manage_numeric(pf);
	manage_maker(pf);
}

void put_and_count_str(char c, t_pf *pf)
{
	if (pf->o.nb_dot_str == 0)
		return;
	ft_putchar(c);
	pf->o.nb_dot_str--;
	pf->retour++;
}

void manage_STR(t_pf *pf)
{
	pf->s_w = pf->data;
	pf->o.uni = 1;
	pf->o.nb_space -= strlen_uni(pf->s_w);
	pf->o.nb_zero = 0;
	pf->o.nb_dot_str = pf->o.nb_preci;
	pf->o.nb_preci = 0;
	order_manage_numeric(pf);
	manage_maker(pf);
}

void manage_strr(t_pf *pf)
{
	long i;

	pf->out = pf->data;
	if (pf->o.nb_preci < ft_strlen(pf->out))
		pf->o.nb_space -= pf->o.nb_preci;
	else
	{
		pf->o.nb_space -= ft_strlen(pf->out);
	}
	pf->o.nb_dot_str = pf->o.nb_preci;
	pf->o.nb_preci = 0;
	pf->o.nb_zero = 0;
	manage_maker(pf);
}