/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roylee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:02:12 by roylee            #+#    #+#             */
/*   Updated: 2023/09/17 16:36:41 by roylee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_format(va_list *args, const char s)
{
	unsigned long	ptr;

	if (s == 'c')
		return (ft_putchar_fd(va_arg(*args, int), 1));
	else if (s == 's')
		return (ft_putstr(va_arg(*args, const char *)));
	else if (s == 'p')
	{
		ptr = va_arg(*args, unsigned long);
		if (ptr)
			return (ft_puthexa_u(ptr, s));
		return (ft_putstr("(nil)"));
	}
	else if (s == 'i' || s == 'd')
		return (ft_putnbr_fd(va_arg(*args, int), 1));
	else if (s == 'u')
		return (ft_putunbr_base(va_arg(*args, unsigned int), "0123456789"));
	else if (s == 'x' || s == 'X')
		return (ft_puthexa_u(va_arg(*args, unsigned int), s));
	else if (s == '%')
		return (ft_putchar_fd('%', 1));
	else
		return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			len += ft_putchar_fd(format[i], 1);
		else
		{
			len += ft_format(&args, format[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
/*
int	main(void)
{
//	int	res = printf("%c %c %c ",'1', '2', '3');
//	int	res1 = ft_printf("%c %c %c ",'1', '2', '3');

//	printf("actual: %d, mine: %d", res1, res1);
	
//	res = printf("%d", INT_MAX);
//	res1 = ft_printf("%d", INT_MAX);
	
//	printf("%d    %d", res, res1);

	//int res = printf("%p", (void *)-1);
	printf("\n");
	ft_printf("%p", (void *)-1);

	//printf("%d\n %d\n", res1, res1);
}
*/
