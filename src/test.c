#include "../print_f.h"

int size_nb(long long int nb, unsigned long long u_nb, int base)
{
	int size;

	size = 1;
	if (nb < 0)
		size++;
	if (nb)
		while (nb /= base)
		{
			size++;
		}
	else
		while (u_nb /= base)
		{
			size++;
		}
	return (size);
}

int return_bigger()
{
}

// je verifie les h et les l
int set_type(char c, t_option *option)
{
	if (check_char_into_str("Ddi", c))
		option->specifier = DECIMAL;

}
