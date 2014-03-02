#include<iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std::setw;

void modifyArray( int [], int );
void modifyElement( int );

int main()
{
	const int arraySize = 5; // size of array a
	int a[ arraySize ] = { 0, 1, 2, 3, 4 };

	cout << "Effects of passing entire array by reference: " << 
		"\n\nThe values of the original array are: \n";

	for( int i=0; i < arraySize; i++ )
		cout << setw(3) << a[i];
	cout << endl;

	modifyArray( a, arraySize );
	cout<< "The values of the modified array are:\n";

	for( int j = 0; j < arraySize; j++ )
		cout << setw( 3 ) << a[j];

	cout << "\n\na[3] before modifyElememt: " << a[3] << endl;

	modifyElement( a[3] );
	cout << "a[3] after modifyElement: " << a[3] << endl;

	return 0;
}

void modifyElement( int e )
{ cout << "Value of element in modifyElement: " << ( e *= 2 ) << endl;
}

void modifyArray( int b[], int sizeofArray)
{
	for ( int k=0; k < sizeofArray; k++ )
		b[k] *= 2;
}