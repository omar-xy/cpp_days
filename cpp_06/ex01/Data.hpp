/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 23:02:36 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/10 23:05:35 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Data
{
    private:
        std::string _s1;
        int _n;
        std::string _s2;
    public:
        Data();
        Data(std::string s1, int n, std::string s2);
        Data(Data const &copy);
        ~Data();
        int getN() const;
        std::string getS1() const;
        std::string getS2() const;
        Data &operator=(Data const &copy);

};

