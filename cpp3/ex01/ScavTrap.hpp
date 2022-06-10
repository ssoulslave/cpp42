/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:00:35 by mkorchi           #+#    #+#             */
/*   Updated: 2022/06/06 19:47:26 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	~ScavTrap( void );
	ScavTrap( ClapTrap const & src);
	ScavTrap &	operator=( ScavTrap const & rhs);

	void	guardGate( void );
	void	attack(const std::string& target);

};



#endif