/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 23:41:59 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/22 00:00:42 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
void	ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n /10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}

int	main()
{
	int	n = 2;
	ft_putnbr(n);
	write(1, "\n", 1);
	ft_ft(&n);
	ft_putnbr(n);
	write(1, "\n", 1);
	return (0);
}
*/
