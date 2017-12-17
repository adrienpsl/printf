#include "../print_f.h"

long get_var(t_option *o, va_list *ap)
{
	o->data = va_arg(*ap, long);
//	printf("==%d== \n", o->data);
	o->data = va_arg(*ap, long);
//	printf("==%s== \n", o->data);
}

long printf(t_option *o, ...)
{
	va_list ap;

	va_start(ap, o);
//	o->data = va_arg(ap, long);
	get_var(o,&ap);
	va_end(ap);
//	printf("%ld \n", o->data);

}