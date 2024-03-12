/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:03:35 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/10 23:03:39 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}


Serializer::Serializer(Serializer const &copy)
{
    *this = copy;
}


Serializer &Serializer::operator=(Serializer const &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}


Serializer::~Serializer()
{
}



uintptr_t Serializer::serialize(Data* ptr)
{
    uintptr_t raw;
    raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data *d;
    d = reinterpret_cast<Data *>(raw);
    return (d);
}

