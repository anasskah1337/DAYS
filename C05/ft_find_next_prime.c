/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 22:37:48 by marvin            #+#    #+#             */
/*   Updated: 2026/07/26 22:37:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb){
    int i=2,x=1;
    if(nb<0){
        return 0;
    }

    if( nb==0 || nb==1 || nb==2){
        return 2;
    }
    while(i<nb){
        if((nb%i)==0){
            x=0;
        }
        i++;
    }
    if(x==1){
        return nb;
    }
    else{
       return ft_find_next_prime(nb+1);
    }
}