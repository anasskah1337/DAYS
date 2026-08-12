/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:08:23 by marvin            #+#    #+#             */
/*   Updated: 2026/07/20 15:08:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
    long n;
    n=nb;
    if(n<0){
        ft_putchar('-');
        n=-n;
    }
    while(n>=10){
        long  div=1;
        while((n/div)>=10){
            div*=10;
        }
        ft_putchar((n/div)+'0');
        n =(n % div);
    }
    if(n<10){
        ft_putchar(n + '0');
    }
}
int main(){
ft_putnbr(-1165433434);
return 0;
}