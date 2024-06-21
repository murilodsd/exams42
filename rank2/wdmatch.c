/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:42:26 by mde-souz          #+#    #+#             */
/*   Updated: 2024/06/18 21:42:28 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int wdmatch(char *s1, char *s2)
{
    while (*s2)
    {
        if (*s1 == *s2)
            s1++;
        s2++;
    }
    return (*s1 == '\0');
}