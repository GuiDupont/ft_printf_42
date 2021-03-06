/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_single_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 23:35:35 by user42            #+#    #+#             */
/*   Updated: 2020/05/04 22:53:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	print_single_char(char c, int *pft)
{
	ft_putchar(c);
	*pft += 1;
	return (1);
}
