/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjochum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:44:22 by mjochum           #+#    #+#             */
/*   Updated: 2024/03/18 11:44:24 by mjochum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
    this->_isInit = 0;
}

Contact::~Contact(void)
{
    if (this->_isInit != 0)
        std::cout << "Contact \"" << this->_fname << "\" deleted." << std::endl;
}

void    Contact::addContact(void)
{
    std::cout << "Creating Contact:" << std::endl << "First name: ";
    std::getline(std::cin, this->_fname);
    std::cout << std::endl << "Last name: ";
    std::getline(std::cin, this->_lname);
    std::cout << std::endl << "Nickname: ";
    std::getline(std::cin, this->_nickname);
    std::cout << std::endl << "Phone number: ";
    std::getline(std::cin, this->_phone);
    std::cout << std::endl << "Darkest Secret: ";
    std::getline(std::cin, this->_secret);
    std::cout << std::endl << "Contact Added." << std::endl;
    this->_isInit = 1;
}

void    Contact::displayInfo(void)
{
    std::cout << "name: " << this->_fname << std::endl;
    std::cout << "surname: " << this->_lname << std::endl;
    std::cout << "nickname: " << this->_nickname << std::endl;
    std::cout << "phone: " << this->_phone << std::endl;
    std::cout << "darkest secret: " << this->_secret << std::endl;
}