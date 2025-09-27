/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 00:52:38 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/22 01:01:59 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	char	**next;

	(void)argc;
	next = argv + 1;
	while (*next)
	{
		ft_putstr(*next);
		ft_putchar('\n');
		next++;
	}
	return (0);
}
