#ifndef STRUCT_H
#define STRUCT_H
#include "ClapTrap.hpp"

typedef struct			s_ClapTrap
{
	void				*element;
	struct s_ClapTrap	*next;
}						t_ClapTrap;

#endif