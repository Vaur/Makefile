//
// main.cpp for test in /home/devill_x/epitech/utils/project
//
// Made by Xavier Devilliers
// Login   <devill_x@epitech.net>
//
// Started on  Wed Jan 22 13:45:37 2014 Xavier Devilliers
// Last update Wed Jan 22 13:48:11 2014 Xavier Devilliers
//

/*
** include
*/

#include	<string>
#include	<iostream>
#include	"debug.h"

void	test()
{
  debug("func test");
}

int	main()
{
  test();
  std::cout << "un simple main de test" << std::endl;
  debug("avant le test");
}
