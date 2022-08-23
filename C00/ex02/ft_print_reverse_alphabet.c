/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jahmad-v <jahmad-v@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:29:34 by jahmad-v          #+#    #+#             */
/*   Updated: 2022/08/15 18:43:19 by jahmad-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main(void)
{
	char	letra;

	letra = 'z' ;
	while (letra >= 'a' )
	{
		write(1, &letra, 1);
		letra--;
	}
}

