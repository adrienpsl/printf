#include "../pf_2.h"

void put_uni_into_tab(wchar_t c, char *tab, int precision)
{
	if (c <= 126 && precision > 0)
		tab[0] = c;
	else if (c <= 0x7FF && precision > 1)
	{
		tab[0] = ((c >> 6) & 0x1F) + 0xC0;
		tab[1] = (c & 0x3F) + 0x80;
	}
	else if (c < 0xFFFF && precision > 2)
	{
		tab[0] = ((c >> 12) & 0xF) + 0xE0;
		tab[1] = ((c >> 6) & 0x3F) + 0x80;
		tab[2] = (c & 0x3F) + 0x80;
	}
	else if (c < 0x1FFFF && precision > 3)
	{
		tab[0] = ((c >> 18) & 0x7) + 0xF0;
		tab[1] = ((c >> 12) & 0x3F) + 0x80;
		tab[2] = ((c >> 6) & 0x3F) + 0x80;
		tab[3] = (c & 0x3F) + 0x80;
	}
}

size_t size_uni(int c, int precision)
{
	if (c <= 126 && precision > 0)
		return (1);
	else if (c <= 0x7FF && precision > 1)
		return (2);
	else if (c < 0xFFFF && precision > 2)
		return (3);
	else if (c < 0x1FFFF && precision > 3)
		return (4);
	return (0);
}

size_t strlen_uni(wchar_t *s, int precision)
{
	size_t size;

	size = 0;
	while (*s)
	{
		size += size_uni(*s,precision);
	}
}