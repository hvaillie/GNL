/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvaillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 14:39:02 by hvaillie          #+#    #+#             */
/*   Updated: 2017/11/24 16:56:07 by hvaillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (nb / i > i)
		i++;
	if (nb % i == 0 && nb / i == i)
		return (i);
	return (0);
}
