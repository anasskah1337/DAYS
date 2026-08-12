/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 16:15:41 by marvin            #+#    #+#             */
/*   Updated: 2026/07/29 16:15:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}

int ft_strcmp(char *s1,char *s2){
    int i=0;
    while(s1[i]&&s2[i]){
        if(s1[i]!=s2[i]){
            return (s1[i]- s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}
int main(int argc, char **argv){
    int j=1,k,l=1,s;
    char *temp;
    while(j<(argc -1)){
        k=j+1;
        while(k < argc){
            if(ft_strcmp(argv[j],argv[k])>0){
               temp = argv[j];
               argv[j] = argv[k];
               argv[k] = temp;
            }
        k++;
        }
        j++;
    }
    while(argv[l]){
        s=0;
        while(argv[l][s]){
            ft_putchar(argv[l][s]);
            s++;
        }
        ft_putchar('\n');
        l++;
    }
    return 0;
}