#include <stdio.h>
//#include "print_f.h"
#include "src2/pf_2.h"
#include <stdint.h>
#include <limits.h>
#include <locale.h>
#include <string.h>

typedef struct s_main_1_0
{
	char ret[400];
	char ret_pf[400];
	char ret_ft_pf[400];
	int nb_pf;
	int nb_ft_pf;
} t_main_1_0;

void set_intobuff_pf(t_main_1_0 *PF, char *str, ...)
{
	va_list ft_pf;
	va_list pf;

	va_start(ft_pf, str);
	va_start(pf, ft_pf);

	fflush(stdout);
	PF->nb_pf = printf(str, pf);
	ft_strcat(PF->ret_pf, PF->ret);

	ft_memset(PF->ret, 0, 400);
	fflush(stdout);

	PF->nb_ft_pf = ft_printf(str, ft_pf);
	ft_strcat(PF->ret_pf, PF->ret);

	va_end(ft_pf);
	va_end(pf);
}

void compare_pf(int nb_test, char *str, t_main_1_0 *pf)
{
	if (strcmp(pf->ret_pf, pf->ret_ft_pf))
		printf("le test %d pas marcher\n le test est : [[ %s ]] \n");
	if (pf->nb_pf != pf->nb_ft_pf)
		printf("le retour du test %d pas marcher\n le test est : [[ %s ]] \n",
			   nb_test, str);
}

//int buff()

int main()
{
	//	ft_printf("fdsf\n");
	//	ft_printf("lllll\n");
	//	ft_printf("%ldt\n");
	//	ft_printf("fdsf\n");
	//	ft_printf("%%%%%%%\n");
	//	ft_printf("%.*d",42,7);
	//	ft_printf("%77.42 *000 ###.* 00+ -hhljzd [[%d]]",42,7,77, 88);
//	ft_printf("[[%d]]", 7);

//	ft_printf("%d\n", ft_printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));
//	ft_printf("%d\n", ft_printf("Les bornes :  %u, %u\n", 0, 4294967295));
//	ft_printf("%d\n", ft_printf("Les bornes :  %o, %o\n", 0, 4294967295));
//	printf("%d\n", printf("Les bornesvrai :  %o, %o\n", 0, 4294967295));
//	ft_printf("%d\n", ft_printf("Les bornes :  %x, %x\n", 0, 4294967295));
//	printf("[[% 3d]]", 42);
	ft_printf("[[% 3d]]", 42);




	return 0;
}

