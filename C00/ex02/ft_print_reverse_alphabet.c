/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-mar <elmardi.yas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 07:45:44 by yael-mar          #+#    #+#             */
/*   Updated: 2026/03/04 07:45:44 by yael-mar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_reverse_alphabet()
{
    char c;
    
    c = 'z';
    while(c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
}

int main()
{
    ft_print_reverse_alphabet();
}