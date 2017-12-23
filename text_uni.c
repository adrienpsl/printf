
#include <printf.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL,"");

	wchar_t a[10] = {0x1234,0x1234,0x1234};
	printf("=%S=\n", a);
	printf("=%10S=\n", a);
	printf("=%.2S=\n", a);
	printf("=%100S=\n", a);
	printf("=%S=\n", a);
	printf("=%S=\n", a);
}