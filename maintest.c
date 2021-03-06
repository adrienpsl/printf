

#include "src/pf_2.h"

typedef union
{
	float f;
	struct
	{
		unsigned int mantisa : 23;
		unsigned int exponent : 8;
		unsigned int sign : 1;
	} parts;
} float_cast;

int main()
{

//	printf("eux {%05.%}", 0);
//	printf(" \n");
//	ft_printf("moi {%05.%}", 0);
//
//	printf("{%05.Z}", 0);
//	ft_printf("{%05.Z}", 0);

//	printf("{%05.S}", L"42 c est cool");
//	ft_printf("{%05.S}", L"42 c est cool");
//	int a;
	ft_printf("[[%15.4S]]", L"我是一只猫。");
	//	ft_printf("%s: %nFoo\n", "hello", &n);
	//	ft_printf("%*sBar\n", n, "");
	/*char		c;
	int		*n;
	char	*str = NULL;

	c = 'q';


	 printf("%d\n", ft_printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));
	 printf("%d\n", printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));

	 printf("%d\n", ft_printf("Les bornes :  %ld, %ld\n", LONG_MIN, LONG_MAX));
	 printf("%d\n", printf("Les bornes :  %ld, %ld\n", LONG_MIN, LONG_MAX));

		 printf("%d\n", ft_printf("Les bornes :  %lu, %lu\n", LONG_MIN, LONG_MAX));
		 printf("%d\n", printf("Les bornes :  %lu, %lu\n", LONG_MIN, LONG_MAX));
		 printf("%d\n", ft_printf("Les bornes :  %lx, %lx\n", LONG_MIN, LONG_MAX));
		 printf("%d\n", printf("Les bornes :  %lx, %lx\n", LONG_MIN, LONG_MAX));
		 printf("%d\n", ft_printf("Les bornes :  %lo, %lo\n", LONG_MIN, LONG_MAX));
		 printf("%d\n", printf("Les bornes :  %lo, %lo\n", LONG_MIN, LONG_MAX));

	printf("\n----------------Verification des decimals, i et d-------------\n");

	 ft_printf("%d\n", ft_printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	 printf("%d\n\n", printf("1chiffre 1 %d chiffre 2 %d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("2chiffre 1 %   d chiffre 2 % d\n", 42, -42));
	 printf("%d\n\n", printf("2chiffre 1 %   d chiffre 2 % d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("3chiffre 1 %12d chiffre 2 %12d\n", 42, -42));
	 printf("%d\n\n", printf("3chiffre 1 %12d chiffre 2 %12d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	 printf("%d\n\n", printf("4chiffre 1 %-12d chiffre 2 %-12d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	 printf("%d\n\n", printf("5chiffre 1 %0d chiffre 2 %0d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	 printf("%d\n\n", printf("6chiffre 1 %012d chiffre 2 %012d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("7chiffre 1 %-012d chiffre 2 %012d\n", 42, -42));
	 printf("%d\n\n", printf("7chiffre 1 %-012d chiffre 2 %012d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	 printf("%d\n\n", printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6));

	 ft_printf("%d\n", ft_printf("9chiffre 1 %+d chiffre 2 %+d\n", 42, 6, -42, 6));
	 printf("%d\n\n", printf("9chiffre 1 %+d chiffre 2 %+d\n\n", 42, 6, -42, 6));

	 ft_printf("%d\n", ft_printf("10chiffre 1 %+12d chiffre 2 %+12d\n", 42, 6, -42, 6));
	 printf("%d\n\n", printf("10chiffre 1 %+12d chiffre 2 %+12d\n\n", 42, 6, -42, 6));

	 ft_printf("%d\n", ft_printf("mine = 11chiffre 1 %*12d chiffre 2 %*12d\n", 42, -6, 42, 6));
	 printf("%d\n\n", printf("vrai = 11chiffre 1 %*12d chiffre 2 %*12d\n\n", 42, -6, 42, 6));

	 ft_printf("%d\n", ft_printf("12chiffre 1 %-+5d chiffre 2 %-+5d\n", 42, -42));
	 printf("%d\n\n", printf("12chiffre 1 %-+5d chiffre 2 %-+5d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("13chiffre 1 %-+05d chiffre 2 %-+05d\n", 42, -42));
	 printf("%d\n\n", printf("13chiffre 1 %-+05d chiffre 2 %-+05d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("14chiffre 1 %+-5d chiffre 2 %+-5d\n", 42, -42));
	 printf("%d\n\n", printf("14chiffre 1 %+-5d chiffre 2 %+-5d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	 printf("%d\n\n", printf("15chiffre 1 %.d chiffre 2 %.d\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("16chiffre 1 %.6d chiffre 2 %.6d\n", 42, -42));
	 printf("%d\n\n", printf("16chiffre 1 %.6d chiffre 2 %.6d\n\n", 42, -42));


	printf("\n----------------Verification des chars, c-------------\n");

	 ft_printf("%d\n", ft_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c'));
	 printf("%d\n\n", printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("2caractere 1 %   c caractere 2 % c\n", 'a', 'c'));
	 printf("%d\n\n", printf("3caractere 1 %   c caractere 2 % c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("3caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	 printf("%d\n\n", printf("3caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c'));

	ft_printf("%d\n", ft_printf("4caractere 1 %-12c caractere 2 %-12c\n", 'a', 'c'));
	 printf("%d\n\n", printf("4caractere 1 %-12c caractere 2 %-12c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("5caractere 1 %0c caractere 2 %0c\n", 'a', 'c'));
	 printf("%d\n\n", printf("5caractere 1 %0c caractere 2 %0c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("6caractere 1 %012c caractere 2 %012c\n", 'a', 'c'));
	 printf("%d\n\n", printf("6caractere 1 %012c caractere 2 %012c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("7caractere 1 %-012c caractere 2 %012c\n", 'a', 'c'));
	 printf("%d\n\n", printf("7caractere 1 %-012c caractere 2 %012c\n\n", 'a', 'c'));

//	 ft_printf("%d\n", ft_printf("8caractere 1 %*c caractere 2 %*c\n", 'a', 6, 6, 6));
//	 printf("%d\n\n", printf("8caractere 1 %*c caractere 2 %*c\n\n", 'a', 6, 6, 6));

	 ft_printf("%d\n", ft_printf("9caractere 1 %+c caractere 2 %+c\n", 'a', 6, 'c', 6));
	 printf("%d\n\n", printf("9caractere 1 %+c caractere 2 %+c\n\n", 'a', 6, 'c', 6));

	 ft_printf("%d\n", ft_printf("10caractere 1 %+12c caractere 2 %+12c\n", 'a', 6, 'c', 6));
	 printf("%d\n\n", printf("10caractere 1 %+12c caractere 2 %+12c\n\n", 'a', 6, 'c', 6));

//	 ft_printf("%d\n", ft_printf("11caractere 1 %*12c caractere 2 %*12c\n", 'a', -6, 'a', 6));
//	 printf("%d\n\n", printf("11caractere 1 %*12c caractere 2 %*12c\n\n", 'a', -6, 'a', 6));

	 ft_printf("%d\n", ft_printf("12caractere 1 %-+5c caractere 2 %-+5c\n", 'a', 'c'));
	 printf("%d\n\n", printf("12caractere 1 %-+5c caractere 2 %-+5c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("13caractere 1 %-+05c caractere 2 %-+05c\n", 'a', 'c'));
	 printf("%d\n\n", printf("13caractere 1 %-+05c caractere 2 %-+05c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("14caractere 1 %+-5c caractere 2 %+-5c\n", 'a', 'c'));
	 printf("%d\n\n", printf("14caractere 1 %+-5c caractere 2 %+-5c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("15caractere 1 %.c caractere 2 %.c\n", 'a', 'c'));
	 printf("%d\n\n", printf("15caractere 1 %.c caractere 2 %.c\n\n", 'a', 'c'));

	 ft_printf("%d\n", ft_printf("16caractere 1 %.6c caractere 2 %.6c\n", 'a', 'c'));
	 printf("%d\n\n", printf("16caractere 1 %.6c caractere 2 %.6c\n\n", 'a', 'c'));



	printf("\n----------------Verification des octals,o-------------\n");

	 ft_printf("%d\n", ft_printf("1octal 1 %o octal 2 %o\n", 42, -42));
	 printf("%d\n\n", printf("1octal 1 %o octal 2 %o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("2octal 1 %   o octal 2 % o\n", 42, -42));
	 printf("%d\n\n", printf("3octal 1 %   o octal 2 % o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("4octal 1 %12o octal 2 %12o\n", 42, -42));
	 printf("%d\n\n", printf("4octal 1 %12o octal 2 %12o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("4octal 1 %-12o octal 2 %-12o\n", 42, -42));
	 printf("%d\n\n", printf("4octal 1 %-12o octal 2 %-12o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("5octal 1 %0o octal 2 %0o\n", 42, -42));
	 printf("%d\n\n", printf("5octal 1 %0o octal 2 %0o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("6octal 1 %012o octal 2 %012o\n", 42, -42));
	 printf("%d\n\n", printf("6octal 1 %012o octal 2 %012o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("7octal 1 %-012o octal 2 %012o\n", 42, -42));
	 printf("%d\n\n", printf("7octal 1 %-012o octal 2 %012o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("8octal 1 %*o octal 2 %*o\n", 42, 6, 6, 6));
	 printf("%d\n\n", printf("8octal 1 %*o octal 2 %*o\n\n", 42, 6, 6, 6));

	 ft_printf("%d\n", ft_printf("9octal 1 %+o octal 2 %+o\n", 42, 6, -42, 6));
	 printf("%d\n\n", printf("9octal 1 %+o octal 2 %+o\n\n", 42, 6, -42, 6));

	 ft_printf("%d\n", ft_printf("10octal 1 %+12o octal 2 %+12o\n", 42, 6, -42, 6));
	 printf("%d\n\n", printf("10octal 1 %+12o octal 2 %+12o\n\n", 42, 6, -42, 6));

	ft_printf("%d\n", ft_printf("11octal 1 [[%*12o]] octal 2 [[%*12o]]\n", 42, -6, -42, 6));
	printf("%d\n\n", printf("11octal 1 [[%*12o]] octal 2 [[%*12o]]\n\n", 42, -6, -42, 6));

	ft_printf("%d\n", ft_printf("12octal 1 %-+5o octal 2 %-+5o\n", 42, -42));
	 printf("%d\n\n", printf("12octal 1 %-+5o octal 2 %-+5o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("13octal 1 %-+05o octal 2 %-+05o\n", 42, -42));
	 printf("%d\n\n", printf("13octal 1 %-+05o octal 2 %-+05o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("14octal 1 %+-5o octal 2 %+-5o\n", 42, -42));
	 printf("%d\n\n", printf("14octal 1 %+-5o octal 2 %+-5o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("15octal 1 %.o octal 2 %.o\n", 42, -42));
	 printf("%d\n\n", printf("15octal 1 %.o octal 2 %.o\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("16octal 1 %.6o octal 2 %.6o\n", 42, -42));
	 printf("%d\n\n", printf("16octal 1 %.6o octal 2 %.6o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("1octal 1 %o octal 2 %o\n", 42, -42));
	printf("%d\n\n", printf("1octal 1 %o octal 2 %o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("2octal 1 %   o octal 2 % o\n", 42, -42));
	printf("%d\n\n", printf("3octal 1 %   o octal 2 % o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("4octal 1 %12o octal 2 %12o\n", 42, -42));
	printf("%d\n\n", printf("4octal 1 %12o octal 2 %12o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("4octal 1 %-12o octal 2 %-12o\n", 42, -42));
	printf("%d\n\n", printf("4octal 1 %-12o octal 2 %-12o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("5octal 1 %0o octal 2 %0o\n", 42, -42));
	printf("%d\n\n", printf("5octal 1 %0o octal 2 %0o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("6octal 1 %012o octal 2 %012o\n", 42, -42));
	printf("%d\n\n", printf("6octal 1 %012o octal 2 %012o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("7octal 1 %-012o octal 2 %012o\n", 42, -42));
	printf("%d\n\n", printf("7octal 1 %-012o octal 2 %012o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("8octal 1 %*o octal 2 %*o\n", 42, 6, 6, 6));
	printf("%d\n\n", printf("8octal 1 %*o octal 2 %*o\n\n", 42, 6, 6, 6));

	ft_printf("%d\n", ft_printf("9octal 1 %+o octal 2 %+o\n", 42, 6, -42, 6));
	printf("%d\n\n", printf("9octal 1 %+o octal 2 %+o\n\n", 42, 6, -42, 6));

	ft_printf("%d\n", ft_printf("10octal 1 %+12o octal 2 %+12o\n", 42, 6, -42, 6));
	printf("%d\n\n", printf("10octal 1 %+12o octal 2 %+12o\n\n", 42, 6, -42, 6));

	ft_printf("%d\n", ft_printf("11octal 1 %*12o octal 2 %*12o\n", 42, -6, -42, 6));
	printf("%d\n\n", printf("11octal 1 %*12o octal 2 %*12o\n\n", 42, -6, -42, 6));

	ft_printf("%d\n", ft_printf("12octal 1 %-+5o octal 2 %-+5o\n", 42, -42));
	printf("%d\n\n", printf("12octal 1 %-+5o octal 2 %-+5o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("13octal 1 %-+05o octal 2 %-+05o\n", 42, -42));
	printf("%d\n\n", printf("13octal 1 %-+05o octal 2 %-+05o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("14octal 1 %+-5o octal 2 %+-5o\n", 42, -42));
	printf("%d\n\n", printf("14octal 1 %+-5o octal 2 %+-5o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("15octal 1 %.o octal 2 %.o\n", 42, -42));
	printf("%d\n\n", printf("15octal 1 %.o octal 2 %.o\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("16octal 1 %.6o octal 2 %.6o\n", 42, -42));
	printf("%d\n\n", printf("16octal 1 %.6o octal 2 %.6o\n\n", 42, -42));



	printf("\n----------------Verification des hexadecimales, x-------------\n");



	 ft_printf("%d\n", ft_printf("1hexa 1 %x hexa 2 %x\n", 42, -42));
	 printf("%d\n\n", printf("1hexa 1 %x hexa 2 %x\n\n", 42, -42));
	//
	 ft_printf("%d\n", ft_printf("2hexa 1 %   x hexa 2 % x\n", 42, -42));
	 printf("%d\n\n", printf("3hexa 1 %   x hexa 2 % x\n\n", 42, -42));

	printf("\n----------------Verification des hexadecimals, X-------------\n");


	 ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	 printf("%d\n\n", printf("1hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("2hexa-maj 1 %   X hexa-maj 2 % X\n", 42, -42));
	 printf("%d\n\n", printf("3hexa-maj 1 %   X hexa-maj 2 % X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n", 42, -42));
	 printf("%d\n\n", printf("4hexa-maj 1 %12X hexa-maj 2 %12X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	 printf("%d\n\n", printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n\n", 42, -42));


	printf("\n----------------Verification test en plus-------------\n");

	ft_printf("test de #08x=%#08x\n", 42);
	printf("test de #08x=%#08x\n\n", 42);

	ft_printf("test8=%ll#x\n", 9223372036854775807);
	printf("test8=%ll#x\n\n", 9223372036854775807);


	ft_printf("test7=%05c\n", 42);
	printf("test7=%05c\n", 42);


	ft_printf("test6=%5+d\n", 42);
	printf("test6=%5+d\n", 42);


	ft_printf("test5=%5+d\n", -42);
	printf("test5=%5+d\n", -42);



	ft_printf("test4=%-5+d\n", 42);
	printf("test4=%-5+d\n", 42);



	ft_printf("test3=%-5+d\n", -42);
	printf("test3=%-5+d\n", -42);


	ft_printf("test2=%zhd\n", 4294967296);
	ft_printf("test2=%zhd\n\n", 4294967296);

	ft_printf("test1=%jzd\n", 9223372036854775807);
	printf("test1=%jzd\n\n", 9223372036854775807);

	ft_printf("test0=%jhd\n", 9223372036854775807);
	printf("test0=%jhd\n\n", 9223372036854775807);

  ft_printf("test3 =%lhl\n", 9223372036854775807);
  printf("test3 =%lhl\n\n", 9223372036854775807);

	ft_printf("test2=%lhlz\n", 9223372036854775807);
	printf("test2=%lhlz\n\n", 9223372036854775807);

	ft_printf("le test1 de zj=%zj\n", 9223372036854775807);
	printf("le test1 de zj%zj\n\n", 9223372036854775807);

	ft_printf("on teste2 le lhh=%lhh\n", 2147483647);
	printf("on teste2 le lhh=%lhh\n\n", 2147483647);


 	ft_printf("on teste1 le hhl=%hhld\n", 128);
	printf("on teste1 le hhl=%hhld\n\n", 128);

	ft_printf("@main ftprintf: %####0000 33..1..#00d\n", 256);
	ft_printf("@main ftprintf: %####0000 33..1..#00d\n\n", 256);


	ft_printf("@main_printf: %####0000 33..1d\n", 256);
	printf("@main_printf: %####0000 33..1d\n\n", 256);
//

	ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d--\n", 256);
	printf("@main_printf: --%###-#0000 33...12..#0+0d--\n\n", 256);

	 ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	 printf("%d\n\n", printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	 printf("%d\n\n", printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n", 42, -42));
	 printf("%d\n\n", printf("7hexa-maj 1 %-012X hexa-maj 2 %012X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	 printf("%d\n\n", printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n\n", 42, 6, 6, 6));

	 ft_printf("%d\n", ft_printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n", 42, 6, -42, 6));
	 printf("%d\n\n", printf("9hexa-maj 1 %+X hexa-maj 2 %+X\n\n", 42, 6, -42, 6));

	 ft_printf("%d\n", ft_printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n", 42, 6, -42, 6));
	 printf("%d\n\n", printf("10hexa-maj 1 %+12X hexa-maj 2 %+12X\n\n", 42, 6, -42, 6));

	 ft_printf("%d\n", ft_printf("11hexa-maj 1 %*12X hexa-maj 2 %*12X\n", 42, -6, -42, 6));
	 printf("%d\n\n", printf("11hexa-maj 1 %*12X hexa-maj 2 %*12X\n\n", 42, -6, -42, 6));

	 ft_printf("%d\n", ft_printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n", 42, -42));
	 printf("%d\n\n", printf("12hexa-maj 1 %-+5X hexa-maj 2 %-+5X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n", 42, -42));
	 printf("%d\n\n", printf("13hexa-maj 1 %-+05X hexa-maj 2 %-+05X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n", 42, -42));
	 printf("%d\n\n", printf("14hexa-maj 1 %+-5X hexa-maj 2 %+-5X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n", 42, -42));
	 printf("%d\n\n", printf("15hexa-maj 1 %.X hexa-maj 2 %.X\n\n", 42, -42));

	 ft_printf("%d\n", ft_printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n", 42, -42));
	 printf("%d\n\n", printf("16hexa-maj 1 %.6X hexa-maj 2 %.6X\n\n", 42, -42));


	 ft_printf("%d\n", ft_printf("1pointeur 1 %p pointeur 2 %p\n", &c, &c));
	 printf("%d\n\n", printf("1pointeur 1 %p pointeur 2 %p\n\n", &c, &c));


	ft_printf("%d\n", ft_printf("3pointeur 1=% 12p pointeur 2=% 12p\n", &c, &c));
	printf("%d\n\n", printf("3pointeur 1=% 12p pointeur 2=% 12p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("4pointeur 1   %-12p pointeur 2 %-12p\n", &c, &c));
	printf("%d\n\n", printf("4pointeur 1   %-12p pointeur 2 %-12p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("5pointeur 1 %0p pointeur 2 %0p\n", &c, &c));
	printf("%d\n\n", printf("5pointeur 1 %0p pointeur 2 %0p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("6pointeur 1 %012p pointeur 2 %012p\n", &c, &c));
	printf("%d\n\n", printf("6pointeur 1 %012p pointeur 2 %012p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("7pointeur 1 %-012p pointeur 2 %012p\n", &c, &c));
	printf("%d\n\n", printf("7pointeur 1 %-012p pointeur 2 %012p\n\n", &c, &c));

	ft_printf("{%03c}\n", 67);
	printf("{%03c}\n", 67);


	ft_printf("%d\n", ft_printf("9pointeur 1 %+p pointeur 2 %+p\n", &c, 6, &c, 6));
	printf("%d\n\n", printf("9pointeur 1 %+p pointeur 2 %+p\n\n", &c, 6, &c, 6));

	ft_printf("%d\n", ft_printf("10pointeur 1 %+12p pointeur 2 %+12p\n", &c, 6, &c, 6));
	printf("%d\n\n", printf("10pointeur 1 %+12p pointeur 2 %+12p\n\n", &c, 6, &c, 6));


	ft_printf("%d\n", ft_printf("11pointeur 1 %*12p pointeur 2 %*12p\n", &c, -6, &c, 6));
	printf("%d\n\n", printf("11pointeur 1 %*12p pointeur 2 %*12p\n\n", &c, -6, &c, 6));

	ft_printf("%d\n", ft_printf("12pointeur 1 %-+5p pointeur 2 %-+5p\n", &c, &c));
	printf("%d\n\n", printf("12pointeur 1 %-+5p pointeur 2 %-+5p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("13pointeur 1 %-+05p pointeur 2 %-+05p\n", &c, &c));
	printf("%d\n\n", printf("13pointeur 1 %-+05p pointeur 2 %-+05p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("14pointeur 1 %+-5p pointeur 2 %+-5p\n", &c, &c));
	printf("%d\n\n", printf("14pointeur 1 %+-5p pointeur 2 %+-5p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("15pointeur 1 %.p pointeur 2 %.p\n", &c, &c));
	printf("%d\n\n", printf("15pointeur 1 %.p pointeur 2 %.p\n\n", &c, &c));

	ft_printf("%d\n", ft_printf("16pointeur 1 %.6p pointeur 2 %.6p\n", &c, &c));
	printf("%d\n\n", printf("16pointeur 1 %.6p pointeur 2 %.6p\n\n", &c, &c));


	ft_printf("%d\n", ft_printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	printf("%d\n\n", printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("2unsigned 1 %   u unsigned 2 % u\n", 42, -42));
	printf("%d\n\n", printf("3unsigned 1 %   u unsigned 2 % u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	printf("%d\n\n", printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	printf("%d\n\n", printf("4unsigned 1 %-12u unsigned 2 %-12u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	printf("%d\n\n", printf("5unsigned 1 %0u unsigned 2 %0u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	printf("%d\n\n", printf("6unsigned 1 %012u unsigned 2 %012u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("7unsigned 1 %-012u unsigned 2 %012u\n", 42, -42));
	printf("%d\n\n", printf("7unsigned 1 %-012u unsigned 2 %012u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	printf("%d\n\n", printf("8unsigned 1 %*u unsigned 2 %*u\n\n", 42, 6, 6, 6));

	ft_printf("%d\n", ft_printf("9unsigned 1 %+u unsigned 2 %+u\n", 42, 6, -42, 6));
	printf("%d\n\n", printf("9unsigned 1 %+u unsigned 2 %+u\n\n", 42, 6, -42, 6));

	ft_printf("%d\n", ft_printf("10unsigned 1 %+12u unsigned 2 %+12u\n", 42, 6, -42, 6));
	printf("%d\n\n", printf("10unsigned 1 %+12u unsigned 2 %+12u\n\n", 42, 6, -42, 6));

	ft_printf("%d\n", ft_printf("11unsigned 1 %*12u unsigned 2 %*12u\n", 42, -6, -42, 6));
	printf("%d\n\n", printf("11unsigned 1 %*12u unsigned 2 %*12u\n\n", 42, -6, -42, 6));

	ft_printf("%d\n", ft_printf("12unsigned 1 %-+5u unsigned 2 %-+5u\n", 42, -42));
	printf("%d\n\n", printf("12unsigned 1 %-+5u unsigned 2 %-+5u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("13unsigned 1 %-+05u unsigned 2 %-+05u\n", 42, -42));
	printf("%d\n\n", printf("13unsigned 1 %-+05u unsigned 2 %-+05u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("14unsigned 1 %+-5u unsigned 2 %+-5u\n", 42, -42));
	printf("%d\n\n", printf("14unsigned 1 %+-5u unsigned 2 %+-5u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	printf("%d\n\n", printf("15unsigned 1 %.u unsigned 2 %.u\n\n", 42, -42));

	ft_printf("%d\n", ft_printf("16unsigned 1 %.6u unsigned 2 %.6u\n", 42, -42));
	printf("%d\n\n", printf("16unsigned 1 %.6u unsigned 2 %.6u\n\n", 42, -42));


	ft_printf("%d\n", ft_printf("%s", 0));
	ft_printf("%s", 0);
	ft_printf("%S", 0);
	ft_printf("%s\n", 0);
	   printf("%s\n", 0);
	ft_printf("%d\n", 0);
	printf("%d\n", 0);
	ft_printf("%u\n", 0);
	printf("%u\n", 0);
	ft_printf("%#o\n", 0);
	printf("%#o\n", 0);
	ft_printf("%#x\n", 0);
	printf("%#x\n", 0);

	ft_printf("%o\n", 0);
	printf("%o\n", 0);
	ft_printf("%x\n", 0);
	printf("%x\n", 0);

	ft_printf("%p\n", 0);
	printf("%p\n", 0);

	ft_printf("%d\n", ft_printf("%%\n"));
	printf("%d\n\n", printf("%%\n"));


	ft_printf("%d\n", ft_printf("%yd|\n",6));
	printf("%d\n\n", printf("%yd|\n",6));


	ft_printf("%d\n", ft_printf("%z\n"));
	printf("%d\n\n", printf("%z\n"));

	ft_printf("%d\n", ft_printf("%# wd %d|\n", 42));
	ft_printf("%d\n", printf("%# wd %d|\n", 42));

	ft_printf("%d\n", ft_printf("%#d\n", 42));
	printf("%d\n\n", printf("%#d\n", 42));

	ft_printf("%d\n", ft_printf("%#5o\n", 42));
	printf("%d\n\n", printf("%#5o\n", 42));

	ft_printf("%d\n", ft_printf("%#5x\n", 42));
	printf("%d\n\n", printf("%#5x\n", 42));

	ft_printf("%d\n", ft_printf("%o\n", -42));
	printf("%d\n\n", printf("%o\n", -42));

	ft_printf("%d\n", ft_printf("11signed 1 %*12i signed 2 %*12i signed 3 %*12i\n", 42, -6, -42, 6, 12, 6));
	printf("%d\n\n", printf("11signed 1 %*12i signed 2 %*12i signed 3 %*12i\n\n", 42, -6, -42, 6, 12, 6));

	ft_printf("%d\n", ft_printf("11unsigned 1 %*12u unsigned 2 %*12u unsigned 3 %*12u\n", 42, -6, -42, 6, 12, 6));
	printf("%d\n\n", printf("11unsigned 1 %*12u unsigned 2 %*12u unsigned 3 %*12u\n\n", 42, -6, -42, 6, 12, 6));

	ft_printf("J'affiche des %ncaracteres.\n", n);

	printf("%d\n\n", printf("vrai=%-.12u\n", -20000000));
	ft_printf("%d\n", ft_printf("mine=%-.12u\n", -20000000));

	printf("%d\n\n", printf("%-.12i\n", -20000000));
	ft_printf("%d\n", ft_printf("%-.12i\n", -20000000));

	ft_printf("%d\n", ft_printf("truc\n"));

	ft_printf("%d\n", ft_printf("truc %d\n", 42));
	ft_printf("%d\n\n", printf("truc %d\n", 42));
//
	ft_printf("%d\n", ft_printf("bonjour !\n", 42, -42));
	printf("%d\n\n", printf("bonjour !\n", 42, -42));
	ft_printf("Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	printf("Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	printf("Test de chiffre avec h : %hd, et %hd\n", 432767, -432767);
	ft_printf("Test de chiffre avec h : %hd, et %hd\n", 432767, -432767);

	ft_printf("Test de cliffre sans l : %d, et %d\n", 32147483647, -32147483647);
	printf("Test de cliffre sans l : %d, et %d\n", 32147483647, -32147483647);
	printf("Test de cliffre avec l : %ld, et %ld\n", 32147483647, -32147483647);
	ft_printf("Test de cliffre avec l : %ld, et %ld\n\n", 32147483647, -32147483647);



	ft_printf("%d\n", ft_printf("This is a float : %f\n", 45.236));
	ft_printf("%d\n", printf("This is a float : %f\n\n", 45.236));

	ft_printf("%d\n", ft_printf("This is a float : %.3f\n", 45.236));
	ft_printf("%d\n", printf("This is a float : %.3f\n\n", 45.236));

	ft_printf("%d\n", ft_printf("This is a float : %3f\n", 45.236));
	ft_printf("%d\n",   printf("This is a float : %3f\n\n", 45.236));

	ft_printf("%d\n", ft_printf("This is a float : %f\n", -45.236));
	ft_printf("%d\n", printf("This is a float : %f\n\n", -45.236));

	ft_printf("%d\n", ft_printf("This is a float : %.3f\n", -45.236));
	ft_printf("%d\n", printf("This is a float : %.3f\n\n", -45.236));

	ft_printf("%d\n", ft_printf("This is a float : %3f\n", -45.236));
	ft_printf("%d\n", printf("This is a float : %3f\n\n", -45.236));

	ft_printf("This is a float : %f\n", 0.00025);
	printf("This is a float : %f\n\n", 0.00025);

	ft_printf("This is a float : %.3f\n", 0.00025);
	printf("This is a float : %.3f\n\n", 0.00025);

	ft_printf("This is a float : %3f\n", 0.00025);
	printf("This is a float : %3f\n\n", 0.00025);

	ft_printf("This is a float : %f\n", -0.00025);
	printf("This is a float : %f\n\n", -0.00025);

	ft_printf("This is a float : %.3f\n", -0.00025);
	printf("This is a float : %.3f\n\n", -0.00025);

	ft_printf("This is a float : %3f\n", -0.00025);
	printf("This is a float : %3f\n\n", -0.00025);



	ft_printf("%d\n", ft_printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("1string 1 %s string 2 %s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("2string 1 %   s string 2 % s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("3string 1 %   s string 2 % s\n\n", "toto", "bonjour"));
//
	ft_printf("%d\n", ft_printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("4string 1 %12s string 2 %12s\n\n", "toto", "bonjour"));
//
	ft_printf("%d\n", ft_printf("4string 1 %-12s string 2 %-12s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("4string 1 %-12s string 2 %-12s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("5string 1 %0s string 2 %0s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("5string 1 %0s string 2 %0s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("6string 1 %012s string 2 %012s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("7string 1 %-012s string 2 %012s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("7string 1 %-012s string 2 %012s\n\n", "toto", "bonjour"));
exit(0);
	  ft_printf("%d\n", ft_printf("8string 1 %*s string 2 %*s\n", "toto", 6, "tata", 6));
	  printf("%d\n\n", printf("8string 1 %*s string 2 %*s\n\n", "toto", 6, "tata", 6));

	ft_printf("%d\n", ft_printf("9string 1 %+s string 2 %+s\n", "toto", 6, "bonjour", 6));
	printf("%d\n\n", printf("9string 1 %+s string 2 %+s\n\n", "toto", 6, "bonjour", 6));

	ft_printf("%d\n", ft_printf("10string 1 %+12s string 2 %+12s\n", "toto", 6, "bonjour", 6));
	  printf("%d\n\n", printf("10string 1 %+12s string 2 %+12s\n\n", "toto", 6, "bonjour", 6));

	ft_printf("%d\n", ft_printf("11string 1 %*12s string 2 %*12s\n", "toto", -6, "bonjour", 6));
	  printf("%d\n\n", printf("11string 1 %*12s string 2 %*12s\n\n", "toto", -6, "bonjour", 6));

	ft_printf("%d\n", ft_printf("12string 1 %-+5s string 2 %-+5s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("12string 1 %-+5s string 2 %-+5s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("13string 1 %-+05s string 2 %-+05s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("13string 1 %-+05s string 2 %-+05s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("14string 1 %+-5s string 2 %+-5s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("14string 1 %+-5s string 2 %+-5s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("15string 1 %.s string 2 %.s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("15string 1 %.s string 2 %.s\n\n", "toto", "bonjour"));

	ft_printf("%d\n", ft_printf("16string 1 %.6s string 2 %.6s\n", "toto", "bonjour"));
	printf("%d\n\n", printf("16string 1 %.6s string 2 %.6s\n\n", "toto", "bonjour"));
*/

	return (0);
}

