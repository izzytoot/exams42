#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	ft_putstr(char *str)
{
	int i = 0;
	int len = 0;

	if (!str)
		str = "(null)";
	while (str[i])
	{
		len += write(1, &str[i], 1);
		i++;
	}
	return len;
}

int ft_putnbr(int nb, int base)
{
	int len = 0;
	unsigned int temp_nb = 0;
	char *hexa = "0123456789abcdef";

	if (nb < 0 && base == 10)
	{
		len += write(1, "-", 1);
		temp_nb = -nb;
	}
	else
		temp_nb = (unsigned int)nb;
	if (temp_nb >= (unsigned int)base)
		len += ft_putnbr((temp_nb / base), base);
	len += write(1, &hexa[temp_nb % base], 1);
	return len;
}

int ft_printf(const char *mandatory, ... )
{
	va_list(args);
	int i = 0;
	int len = 0;

	va_start(args, mandatory);
	while(mandatory[i])
	{
		if((mandatory[i] == '%') && (mandatory[i + 1] != '\0'))
		{
			i++;
			if (mandatory[i] == 's')
				len += ft_putstr((va_arg(args, char *)));
			else if (mandatory[i] == 'd')
				len += ft_putnbr((va_arg(args, int)), 10);
			else if (mandatory[i] == 'x')
				len += ft_putnbr((va_arg(args, int)), 16);
			else if (mandatory[i] == '%')
				len += write(1, "%", 1);
		}
		else
			len += write(1, &mandatory[i], 1);
		i++;
	}
	va_end(args);
	return len;
}

int	main(void)
{
	int mylen = 0;
	int origlen = 0;

	mylen = ft_printf("%s\n", "toto");
	origlen = printf("%s\n", "toto");
	ft_printf("%d\n", mylen);
	printf("%d\n", origlen);
	mylen = ft_printf("Magic %s is %d\n", "number", 42);
	origlen = printf("Magic %s is %d\n", "number", 42);
	ft_printf("%d\n", mylen);
	printf("%d\n", origlen);
	mylen = ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	origlen = printf("Hexadecimal for %d is %x\n", 42, 42);
	ft_printf("%d\n", mylen);
	printf("%d\n", origlen);
	mylen = ft_printf("Hexadecimal for %d is %x\n", -42, -42);
	origlen = printf("Hexadecimal for %d is %x\n", -42, -42);
	ft_printf("%d\n", mylen);
	printf("%d\n", origlen);
	return 0;
}
