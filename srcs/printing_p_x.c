/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_p_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 23:28:51 by user42            #+#    #+#             */
/*   Updated: 2020/05/04 17:10:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

void	ft_print_x(t_conf *conf)
{
	char	fill;
	int		str_len;

	if (conf->str[0] == '0' && !conf->precis && conf->dot)
		conf->str[0] = '\0';
	str_len = ft_strlen(conf->str);
	fill = (conf->zero == 1) ? 's' : ' ';
	conf->precis = (conf->precis <= str_len) ? str_len : conf->precis;
	if (conf->l_align == 1)
	{
		ft_putchar_nb('s', conf->precis - str_len);
	//	ft_putstr(conf->str);
		ft_putchar_nb(fill, conf->width - conf->precis);
	}
	else
	{
		ft_putchar_nb(fill, conf->width - conf->precis);
		ft_putchar_nb('s', conf->precis - str_len);
	//	ft_putstr(conf->str);
	}
	free(conf->str);
	PFT += (conf->precis < conf->width) ? conf->width : conf->precis;
}

void	ft_print_p_null(t_conf *conf)
{
	int		str_len;
	char	*to_print;

	to_print = (conf->dot && !conf->precis) ? "0x" : "0x0";
	str_len = ft_strlen(to_print);
	if (conf->l_align == 1)
	{
		ft_putstr(to_print);
		ft_putchar_nb(' ', conf->width - str_len);
	}
	else
	{
		ft_putchar_nb(' ', conf->width - str_len);
		ft_putstr(to_print);
	}
	PFT += (((str_len < conf->width) ? conf->width : str_len));	
}


void	ft_print_p(t_conf *conf)
{
	int		str_len;

	if (!ft_strcmp(conf->str, "0x0"))
		ft_print_p_null(conf);
	else
	{
		str_len = ft_strlen(conf->str);
		if (conf->l_align == 1)
		{
			ft_putstr(conf->str);
			ft_putchar_nb(' ', conf->width - str_len);
		}
		else
		{
			ft_putchar_nb(' ', conf->width - str_len);
			ft_putstr(conf->str);
		}
		PFT += (((str_len < conf->width) ? conf->width : str_len));
	}
	free(conf->str);
	conf->str = NULL;
}
