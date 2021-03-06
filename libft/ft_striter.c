/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdp <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 20:23:06 by gdp               #+#    #+#             */
/*   Updated: 2020/04/28 00:56:17 by gdupont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
	return (s);
}
