#pragma once
#include<string>

class CreateAndDestroy
{
public:
	CreateAndDestroy(int id, std::string str );
	~CreateAndDestroy(void);
private:
	int m_objectID;
	std::string m_message;
};

