#include <stdio.h>
#include "print_f.h"
#include <stdint.h>
#include <limits.h>

int size_nb(long long int nb, unsigned long long u_nb, int base);
int set_lenght(char c, t_option *option);
void pf_option(t_option *o);
int manage_f(char *s, t_option *o);
int manage_decimal(t_option *o, ...);

int main()
{
//	printf("4567 |%-10]5d| plip\n", 12);
//	printf("4567 |%10]5d| plip\n", 12);
//	printf("|%10.5d|\n", -12);
//	printf("|%10d|\n", -12);
//	printf("|%010d|\n", -12);
//	printf("|%-10.5d|\n", -12);


	char *b = "dsfsd";
	long nb = b;
	void *c = b;

	printf("[[ %d ]] \n", printf("-- %s8.d--\n",b));


	//	printf("--%p--\n", (long)b);
//	printf("--%p--\n", (long)c);
//	printf("--%s--\n", (char*)c);

	t_option a;

	set_op(&a);

	testt(&a,897,b);


//	manage_f("%d.88 0 88 %",&a);
//	pf_option(&a);

	return 0;
}

// autant d'espace que je veux avant
