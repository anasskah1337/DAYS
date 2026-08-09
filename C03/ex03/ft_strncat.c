/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:17:33 by marvin            #+#    #+#             */
/*   Updated: 2026/07/19 15:17:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i=0,j=0;
    while(dest[i]!='\0'){
        i++;
    }
    while(j<nb && src[j]){
        dest[i]=src[j];
        i++;
        j++;
    }
    dest[i]='\0';
return dest;    
}
//printf("%s",ft_strncat(dest,src,3));