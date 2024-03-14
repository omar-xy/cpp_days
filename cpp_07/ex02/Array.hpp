/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:33:39 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/14 16:36:03 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

template <typename T> class Array {

 
public:
    Array();
    Array(unsigned int n);
    Array(Array const & src);
    Array & operator=(Array const & src);
    ~Array();
    void print();
};

