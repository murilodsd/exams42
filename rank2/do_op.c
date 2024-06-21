/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:57:42 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/17 22:13:28 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
		{
			printf("%d",atoi(argv[1]) + atoi(argv[3]));
		}
		else if (argv[2][0] == '-')
		{
			printf("%d",atoi(argv[1]) - atoi(argv[3]));
		}
		else if(argv[2][0] == '/')
		{
			printf("%d",atoi(argv[1]) / atoi(argv[3]));
		}
		else if(argv[2][0] == '*')
		{
			printf("%d",atoi(argv[1]) * atoi(argv[3]));
		}
		else if(argv[2][0] == '%')
		{
			printf("%d",atoi(argv[1]) % atoi(argv[3]));
		}
	}
	printf("\n");
}