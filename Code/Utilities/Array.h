// Array.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
template< typename Type >
class Utilities::Array
{
public:

	Array( int growSize = 256 );
	~Array( void );

	void Append( const Type& type );
	void Clear( void );

	const Type& operator[]( int index ) const;
	Type& operator[]( int index );

	int Count( void ) const;

	void CallConstructors( int first, int last );
	void CallDestructors( int first, int last );

private:

	Type* array;
	int count;
	int size;
	int growSize;
};

#include "Array.hpp"

// Array.h