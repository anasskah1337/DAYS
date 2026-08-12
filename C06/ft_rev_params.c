/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 15:11:04 by marvin            #+#    #+#             */
/*   Updated: 2026/07/29 15:11:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

int main(int argc,char **argv){
    int i,j;
    i=(argc-1);
    while(argv[i] && i!=0){
         j=0;
        while(argv[i][j]){
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i--;
    }
    return 0;
}