/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:28:29 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/10/06 14:55:00 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char			c = 'c';
	char			*s = "Hola Mundo";
	char			*s1 = NULL;
	int				d = -42;
	unsigned int	u = 4294967295;
	int				x = 3735928559;
	void			*p = s;
	void			*p1 = s1;

	int len;

	ft_printf("+================+\n");
	ft_printf("| FT_PRINTF TEST |\n");
	ft_printf("+================+\n");

	len = ft_printf("Char: %c\n", c);
	ft_printf("Se imprimieron %d caracteres.\n", len);

	len = ft_printf("String: %s\n", s);
	ft_printf("Se imprimieron %d caracteres.\n", len);
	
	len = ft_printf("String: %s\n", s1);
	ft_printf("Se imprimieron %d caracteres.\n", len);

	len = ft_printf("Digit: %d\n", d);
	ft_printf("Se imprimieron %d caracteres.\n", len);

	len = ft_printf("Integer: %i\n", d);
	ft_printf("Se imprimieron %d caracteres.\n", len);

	len = ft_printf("Unsigned char: %u\n", u);
	ft_printf("Se imprimieron %d caracteres.\n", len);

	len = ft_printf("hex: %x\n", x);
	ft_printf("Se imprimieron %d caracteres.\n", len);
	
	len = ft_printf("HEX: %X\n", x);
	ft_printf("Se imprimieron %d caracteres.\n", len);

	len = ft_printf("Pointer: %p\n", p);
	ft_printf("Se imprimieron %d caracteres.\n", len);
	
	len = printf("Pointer: %p\n", p1);
	printf("Se imprimieron %d caracteres.\n\n", len);

	printf("+=================+\n");
	printf("| ORIGINAL PRINTF |\n");
	printf("+=================+\n");

	len = printf("Char: %c\n", c);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("String: %s\n", s);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("Digit: %d\n", d);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("Integer: %i\n", d);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("Unsigned char: %u\n", u);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("hex: %x\n", x);
	printf("Se imprimieron %d caracteres.\n", len);
	
	len = printf("HEX: %X\n", x);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("Pointer: %p\n", p);
	printf("Se imprimieron %d caracteres.\n", len);

	len = printf("Pointer: %p\n", p1);
	printf("Se imprimieron %d caracteres.\n", len);
}
