/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmad-v <jahmad-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:57:22 by soandrad          #+#    #+#             */
/*   Updated: 2022/08/16 15:54:39 by jahmad-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);  //LLAMA A PUTCHAR.C
void		ft_length_print(int length, int y, int x, int width); //CREAMOS VARIABLE LENGTH ; X ; Y ; WIDTH//

void	rush(int x, int y)  //CREAMOS VARIABLE RUSH Y DEFINIMOS
{
	int	width; //DEFINIMOS LENGHT
	int	length;

	length = 0; //LENGHT ES 0
	if ((x > 0) && (y > 0)) //SI LA CONDICION DE QUE X e Y es 0  SEGUIMOS
	{
		while (length < y) //SI LENGHT ES MENOR QUE Y
		{
			width = 0; // WIDTH ES 0
			while (width < x) //MIENTRAS WIDTH ES MENOS QUE X
			{
				ft_length_print(length, y, x, width); 
				width++; //SUMAMOS 1 A WIDTH
			}
			ft_putchar('\n'); //SALTO DE LINEA
			length++; //LENGHT +1
		}
	}
}

void	ft_length_print(int length, int y, int x, int width)
{
	if (length == 0)
	{
		if (width == 0)
			ft_putchar('A');
		else if (width == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (length == y - 1)
	{
		if (width == 0)
			ft_putchar('C');
		else if (width == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if ((width == 0) || (width == x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
