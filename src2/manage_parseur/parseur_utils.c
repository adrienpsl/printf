#include "../pf_2.h"

long get_star_nxt_argv(t_pf *pf)
{
	return (va_arg(*pf->ap, long));
}