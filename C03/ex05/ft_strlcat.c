/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 08:58:09 by marvin            #+#    #+#             */
/*   Updated: 2026/07/20 08:58:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int i=0,k=0,m=0;
    while(dest[i]!='\0'){
        i++;
    }
    while(i< size -1  && src[k]){
        dest[i]=src[k];
        i++;
        k++;
    }    
    dest[i]='\0';
    while(dest[m]!='\0'){
        m++;
    }
return m;
}