/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:26:42 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/14 15:41:40 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int		main( void ) {
	DiamondTrap simo("simo");

	//simo.showStats();
	simo.whoAmI();
	simo.attack("sadf");

	return 0;
}