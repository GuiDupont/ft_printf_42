/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 22:10:13 by user42            #+#    #+#             */
/*   Updated: 2020/05/05 13:10:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int		conf_is_valid(char const *str)
{
	int i;

	i = 0;
	if (str[1])
		i++;
	while (str[i] && c_is_flag(str[i]))
		i++;
	if (c_is_symbol(str[i]))
		return (i);
	return (0);
}

char	get_symb(char const *str_global)
{
	int i;

	i = 1;
	while (ft_strchr(FLAGS, str_global[i]))
		i++;
	return (str_global[i]);
}

int		d_to_x_len(unsigned int origin, char c)
{
	int		len;

	len = 1;
	while (origin >= 16)
	{
		origin /= 16;
		len++;
	}
	if (c == 'p' || c == 'P')
		len += 2;
	return (len);
}

char	*dec_to_x(unsigned int nb, char c)
{
	char	*ref;
	char	*final;
	int		len_final;

	len_final = d_to_x_len(nb, c);
	if (!(final = malloc(sizeof(*final) * len_final + 1)))
		return (NULL);
	if (c == 'p' || c == 'P')
		ft_strcpy(final, "0x");
	ref = (c == 'X' || c == 'P') ? "0123456789ABCDEF" : "0123456789abcdef";
	final[len_final] = '\0';
	len_final--;
	while (nb >= 16)
	{
		final[len_final] = ref[nb % 16];
		len_final--;
		nb /= 16;
	}
	final[len_final] = ref[nb];
	return (final);
}

int		ft_find_char(char const *str, char c)
{
	int i;

	i = 1;
	while (!(ft_strchr(SYMB, str[i])))
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}
