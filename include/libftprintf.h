/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 11:05:57 by user42            #+#    #+#             */
/*   Updated: 2020/05/04 23:21:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
# include <stdarg.h>
# include "../libft/libft.h"

# define ABS(x) (x < 0) ? -x: x

# define FLAGS "-0123456789.*\0"
# define SYMB "cspdiuxX%\0"

typedef	struct	s_conf
{
	char	*str;
	int		width;
	int		precis;
	int		dot;
	int		zero;
	int		l_align;
	int		neg;
	char	symb;
	char	c;
}				t_conf;

int				conf_is_valid(char const *str);
int				valid_conf(char const *str, va_list *arg, int *pft);
int				no_conf(char const *str);
void			ft_print_conf(t_conf *conf, int *pft);
int				print_single_char(char c, int *pft);

int				c_is_symbol(char c);
int				c_is_flag(char c);

int				find_flag(char const *str, char c);
int				check_zero(char const *str);

void			initialize_conf(t_conf *conf);
int				find_c_b(char const *str, char c);

void			delete_1st_char(char *str);

void			ft_putchar_nb(char c, int nb);
void			ft_putstr_nb(char *str, int nb);
char			get_symb(char const *str_global);
char			*dec_to_hex(unsigned int origin, char c);
int				ft_find_char(char const *str, char c);
void			set_width(char const *str, t_conf *config);

int				ft_printf(char const *str, ...);

void			ft_print_d_i(t_conf *conf, int *pft);
void			ft_print_c(t_conf *conf, int *pft);
void			ft_print_s(t_conf *conf, int *pft);
void			ft_print_x(t_conf *conf, int *pft);
void			ft_print_u(t_conf *conf, int *pft);
void			ft_print_p(t_conf *conf, int *pft);
void			ft_print_percentage(t_conf *conf, int *pft);
int				abso(int x);

#endif
