/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:51:19 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/07/15 11:48:47 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(void) {
	std::cout << "constructor" << std::endl;
	return;
}

Contact::~Contact(void) {
	std::cout << "destructor" << std::endl;
	return;
}

// Set Functions

void		Contact::SetFirstName(std::string FirstName) {
	this->FirstName = FirstName;
	return;
}

void		Contact::SetLastName(std::string LastName) {
	this->LastName = LastName;
	return;
}

void		Contact::SetNickname(std::string Nickname) {
	this->Nickname = Nickname;
	return;
}

void		Contact::SetLogin(std::string Login) {
	this->Login = Login;
	return;
}

void		Contact::SetPostalAdress(std::string PostalAdress) {
	this->PostalAdress = PostalAdress;
	return;
}

void		Contact::SetEmailAdress(std::string EmailAdress) {
	this->EmailAdress = EmailAdress;
	return;
}

void		Contact::SetPhoneNumber(std::string PhoneNumber) {
	this->PhoneNumber = PhoneNumber;
	return;
}

void		Contact::SetFavoriteMeal(std::string FavoriteMeal) {
	this->FavoriteMeal = FavoriteMeal;
	return;
}

void		Contact::SetUnderwearColor(std::string UnderwearColor) {
	this->UnderwearColor = UnderwearColor;
	return;
}

void		Contact::SetDarkestSecret(std::string DarkestSecret) {
	this->DarkestSecret = DarkestSecret;
	return;
}

// Get Functions

std::string	Contact::GetFirstName(void) const {
	return (this->FirstName);
}

std::string	Contact::GetLastName(void) const {
	return (this->LastName);
}

std::string	Contact::GetNickname(void) const {
	return (this->Nickname);
}

std::string	Contact::GetLogin(void) const {
	return (this->Login);
}

std::string	Contact::GetPostalAdress(void) const {
	return (this->PostalAdress);
}

std::string	Contact::GetEmailAdress(void) const {
	return (this->EmailAdress);
}

std::string	Contact::GetPhoneNumber(void) const {
	return (this->PhoneNumber);
}

std::string	Contact::GetBirthdayDate(void) const {
	return (this->BirthdayDate);
}

std::string	Contact::GetFavoriteMeal(void) const {
	return (this->FavoriteMeal);
}

std::string	Contact::GetUnderwearColor(void) const {
	return (this->UnderwearColor);
}

std::string	Contact::GetDarkestSecret(void) const {
	return (this->DarkestSecret);
}
