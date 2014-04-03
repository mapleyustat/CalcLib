// MotherVector.cpp

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

#include "GeometricAlgebra.h"

using namespace GeometricAlgebra;

//=========================================================================================
Utilities::Map< MotherVector::SigInfo* >* MotherVector::vectorMap = 0;

//=========================================================================================
MotherVector::SigInfo::SigInfo( const char* vectorName, const char* latexName, const char* nonOrthoVectorName, double innerProduct )
{
	strcpy_s( this->vectorName, sizeof( this->vectorName ), vectorName );
	strcpy_s( this->latexName, sizeof( this->latexName ), latexName );
	strcpy_s( this->nonOrthoVectorName, sizeof( this->nonOrthoVectorName ), nonOrthoVectorName );

	this->innerProduct = innerProduct;
}

//=========================================================================================
/*static*/ void MotherVector::Setup( void )
{
	if( vectorMap )
		return;

	vectorMap = new Utilities::Map< SigInfo* >();
	
	vectorMap->Insert( "e1_1", new SigInfo( "e1_1", "e_{1,1}", "e1_1", 1.0 ) );
	vectorMap->Insert( "e2_1", new SigInfo( "e2_1", "e_{2,1}", "e2_1", 1.0 ) );
	vectorMap->Insert( "e3_1", new SigInfo( "e3_1", "e_{3,1}", "e3_1", 1.0 ) );
	vectorMap->Insert( "e4_1", new SigInfo( "e4_1", "e_{4,1}", "e4_1", 1.0 ) );
	vectorMap->Insert( "e5_1", new SigInfo( "e5_1", "e_{5,1}", "e5_1", 1.0 ) );
	vectorMap->Insert( "e6_1", new SigInfo( "e6_1", "e_{6,1}", "e6_1", 1.0 ) );
	vectorMap->Insert( "e7_1", new SigInfo( "e7_1", "e_{7,1}", "e7_1", 1.0 ) );
	vectorMap->Insert( "e8_1", new SigInfo( "e8_1", "e_{8,1}", "e8_1", 1.0 ) );
	vectorMap->Insert( "e9_1", new SigInfo( "e9_1", "e_{9,1}", "e9_1", 1.0 ) );

	vectorMap->Insert( "e1_2", new SigInfo( "e1_2", "e_{1,2}", "e1_2", 1.0 ) );
	vectorMap->Insert( "e2_2", new SigInfo( "e2_2", "e_{2,2}", "e2_2", 1.0 ) );
	vectorMap->Insert( "e3_2", new SigInfo( "e3_2", "e_{3,2}", "e3_2", 1.0 ) );
	vectorMap->Insert( "e4_2", new SigInfo( "e4_2", "e_{4,2}", "e4_2", 1.0 ) );
	vectorMap->Insert( "e5_2", new SigInfo( "e5_2", "e_{5,2}", "e5_2", 1.0 ) );
	vectorMap->Insert( "e6_2", new SigInfo( "e6_2", "e_{6,2}", "e6_2", 1.0 ) );
	vectorMap->Insert( "e7_2", new SigInfo( "e7_2", "e_{7,2}", "e7_2", 1.0 ) );
	vectorMap->Insert( "e8_2", new SigInfo( "e8_2", "e_{8,2}", "e8_2", 1.0 ) );
	vectorMap->Insert( "e9_2", new SigInfo( "e9_2", "e_{9,2}", "e9_2", 1.0 ) );

	vectorMap->Insert( "e1_3", new SigInfo( "e1_3", "e_{1,3}", "e1_3", 1.0 ) );
	vectorMap->Insert( "e2_3", new SigInfo( "e2_3", "e_{2,3}", "e2_3", 1.0 ) );
	vectorMap->Insert( "e3_3", new SigInfo( "e3_3", "e_{3,3}", "e3_3", 1.0 ) );
	vectorMap->Insert( "e4_3", new SigInfo( "e4_3", "e_{4,3}", "e4_3", 1.0 ) );
	vectorMap->Insert( "e5_3", new SigInfo( "e5_3", "e_{5,3}", "e5_3", 1.0 ) );
	vectorMap->Insert( "e6_3", new SigInfo( "e6_3", "e_{6,3}", "e6_3", 1.0 ) );
	vectorMap->Insert( "e7_3", new SigInfo( "e7_3", "e_{7,3}", "e7_3", 1.0 ) );
	vectorMap->Insert( "e8_3", new SigInfo( "e8_3", "e_{8,3}", "e8_3", 1.0 ) );
	vectorMap->Insert( "e9_3", new SigInfo( "e9_3", "e_{9,3}", "e9_3", 1.0 ) );

	vectorMap->Insert( "no1", new SigInfo( "no1", "o_1", "ni1", -1.0 ) );
	vectorMap->Insert( "no2", new SigInfo( "no2", "o_2", "ni2", -1.0 ) );
	vectorMap->Insert( "no3", new SigInfo( "no3", "o_3", "ni3", -1.0 ) );
	vectorMap->Insert( "no4", new SigInfo( "no4", "o_4", "ni4", -1.0 ) );
	vectorMap->Insert( "no5", new SigInfo( "no5", "o_5", "ni5", -1.0 ) );
	vectorMap->Insert( "no6", new SigInfo( "no6", "o_6", "ni6", -1.0 ) );
	vectorMap->Insert( "no7", new SigInfo( "no7", "o_7", "ni7", -1.0 ) );
	vectorMap->Insert( "no8", new SigInfo( "no8", "o_8", "ni8", -1.0 ) );
	vectorMap->Insert( "no9", new SigInfo( "no9", "o_9", "ni9", -1.0 ) );

	vectorMap->Insert( "ni1", new SigInfo( "ni1", "\\infty_1", "no1", -1.0 ) );
	vectorMap->Insert( "ni2", new SigInfo( "ni2", "\\infty_2", "no2", -1.0 ) );
	vectorMap->Insert( "ni3", new SigInfo( "ni3", "\\infty_3", "no3", -1.0 ) );
	vectorMap->Insert( "ni4", new SigInfo( "ni4", "\\infty_4", "no4", -1.0 ) );
	vectorMap->Insert( "ni5", new SigInfo( "ni5", "\\infty_5", "no5", -1.0 ) );
	vectorMap->Insert( "ni6", new SigInfo( "ni6", "\\infty_6", "no6", -1.0 ) );
	vectorMap->Insert( "ni7", new SigInfo( "ni7", "\\infty_7", "no7", -1.0 ) );
	vectorMap->Insert( "ni8", new SigInfo( "ni8", "\\infty_8", "no8", -1.0 ) );
	vectorMap->Insert( "ni9", new SigInfo( "ni9", "\\infty_9", "no9", -1.0 ) );
}

//=========================================================================================
/*static*/ void MotherVector::Shutdown( void )
{
	if( vectorMap )
	{
		vectorMap->DeleteAndRemoveAll();
		vectorMap = 0;
	}
}

//=========================================================================================
/*static*/ bool MotherVector::IsMotherVector( const char* vectorName )
{
	if( 0 == strcmp( vectorName, "e1_1" ) || 0 == strcmp( vectorName, "e1_2" ) || 0 == strcmp( vectorName, "e1_3" ) ||
		0 == strcmp( vectorName, "e2_1" ) || 0 == strcmp( vectorName, "e2_2" ) || 0 == strcmp( vectorName, "e2_3" ) ||
		0 == strcmp( vectorName, "e3_1" ) || 0 == strcmp( vectorName, "e3_2" ) || 0 == strcmp( vectorName, "e3_3" ) ||
		0 == strcmp( vectorName, "e4_1" ) || 0 == strcmp( vectorName, "e4_2" ) || 0 == strcmp( vectorName, "e4_3" ) ||
		0 == strcmp( vectorName, "e5_1" ) || 0 == strcmp( vectorName, "e5_2" ) || 0 == strcmp( vectorName, "e5_3" ) ||
		0 == strcmp( vectorName, "e6_1" ) || 0 == strcmp( vectorName, "e6_2" ) || 0 == strcmp( vectorName, "e6_3" ) ||
		0 == strcmp( vectorName, "e7_1" ) || 0 == strcmp( vectorName, "e7_2" ) || 0 == strcmp( vectorName, "e7_3" ) ||
		0 == strcmp( vectorName, "e8_1" ) || 0 == strcmp( vectorName, "e8_2" ) || 0 == strcmp( vectorName, "e8_3" ) ||
		0 == strcmp( vectorName, "e9_1" ) || 0 == strcmp( vectorName, "e9_2" ) || 0 == strcmp( vectorName, "e9_3" ) ||
		0 == strcmp( vectorName, "no1" ) || 0 == strcmp( vectorName, "ni1" ) ||
		0 == strcmp( vectorName, "no2" ) || 0 == strcmp( vectorName, "ni2" ) ||
		0 == strcmp( vectorName, "no3" ) || 0 == strcmp( vectorName, "ni3" ) ||
		0 == strcmp( vectorName, "no4" ) || 0 == strcmp( vectorName, "ni4" ) ||
		0 == strcmp( vectorName, "no5" ) || 0 == strcmp( vectorName, "ni5" ) ||
		0 == strcmp( vectorName, "no6" ) || 0 == strcmp( vectorName, "ni6" ) ||
		0 == strcmp( vectorName, "no7" ) || 0 == strcmp( vectorName, "ni7" ) ||
		0 == strcmp( vectorName, "no8" ) || 0 == strcmp( vectorName, "ni8" ) ||
		0 == strcmp( vectorName, "no9" ) || 0 == strcmp( vectorName, "ni9" ) )
	{
		return true;
	}

	return false;
}

//=========================================================================================
MotherVector::MotherVector( const char* vectorName )
{
	sigInfo = 0;
	if( vectorMap )
		vectorMap->Lookup( vectorName, &sigInfo );
}

//=========================================================================================
/*virtual*/ MotherVector::~MotherVector( void )
{
}

//=========================================================================================
/*virtual*/ Utilities::List::Item* MotherVector::MakeCopy( void ) const
{
	if( sigInfo )
		return new MotherVector( sigInfo->vectorName );
	return 0;
}

//=========================================================================================
/*virtual*/ Vector* MotherVector::MakeBar( ScalarAlgebra::Scalar& sign ) const
{
	return 0;
}

//=========================================================================================
/*virtual*/ double MotherVector::InnerProduct( const Vector& right ) const
{
	if( !sigInfo )
		return 0.0;

	if( 0 == strcmp( sigInfo->nonOrthoVectorName, right.Name() ) )
		return sigInfo->innerProduct;

	return 0.0;
}

//=========================================================================================
/*virtual*/ const char* MotherVector::Name( void ) const
{
	if( !sigInfo )
		return "?";

	return sigInfo->vectorName;
}

//=========================================================================================
/*virtual*/ const char* MotherVector::LatexName( void ) const
{
	if( !sigInfo )
		return "\\mbox{?}";

	return sigInfo->latexName;
}

//=========================================================================================
/*virtual*/ bool MotherVector::IsComposite( void ) const
{
	return false;
}

//=========================================================================================
/*virtual*/ Utilities::List::SortComparison MotherVector::SortCompare( const Item* compareWithItem ) const
{
	Vector* vector = ( Vector* )compareWithItem;

	const char* thisVectorName = Name();
	const char* givenVectorName = vector->Name();

	char thisNumber[ 8 ];
	char givenNumber[ 8 ];

	ParseForNumber( thisNumber, sizeof( thisNumber ), thisVectorName );
	ParseForNumber( givenNumber, sizeof( givenNumber ), givenVectorName );

	int cmp = strcmp( thisNumber, givenNumber );

	if( cmp < 0 )
		return Utilities::List::SORT_COMPARE_LESS_THAN;
	else if( cmp > 0 )
		return Utilities::List::SORT_COMPARE_GREATER_THAN;

	return Vector::SortCompare( compareWithItem );
}

//=========================================================================================
/*static*/ void MotherVector::ParseForNumber( char* numberString, int numberStringSize, const char* vectorName )
{
	int i;
	for( i = 0; vectorName[i] != '\0'; i++ )
		if( isdigit( vectorName[i] ) )
			break;

	int j = 0;
	while( isdigit( vectorName[i] ) && j < numberStringSize - 1 )
		numberString[ j++ ] = vectorName[ i++ ];
	
	numberString[j] = '\0';
}

// MotherVector.cpp