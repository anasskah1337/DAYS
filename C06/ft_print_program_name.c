/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:35:58 by marvin            #+#    #+#             */
/*   Updated: 2026/07/29 13:35:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
int main(int argc, char **argv){
    int i=0;
    while(argv[0][i]){
         ft_putchar(argv[0][i]);
         i++;
    }
    return 0;
}