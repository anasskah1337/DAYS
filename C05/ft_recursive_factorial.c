/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:38:29 by marvin            #+#    #+#             */
/*   Updated: 2026/07/24 14:38:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int resultat=1;
int ft_iterative_factorial(int nb){
    if(nb<0){
        return 0;
    }
    if(nb==0 || nb==1){
        return 1;
    }
    else{
        return nb*ft_iterative_factorial(nb-1);
    }
}    
