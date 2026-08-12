/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 20:27:35 by marvin            #+#    #+#             */
/*   Updated: 2026/07/26 20:27:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_fibonacci(int index){
    if(index<0){
        return -1;
    }
    if(index==0 || index == 1){
        return index ;
    }
    else{
        return ft_fibonacci(index-2)+ft_fibonacci(index-1);
    }
}