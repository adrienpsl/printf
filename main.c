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

void test(char *s, char *d)
{
	memset(d, 0, 200);
	strcat(d, s);
	printf(d, 42, -42);
	ft_printf(d, 42, -42);
	printf(" \n");
}

void test2(char *s, char *d)
{
	memset(d, 0, 200);
	strcat(d, s);
	printf(d, 'c', 'z');
	ft_printf(d, 'c', 'z');
	printf(" \n");
}

void test3(char *s, char *d)
{
	memset(d, 0, 200);
	strcat(d, s);
	printf(d, 0x1234, 'z');
	ft_printf(d, 0x1234, 'z');
	printf(" \n");
}

int main()
{
	char s[200];
	char *o = "super";
//	printf("--%08.9s--\n",o);
//
////	ft_printf("[[%08.9s]]",o);
//	ft_printf("[[%5#x]]",42);
//	printf("[[%5#x]]",42);

	/*
	//	test("fdsf\n",s);
	//	test("lllll\n",s);
	//	test("%ldt\n",s);
	//	test("fdsf\n",s);
	//	test("%%%%%%%\n",s);
	////	test("%77.42 *000 ###.* 00+ -hhljzd [[%d]]",s);
	//	test("[[%d]]", s);

	//		ft_printf("%d\n", ft_printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));
	//		ft_printf("%d\n", ft_printf("Les bornes :  %u, %u\n", 0, 4294967295));
	//		ft_printf("%d\n", ft_printf("Les bornes :  %o, %o\n", 0, 4294967295));
	//		printf("%d\n", printf("Les bornesvrai :  %o, %o\n", 0, 4294967295));
	//		ft_printf("%d\n", ft_printf("Les bornes :  %x, %x\n", 0, 4294967295));
	//		printf("[[% 3d]]", 42);*/


//			test("[[%44d  %44d]]\n", s);
//			test("[[%6d]]\n", s);
//			test("[[%44.8d  %44.8d]]\n", s);
//
//			test("[[%44 d  %44 d]]\n", s);
//
//			test("[[%4 4d  %4 4d]]\n", s);
//			test("[[%d%d]]\n", s);
//			test("[[%0.8-d %08d]]\n", s);
//			test("[[%08-d %8d]]\n", s);
//		test("[[%0.55-d %0.55d]]\n", s);
//
//	//	// //	===== test unsigned ===============================
//			test("[[%u   %u]]\n", s);
//			test("[[% h u   % h u]]\n", s);
//			test("[[% hh u   % hh u]]\n", s);
//			test("[[% hhh u   % hhh u]]\n", s);
//
//			test("[[% l u   % lu]]\n", s);
//			test("[[% ll u   % ll u]]\n", s);
//			test("[[% lll u   % lll u]]\n", s);
//
//			test("[[% z u   % z u]]\n", s);
//			test("[[% j u   % j u]]\n", s);
//
//			test("[[% -+  .25    u   % +-  .25   u]]\n", s);
//			test("[[% -+  0.25    u   % +-  0.25   u]]\n", s);
//			test("[[% -+  82.25    u   % +-  82.25   u]]\n", s);
//			test("[[% -+  20.25    u   % +-  20.25   u]]\n", s);
//			test("[[% -+  20    u   % +-  20   u]]\n", s);


	//	//	===== test octal ===============================
//		test("[[%o   %o]]\n", s);
//		test("[[% h o   % h o]]\n", s);
//		test("[[% hh o   % hh o]]\n", s);
//		test("[[% hhh o   % hhh o]]\n", s);
//
//		test("[[% l o   % lo]]\n", s);
//		test("[[% ll o   % ll o]]\n", s);
//		test("[[% lll o   % lll o]]\n", s);

//		test("[[% z o   % z o]]\n", s);
//		test("[[% j o   % j o]]\n", s);
//
//		test("[[% -+  .25    o   % +-  .25   o]]\n", s);
//		test("[[% -+  0.25    o   % +-  0.25   o]]\n", s);
//		test("[[% -+  82.25    o   % +-  82.25   o]]\n", s);
//		test("[[% -+  20.25    o   % +-  20.25   o]]\n", s);
//		test("[[% -+  20    o   % +-  20   o]]\n", s);

		test("[[% -+  .25    # o   % +-  .25   # o]]\n", s);
		test("[[% -+  0.25    # o   % +-  0.25   # o]]\n", s);
		test("[[% -+  82.25    # o   % +-  82.25   # o]]\n", s);
		test("[[% -+  20.25    # o   % +-  20.25   # o]]\n", s);
		test("[[% -+  20    # o   % +-  20   # o]]\n", s);


	/*
		//	===== test hexa  0  ===============================
	//	test("[[%# x   %# x]]\n", s);
	//	test("[[% h # x   % h # x]]\n", s);
	//	test("[[% hh # x   % hh # x]]\n", s);
	//	test("[[% hhh # x   % hhh # x]]\n", s);
	//
	//	test("[[% l # x   % l# x]]\n", s);
	//	test("[[% ll # x   % ll # x]]\n", s);
	//	test("[[% lll # x   % lll # x]]\n", s);
	//
	//	test("[[% z # x   % z # x]]\n", s);
	//	test("[[% j # x   % j # x]]\n", s);
	//
	//	test("[[% -+  .25    # x   % +-  .25   # x]]\n", s);
	//	test("[[% -+  0.25    # x   % +-  0.25   # x]]\n", s);
	//	test("[[% -+  82.25    # x   % +-  82.25   # x]]\n", s);
	//	test("[[% -+  20.25    # x   % +-  20.25   # x]]\n", s);
	//	test("[[% -+  20    # x   % +-  20   # x]]\n", s);
	//
	//	test("[[%## x   %## x]]\n", s);
	//	test("[[% -+  .25    # # x   % +-  .25   # # x]]\n", s);
	//	test("[[% -+  0.25    # # x   % +-  0.25   # # x]]\n", s);
	//	test("[[% -+  82.25    # # x   % +-  82.25   # # x]]\n", s);
	//	test("[[% -+  20.25    # # x   % +-  20.25   # # x]]\n", s);
	//	test("[[% -+  20    # # x   % +-  20   # # x]]\n", s);


		//	===== test hexa  1  ===============================
	//	test("[[% x   % x]]\n", s);
	//	test("[[% h  x   % h  x]]\n", s);
	//	test("[[% hh  x   % hh  x]]\n", s);
	//	test("[[% hhh  x   % hhh  x]]\n", s);
	//
	//	test("[[% l  x   % l x]]\n", s);
	//	test("[[% ll  x   % ll  x]]\n", s);
	//	test("[[% lll  x   % lll  x]]\n", s);
	//
	//	test("[[% z  x   % z  x]]\n", s);
	//	test("[[% j  x   % j  x]]\n", s);
	//
	//	test("[[% -+  .25     x   % +-  .25    x]]\n", s);
	//	test("[[% -+  0.25     x   % +-  0.25    x]]\n", s);
	//	test("[[% -+  82.25     x   % +-  82.25    x]]\n", s);
	//	test("[[% -+  20.25     x   % +-  20.25    x]]\n", s);
	//	test("[[% -+  20     x   % +-  20    x]]\n", s);
	//
	//	test("[[% x   % x]]\n", s);
	//	test("[[% -+  .25      x   % +-  .25     x]]\n", s);
	//	test("[[% -+  0.25      x   % +-  0.25     x]]\n", s);
	//	test("[[% -+  82.25      x   % +-  82.25     x]]\n", s);
	//	test("[[% -+  20.25      x   % +-  20.25     x]]\n", s);
	//	test("[[% -+  20      x   % +-  20     x]]\n", s);
	//
	//
	//	test("[[% #  X   % #  X]]\n", s);
	//	test("[[% h  #  X   % h  #  X]]\n", s);
	//	test("[[% hh  #  X   % hh  #  X]]\n", s);
	//	test("[[% hhh  #  X   % hhh  #  X]]\n", s);
	//
	//	test("[[% l  #  X   % l #  X]]\n", s);
	//	test("[[% ll  #  X   % ll  #  X]]\n", s);
	//	test("[[% lll  #  X   % lll  #  X]]\n", s);
	//
	//	test("[[% z  #  X   % z  #  X]]\n", s);
	//	test("[[% j  #  X   % j  #  X]]\n", s);
	//
	//	test("[[% -+  .25     #  X   % +-  .25    #  X]]\n", s);
	//	test("[[% -+  0.25     #  X   % +-  0.25    #  X]]\n", s);
	//	test("[[% -+  82.25     #  X   % +-  82.25    #  X]]\n", s);
	//	test("[[% -+  20.25     #  X   % +-  20.25    #  X]]\n", s);
	//	test("[[% -+  20     #  X   % +-  20    #  X]]\n", s);
	//
	//	test("[[% #  X   % #  X]]\n", s);
	//	test("[[% -+  .25      #  X   % +-  .25     #  X]]\n", s);
	//	test("[[% -+  0.25      #  X   % +-  0.25     #  X]]\n", s);
	//	test("[[% -+  82.25      #  X   % +-  82.25     #  X]]\n", s);
	//	test("[[% -+  20.25      #  X   % +-  20.25     #  X]]\n", s);
	//	test("[[% -+  20      #  X   % +-  20     #  X]]\n", s);
	*/
	/*
		test2("[[%5.c]]\n", s);
		test2("[[%5.22c]]\n", s);
		test2("[[%5c]]\n", s);
		test2("[[%.44c]]\n", s);
		test2("[[%-+#c]]\n", s);
		test2("[[%c]]\n", s);
		test2("[[% c]]\n", s);
		test2("[[%.c]]\n", s);

		test3("[[%5.C]]\n", s);
		test3("[[%5.33C]]\n", s);
		test3("[[%5C]]\n", s);
		test3("[[%.44C]]\n", s);
		test3("[[%-+#C]]\n", s);
		test3("[[%C]]\n", s);
		test3("[[% C]]\n", s);
		test3("[[%.C]]\n", s);

		test3("[[%  .C]]\n", s);
	*/

	return 0;
}

