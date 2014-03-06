#include "CreateAndDestroy.h"
#include <iostream>

CreateAndDestroy::CreateAndDestroy( int id, std::string str )
{
	m_objectID = id;
	m_message = str;

	std::cout << "Object " << m_objectID 
		<< "    constructor runs   " << m_message << std::endl;

}


CreateAndDestroy::~CreateAndDestroy(void)
{
	std::cout << "Object " << m_objectID << 
		"    destructor runs    " << m_message << std::endl; 
}
