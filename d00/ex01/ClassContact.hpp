/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnieto-m <lnieto-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:51:14 by lnieto-m          #+#    #+#             */
/*   Updated: 2016/07/15 11:25:45 by lnieto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

class Contact
{
	public:
		Contact();
		~Contact();
		// Set contact informations
		void			SetFirstName(std::string FirstName);
		void			SetLastName(std::string LastName);
		void			SetNickname(std::string Nickname);
		void			SetLogin(std::string Login);
		void			SetPostalAdress(std::string PostalAdress);
		void			SetEmailAdress(std::string EmailAdress);
		void			SetPhoneNumber(std::string PhoneNumber);
		void			SetBirthdayDate(std::string BirthdayDate);
		void			SetFavoriteMeal(std::string FavoriteMeal);
		void			SetUnderwearColor(std::string UnderwearColor);
		void			SetDarkestSecret(std::string DarkestSecret);
		// Get contact informations
		std::string		GetFirstName(void) const;
		std::string		GetLastName(void) const;
		std::string		GetNickname(void) const;
		std::string		GetLogin(void) const;
		std::string		GetPostalAdress(void) const;
		std::string		GetEmailAdress(void) const;
		std::string		GetPhoneNumber(void) const;
		std::string		GetBirthdayDate(void) const;
		std::string		GetFavoriteMeal(void) const;
		std::string		GetUnderwearColor(void) const;
		std::string		GetDarkestSecret(void) const;

	private:
		std::string		FirstName;
		std::string		LastName;
		std::string		Nickname;
		std::string		Login;
		std::string		PostalAdress;
		std::string		EmailAdress;
		std::string		PhoneNumber;
		std::string		BirthdayDate;
		std::string		FavoriteMeal;
		std::string		UnderwearColor;
		std::string		DarkestSecret;
};

#endif
