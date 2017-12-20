#include <stdio.h>
//#include "print_f.h"
#include "src2/pf_2.h"
#include <stdint.h>
#include <limits.h>
#include <locale.h>


int main()
{
//	t_op a;


	t_buff b;

	ft_set_buff(&b);
	printf("%d \n",ft_fill_buff("hhh",&b));
	ft_print_buff(&b);

	return 0;
}

