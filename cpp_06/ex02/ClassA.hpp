/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:26:09 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/08 22:29:12 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"



class ClassA : public Base
{
    public:
        virtual ~ClassA();
        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);
        
};