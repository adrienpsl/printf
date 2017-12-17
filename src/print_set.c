#include "../print_f.h"

void pf_option(t_option *o)
{
	printf("zero %d \n", o->zero);
	printf("diez %d \n", o->diez);
	printf("left %d \n", o->left);
	printf("plus %d \n", o->plus);
	printf("space %d \n", o->space);

	printf("nb_space %d \n", o->nb_space);

	printf("\ndot %d \n", o->dot);
	printf("nb_preci %d \n", o->nb_preci);

	printf("\nspecifier : %d \n", o->specifier);
	printf("lenght  : %d \n", o->length);
}

void set_op(t_option *o)
{
	o->specifier = 0;
	o->length = 0;
	o->nb_space = 0;
	o->nb_preci = 0;
	o->zero = 0;
	o->diez = 0;
	o->left = 0;
	o->plus = 0;
	o->space = 0;
	o->dot = 0;
}