#include <stdio.h>
//#include "print_f.h"
#include "src2/pf_2.h"
#include <stdint.h>
#include <limits.h>
#include <locale.h>


//int buff()

int main()
{
//	t_op a;
	t_buff b;
	char *s;

	char string[4000];
	char p[300] = "%d";

	freopen("/dev/null", "a", stdout);
	setbuf(stdout, string);

	printf("-%1s- \n", "123456");
	fflush(stdout);

	ft_memset(string,0,100);
//	setbuf(stdout, string);
	printf("-%1s- \n", "123456");

	return 0;
}

