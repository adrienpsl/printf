#include <locale.h>
#include <printf.h>

int main()
{
    setlocale(LC_ALL,"");
//	printf("{%05.S}", L"42 c est cool");
	printf("[[%15.4S]]", L"我是一只猫。");

	return (42);
}