/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:33:36 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/14 16:39:26 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
    
}

Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    
}


