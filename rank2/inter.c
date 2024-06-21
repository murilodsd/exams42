/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:30:57 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/18 19:47:01 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char const *argv[])
{
	int	ascii[256] = {0};
	int i,j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !ascii[(int)argv[1][i]])
				{
					write(1,&argv[1][i],1);
					ascii[(int)argv[1][i]] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
