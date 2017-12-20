#include "../pf_2.h"

/*
**	print and set buff
*/
int ft_print_buff(t_buff *buff)
{
	write(1, &buff->data, BUFF_SIZE - buff->remain_space);
	ft_set_buff(buff);
}

/*
**	fill the buff with str, update buff and return 1
**	if str didn't fit, return 0
*/
int ft_fill_buff(char *str, t_buff *buff)
{
	size_t size_str;

	size_str = ft_strlen(str);
	if (size_str <= buff->remain_space - 1)
	{
		ft_strcat(buff->data, str);
		buff->remain_space = buff->remain_space - size_str;
		return (1);
	}
	else
		return (0);
}

/*
**	set the buffer with the value of BUFF_SIZE
*/
void ft_set_buff(t_buff *buff)
{
	ft_memset(&buff->data, 0, BUFF_SIZE);
	buff->remain_space = BUFF_SIZE;
}
