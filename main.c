#include <stdio.h>
#include "print_f.h"
#include <stdint.h>
#include <limits.h>

int size_nb(long long int nb, unsigned long long u_nb, int base);


int main()
{
//	printf("4567 |%-10]5d| plip\n", 12);
//	printf("4567 |%10]5d| plip\n", 12);
//	printf("|%10.5d|\n", -12);
//	printf("|%10d|\n", -12);
//	printf("|%010d|\n", -12);
//	printf("|%-10.5d|\n", -12);
//	printf("|%-010.5d|\n", -12);
	t_option a;
	printf("%d \n", sizeof(a));
	printf("-sdfds- =%    ---- .1ud=\n",-8888888888888);
	printf("-sdfds- =%    ---- .1x=\n",8888);
	printf("-sdfds- =%p-\n", (void*)&a);
	printf("-sdfds- =%.5s-\n", "444");
	printf("%jd\n", INTMAX_MAX);
	printf("%jd \n", INTMAX_MIN);



//	printf("%d \n", size_nb(-2526,0,10));
	return 0;
}

// autant d'espace que je veux avant
