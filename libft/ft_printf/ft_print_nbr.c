/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:23:40 by masebast          #+#    #+#             */
/*   Updated: 2022/02/08 15:50:10 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int num)
{
	int		len;
	char	*n;

	len = 0;
	n = ft_itoa(num);
	len = ft_print_str(n);
	free(n);
	return (len);
}
