/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:37:34 by marvin            #+#    #+#             */
/*   Updated: 2026/07/30 15:37:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int *ft_range(int min, int max){
    int *T;
    int N,j=1;
    if(min>=max){
        return NULL;
    }
    N = (max - min);
    T = malloc(N*sizeof(int));
    if(T==NULL)
        return NULL;
    T[0]=min;
    while(j<N){
        T[j]=T[j-1]+1;
        j++;
    }
    return T;
}