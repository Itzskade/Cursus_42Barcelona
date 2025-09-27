/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-n <rmarin-n@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 01:03:34 by rmarin-n          #+#    #+#             */
/*   Updated: 2025/09/22 01:34:35 by rmarin-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	char	**str;
	char	**next_str;

	str = argv + 1;
	while (str < argv + argc -1)
	{
		next_str = str + 1;
		while (next_str < argv + argc)
		{
			if (ft_strcmp(*str, *next_str) > 0)
				ft_swap(str, next_str);
			next_str++;
		}
		str++;
	}
	str = argv + 1;
	while (str < argv + argc)
	{
		ft_putstr(*str);
		ft_putchar('\n');
		str++;
	}
	return (0);
}
