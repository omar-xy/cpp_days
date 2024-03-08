/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:29:41 by otaraki           #+#    #+#             */
/*   Updated: 2024/03/08 22:29:51 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"



class ClassC : public Base
{
    public:
        virtual ~ClassC();
        Base *generate(void);
        void identify(Base* p);
        void identify(Base& p);
        
};