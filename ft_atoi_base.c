/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:24:29 by marvin            #+#    #+#             */
/*   Updated: 2026/07/23 14:24:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int ft_len_base(char *base){
    int i=0;
    while(base[i]){
        i++;
    }
    return i;
}

int ft_valide_base(char *base){
    int length;
    int k,j=0,d=0,m=0;
    length = ft_len_base(base);
    // check if base is duplicated :
    while(base[j]){
         k=0;
        while(base[k]){
            if((base[j]==base[k]) && (j!=k)){
                return 0;
            }
            k++;
        }
        j++;
    }
    // check if base is empty and has only one character:
    if(length<2 || !(base[0])){
        return 0;
    }
    // The base contains ‘+’ or ‘-’:
    while(base[d]){
        if((base[d]=='+') ||(base[d]=='-')){
            return 0;
        }
        d++;
    }
    // check if there is whitespaces in the base:
    while(base[m]){
        if((base[m]>=9 && base[m]<=13) || base[m]==31){
            return 0;
        }
        m++;
    }
    return 1;
}
int ft_check(char *str,char *base){
    int i=0,k,found;
    while(str[i]){
        k=0;
        found=0;
        while(base[k]){
            if(str[i]==base[k]){
                found++;
                break;
            }
            k++;
        }
        if(found==0){
            return 0;
        }
        i++;
    }
    return 1;
}