/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:59:49 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/18 21:13:57 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reverse_octet = 0;
	int i = 8;
	while (i--)
	{
		reverse_octet = reverse_octet << 1;
		reverse_octet = reverse_octet | (octet & 1);
		octet = octet >> 1;
	}
	return reverse_octet;
}
void	print_bits(unsigned char octet);
int main(void)
{
	print_bits(reverse_bits(3));
	return 0;
}
