/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 19:45:31 by marvin            #+#    #+#             */
/*   Updated: 2026/07/29 19:45:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char *ft_strdup(char *src){
    char *T;
    int N,i=0,k=0;
    while(src[i]){
        i++;
    }
    N = i;
    T = malloc((N+1)*sizeof(char));
    if(T==NULL){
        return NULL;
    }else{
        while(k<=i){
            T[k]=src[k];
            k++;
        }
    }
    return T;
}