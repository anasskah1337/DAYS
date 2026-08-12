/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 14:26:07 by marvin            #+#    #+#             */
/*   Updated: 2026/07/24 14:26:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb){
    if(nb==0){
        return 1;
    }
    if(nb<0){
        return 0;
    }
    int resultat=1,j=1,stop;
    stop =nb+1;
    while(j!=stop){
        resultat*=j;
        j++;
    }
    return resultat;
}
