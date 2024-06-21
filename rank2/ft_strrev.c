/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:14:17 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/18 20:32:10 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *s);

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	char tmp;

	while (i < j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}
	return(str);
}
#include <stdio.h>
int main(void)
{
	char s[] = "murilo";
	printf("%s",ft_strrev(s));
	return 0;
}
