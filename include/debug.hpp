//
// debug.h for debug in /home/devill_x/epitech/utils/project
//
// Made by Xavier Devilliers
// Login   <devill_x@epitech.net>
//
// Started on  Wed Jan 22 13:41:35 2014 Xavier Devilliers
// Last update Mon Feb 17 13:40:23 2014 devill_x
//

#ifndef		DEBUG_H
# define	DEBUG_H

/*
** define
*/

/*
** color
*/

# define	RED		"\E[31m\033[1m"
# define	WHI		"\033[0m "

/*
** Macro debug
*/

# define	debug(msg)	if (DEBUG_ == 1)			\
    std::cout <<  RED << __FILE__ <<	WHI <<				\
      ": " << RED <<  __LINE__  << WHI << msg <<			\
      std::endl;

#endif      /* !DEBUG_H_ */
