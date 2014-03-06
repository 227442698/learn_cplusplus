#include<iostream>

#include"CreateAndDestroy.h"

CreateAndDestroy first( 1, "(global before main)");

void create()
{
	CreateAndDestroy fifth( 5, "(local in create)" );
	static CreateAndDestroy sixth( 6, "(local static in create )" );
	CreateAndDestroy seventh( 7, "(local in create)");
}

int main()
{
	using std::cout;
	CreateAndDestroy second( 2, "(local automatic in main)" );
	static CreateAndDestroy third( 3, "(local static in main)" );

	create();

	{CreateAndDestroy fourth(4, "(local automatic in scope)");}


	return 0;
}