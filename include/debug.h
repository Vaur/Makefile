//
// debug.h for debug in /home/devill_x/epitech/utils/project
//
// Made by Xavier Devilliers
// Login   <devill_x@epitech.net>
//
// Started on  Wed Jan 22 13:41:35 2014 Xavier Devilliers
// Last update Fri Jan 24 16:12:22 2014 Xavier Devilliers
//

#ifndef		DEBUG_H
# define	DEBUG_H

/*
** define
*/

# define	debug(msg)	if (DEBUG_ == 1)			\
    std::cout << "\E[31m\033[1m" << __FILE__ <<				\
      " \033[0m: \E[31m\033[1m" <<  __LINE__  << "\033[0m " << msg <<	\
      std::endl;

#endif      /* !DEBUG_H_ */
