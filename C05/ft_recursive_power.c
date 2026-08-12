/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:06:34 by marvin            #+#    #+#             */
/*   Updated: 2026/07/26 20:06:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_iterative_power(int nb, int power){
    if(power<0){
        return 0;
    }
    if(nb==0 && power==0){
        return 1;
    }
    if(power==0){
        return 1;
    }
    else{
        return nb*ft_iterative_power(nb,power-1);
    }
}