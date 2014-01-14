// Array.hpp

//=========================================================================================
template< typename Type >
Utilities::Array< Type >::Array( int growSize /*= 256*/ )
{
	size = 0;
	count = 0;
	this->growSize = growSize;
	array = 0;
}

//=========================================================================================
template< typename Type >
Utilities::Array< Type >::~Array( void )
{
	Clear();
}

//=========================================================================================
template< typename Type >
void Utilities::Array< Type >::Append( const Type& type )
{
	( *this )[ count ] = type;
}

//=========================================================================================
template< typename Type >
void Utilities::Array< Type >::Clear( void )
{
	free( array );
	array = 0;
	size = 0;
	count = 0;
}

//=========================================================================================
template< typename Type >
const Type& Utilities::Array< Type >::operator[]( int index ) const
{
	return array[ index ];
}

//=========================================================================================
template< typename Type >
Type& Utilities::Array< Type >::operator[]( int index )
{
	if( index >= size )
	{
		size = ( ( index / growSize ) + 1 ) * growSize;
		if( !array )
			array = ( Type* )malloc( size * sizeof( Type ) );
		else
			array = ( Type* )realloc( array, size * sizeof( Type ) );		// Beware: Letting array memory move around can lead to hard-to-find bugs!
	}

	if( index >= count )
	{
		int newCount = index + 1;
		//CallConstructors( count, newCount );
		count = newCount;
	}

	return array[ index ];
}

//=========================================================================================
template< typename Type >
int Utilities::Array< Type >::Count( void ) const
{
	return count;
}

//=========================================================================================
template< typename Type >
void Utilities::Array< Type >::CallConstructors( int first, int last )
{
	for( int index = first; index <= last; index++ )
		array[ index ].Type();
}

//=========================================================================================
template< typename Type >
void Utilities::Array< Type >::CallDestructors( int first, int last )
{
	for( int index = first; index < last; index++ )
		array[ index ].~Type();
}

// Array.hpp