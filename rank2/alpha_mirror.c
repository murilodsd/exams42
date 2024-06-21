/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:27:28 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/17 19:48:50 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char** argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 90))
				ft_putchar(65 + (90 - argv[1][i++]));
			else if ((argv[1][i] >= 97 && argv[1][i] <= 122))
				ft_putchar(97 + (122 - argv[1][i++]));
			else
				ft_putchar(argv[1][i++]);
		}
		
	}
	ft_putchar('\n');
}