/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:29:22 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/08 22:29:35 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"



class ClassB : public Base
{
    public:
        virtual ~ClassB();
        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);
        
};