/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmad-v <jahmad-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:57:11 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/14 15:40:54 by jahmad-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) // CREAMOS LA VARIABLE CHAR
{
	write(1, &c, 1); // COMANDO WRITE-PRINTF
}
