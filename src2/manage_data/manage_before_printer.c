#include "../pf_2.h"

static void manage_first_char(t_pf *pf)
{
	if (check_char_into_str("UuCcSs", pf->specifier))
	{
		pf->pf_int.first_char[0] = 0;
		return ;
	}
	if (pf->pf_int.neg)
		pf->pf_int.first_char[0] = '-';
	else if (pf->op.plus)
		pf->pf_int.first_char[0] = '+';
	else if (pf->op.space)
		pf->pf_int.first_char[0] = ' ';
	else if (pf->op.diez)
	{
		if (check_char_into_str("Oo", pf->specifier))
			pf->pf_int.first_char[0] = '0';
		if (pf->specifier == 'X')
			ft_strcat(pf->pf_int.first_char, "0X");
		else if (pf->specifier == 'x')
			ft_strcat(pf->pf_int.first_char, "0x");
	}
}

static void manage_precision(t_pf *pf, int size)
{
	pf->op.nb_dot -= size;
	if (pf->op.nb_dot < 0)
		pf->op.nb_dot = 0;
}

static void manage_length(t_pf *pf, int size)
{
	if (pf->pf_int.first_char[0])
		pf->op.nb_space -= ft_strlen(pf->pf_int.first_char);
	if (pf->op.nb_space < pf->op.nb_dot + size)
		pf->op.nb_space = 0;
	else
		pf->op.nb_space -= pf->op.nb_dot + size;
}

size_t get_size(t_pf *pf)
{
	if (check_char_into_str("DdiXxOoBbUu", pf->specifier))
		return (ft_strlen(pf->pf_int.nb_s));
	else if (check_char_into_str("S", pf->specifier))
		return (strlen_uni(pf->text.u_out, pf->op.nb_dot));
	else if (check_char_into_str("s", pf->specifier))
		return (ft_strlen(pf->text.out));
}

int manage_before_printer(t_pf *pf)
{
	size_t size_nb;

	if (pf->specifier != 's' && (pf->op.dot || pf->op.left))
		pf->op.zero = 0;
	size_nb = get_size(pf);
	manage_first_char(pf);
	manage_precision(pf, size_nb);
	manage_length(pf, size_nb);
}
