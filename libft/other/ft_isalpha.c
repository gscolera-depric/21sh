/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscolera <gscolera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:08:04 by gscolera          #+#    #+#             */
/*   Updated: 2018/11/21 15:00:20 by gscolera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
