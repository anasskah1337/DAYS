/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 09:39:52 by marvin            #+#    #+#             */
/*   Updated: 2026/07/22 09:39:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar( char c){
    write(1,&c,1);
}

\\ fonction pour les whites spaces :
int ft_white_space(char *str){
    int i=0;
    while(str[i] && (str[i]>=9 && str[i]<=13)){
        i++;
    }
    return i;
}

\\ fonction qui determine le signe: 
char ft_signe(char *str){
    char signe ='+';
    i=ft_white_space(str);
    while(str[i] && (str[i]=='+' || str[i]=='-')){
        signe*=str[i];
        i++;
    }
    return signe;    
}

\\ fonction qui rend le caracter en int:
int ft_str_int(char *str){
    int j=0;
    int valeur=0;
    while(str[j] && !(str[j]>='1' && str[j]<='9')){
        j++;
    }
    while(str[j] && (str[j]>='1' && str[j]<='9')){
        valeur = (valeur*10) + (str[j]-48);
        j++;
    }
    return valeur;
}

\\ fonction principale :
int ft_atoi(char *str){
    char signe2;
    int retoure;
    signe2 = ft_signe(str);
    if(signe2=='+'){
        retoure = ft_str_int(str);
    }else{
        retoure = -ft_str_int(str);
    }
    return retoure;
}
