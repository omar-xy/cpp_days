/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:38:03 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/14 16:16:34 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 


#include <iostream>

template <typename T> void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <typename T> T max(T &x, T &y)
{
    return (x > y) ? x : y;
}

template <typename T> T min(T &x, T &y)
{
    return (x < y) ? x : y;
}

