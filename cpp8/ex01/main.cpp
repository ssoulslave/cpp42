/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorchi <mkorchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:05:23 by mkorchi           #+#    #+#             */
/*   Updated: 2022/10/02 15:24:46 by mkorchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    largeNumberTest( void )
{
    Span sp = Span(10000);

	for (int i = -5000; i < 5000; i++)
		sp.addNumber(i);
	
	try
	{
		sp.addNumber(5);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "largest Span is " <<  sp.longestSpan() << std::endl;
    std::cout << "shortest Span is " <<  sp.shortestSpan() << std::endl;
}

void    basicTest( void )
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    try 
    {
        sp[-1];  
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    for(unsigned int i = 0; i < sp.size(); i++)
    	std::cout << sp[i] << std::endl;
        

	std::cout << "shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest Span: "<< sp.longestSpan() << std::endl;
}

void    AddRangeTest( void )
{
    Span sp = Span(10);
    
    std::vector<int> v1;
    v1.push_back(9);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(1);
    int arr[5] = {8, 2 ,6 , 1, 0};
    
    sp.addRange(arr, 5);
    sp.addRange(v1.begin(), v1.end());
    for(unsigned int i = 0; i < sp.size(); i++)
        std::cout << sp[i] << std::endl;

    try
    {
        sp.addRange(v1.begin(), v1.end());
    }
	catch (std::exception &e)
	{
		std::cerr << e.what() << ": length of the range getting added is bigger than capacity" << std::endl;
	}
}

int main( void )
{
    
    // basicTest();
    // AddRangeTest();
    largeNumberTest();


    return 0;
}