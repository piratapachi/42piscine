/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:30:12 by antandre          #+#    #+#             */
/*   Updated: 2024/06/07 14:58:10 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}