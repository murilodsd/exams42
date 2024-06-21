/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:23:05 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/18 22:32:55 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i += 1;
		while (argv[1][i])
		{
			while (argv[1][i] && !(argv[1][i] == ' ' || argv[1][i] == '\t'))
				write(1, &argv[1][i++], 1);
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (argv[1][i + 1] && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t')
					write(1, " ", 1);
				i++;
			}
		}
	}
	write(1, "fim", 1);
	return (0);
}