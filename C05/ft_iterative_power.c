/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:18:24 by marvin            #+#    #+#             */
/*   Updated: 2026/07/26 20:18:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power){
    int i=1,resultat=1;
    if(nb==0 && power==0){
        return 1;
    }
    if(power<0){
        return 0;
    }
    else{
        while(i<(power+1)){
            resultat*=nb;
            i++;
        }
        return resultat;
    }
}
