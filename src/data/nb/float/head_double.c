#include "../../../pf_2.h"
// une fonction qui convertie en nb les nombr que je get, ou en float ??


// la fonction head
void manage_float(t_pf *pf)
{
	u_double double_u;
	int puissance;

	ft_memset(&pf->pf_int, 0, sizeof(t_int));
	double_u.d = pf->data;
	puissance = double_u.parts.exponent - 1023;
}
