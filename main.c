#include <stdio.h>
#include "print_f.h"
#include <stdint.h>
#include <limits.h>
#include <locale.h>

int size_nb(long long int nb, unsigned long long u_nb, int base);
int set_lenght(char c, t_option *option);
void pf_option(t_option *o);
int manage_f(char *s, t_option *o);

int main()
{


	int i = 'a';
	wchar_t s[3] = {0x1234, 0x1234};
//	int i = 98;
	printf("%s \n", setlocale(LC_ALL, ""));
////	ft_printf("coucou %ld", LONG_MIN);
	printf("%d \n",
		   ft_printf("[[%10-.3S %10-.3S]]",s,s)
	);
//	printf("%d \n",
//		   printf("coucou [[%4-.C]]", 'd')
//	);
//	printf("%d \n",
//		   printf("[[%S]]", s)
//	);
//	printf("%d \n",
//		   printf("[[% -s]]", "1234")
//	);
//	printf("%d \n",
//		   printf("[[%2-S]]", s)
//	);

		printf("%d \n",printf("\n [[% +4lld]]",2222 ));


	//	testt(&a,897,b);


	//	manage_f("%d.88 0 88 %",&a);
	//	pf_option(&a);

	return 0;
}

