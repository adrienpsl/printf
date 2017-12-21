#include "../../../pf_2.h"

int set_lenght_unsigned(t_pf *pf)
{
	if (pf->op.length == H)
		pf->data = (unsigned char) pf->data;
	else if (pf->op.length == SHORT)
		pf->data = (unsigned short) pf->data;
	else if (pf->op.length == LONG)
		pf->data = (unsigned long) pf->data;
	else if (pf->op.length == INTMAX)
		pf->data = (uintmax_t)(pf->data);
	else if (pf->op.length == SIZE_T)
		pf->data = (size_t)pf->data;
	else if (pf->op.length == LONG_LONG)
		pf->data = (unsigned long long)pf->data;
	else
		pf->data = (unsigned int)pf->data;
}

//
//void convert_base_fill_unsigned(t_pf *pf, char *base)
//{
//	int length_b;
//	int i;
//
//	i = 0;
//	if (pf->data == 0)
//		pf->pf_int.nb_s[0] = '0';
//	length_b = ft_strlen(base);
//	while (pf->data)
//	{
//		pf->nb_s[i] = base[pf->data % length_b] ;
//		pf->data /= length_b;
//		i++;
//	}
//	ft_str_rev(pf->nb_s);
//}