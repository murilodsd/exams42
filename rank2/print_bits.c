/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:21:18 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/18 21:11:28 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	
	while (i--)
	{
		bit = octet >> i;
		if (bit % 2 == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
	}
}

/* int main(void)
{
	print_bits(2);
} */