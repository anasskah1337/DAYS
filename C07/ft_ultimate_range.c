/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 22:54:14 by marvin            #+#    #+#             */
/*   Updated: 2026/07/30 22:54:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max){
    if(min>=max){
        *range = NULL;
        return 0;
    }
    int length,i=1;
    length = (max - min);
    (*range) = malloc(length*sizeof(int));
    if(*range == NULL){
        return -1;
    }
    (*range)[0]=min;
    while(i<length){
        (*range)[i]=( min + i);
        i++;
    }
    return 0;
}