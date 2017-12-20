#include "pf_2.h"

static void set_zero_struct_pf()
{

}

long ft_printf(char *str, ...)
{
	va_list ap;
	t_pf pf;

	va_start(ap, str);
	pf.ap = &ap;
	pf.s = &str;

	// si le parceur choppe une etoile, il doit rappeler la fonction lui meme pour
	// la precision et la size

//	while (lead_parseur(&pf, ap))
//	{
//
//		// print la data, recommencer
//	}
	return pf.retour;
}