/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PFTing_s_c_percentage.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 21:50:02 by user42            #+#    #+#             */
/*   Updated: 2020/05/03 00:32:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

void	ft_print_s(t_conf *conf)
{
	int		precis;
	int		str_len;
	int		to_print;
	char	fill;

	precis = conf->precis;
	str_len = ft_strlen(conf->str);
	to_print = (precis <= str_len) ? precis : str_len;
	fill = (conf->zero) ? '0' : ' ';
	if (conf->l_align == 1)
		ft_putstr_nb(conf->str, to_print);
	ft_putchar_nb(fill, conf->width - to_print);
	if (conf->l_align == 0)
		ft_putstr_nb(conf->str, to_print);
	PFT += (to_print < conf->width) ? conf->width : to_print;
}

void		ft_print_c(t_conf *conf)
{
	ft_putnbr(conf->width);
	if (conf->l_align == 1)
		ft_putchar(conf->c);
	ft_putchar_nb(' ', conf->width - 1);
	if (conf->l_align == 0)
		ft_putchar(conf->c);
	PFT += (conf->width == 0) ? 1 : conf->width;
}

int		ft_print_percentage(t_conf *conf)
{
	char	fill;

	fill = (conf->zero == 1) ? '0' : ' ';
	if (conf->l_align == 1)
		ft_putchar(conf->symb);
	ft_putchar_nb(fill, conf->width - 1);
	if (conf->l_align == 0)
		ft_putchar(conf->symb);
	PFT += (conf->width == 0) ? 1 : conf->width;
	return ((conf->width == 0) ? 1 : conf->width);
}
