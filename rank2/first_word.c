/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:33:01 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/17 19:14:24 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc != 2)
	{
		i = 0;
		while (ft_isspace(argv[1][i]))
			i++;	
		while (argv[1][i] && !ft_isspace(argv[1][i]))
			ft_putchar(argv[1][i++]);
	}
	ft_putchar('\n');
	return (0);
}