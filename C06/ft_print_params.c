/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 14:15:47 by marvin            #+#    #+#             */
/*   Updated: 2026/07/29 14:15:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
int main(int argc ,char **argv){
    int i=1;
    while(argv[i]){
        int j=0;
        while(argv[i][j]){
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return 0;
}