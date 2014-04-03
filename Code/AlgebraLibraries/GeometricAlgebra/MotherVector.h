// MotherVector.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class GeometricAlgebra::MotherVector : public Vector
{
public:

	MotherVector( const char* vectorName );
	virtual ~MotherVector( void );

	virtual Item* MakeCopy( void ) const override;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const override;
	virtual double InnerProduct( const Vector& right ) const override;
	virtual const char* Name( void ) const override;
	virtual const char* LatexName( void ) const override;
	virtual bool IsComposite( void ) const override;
	virtual Utilities::List::SortComparison SortCompare( const Item* compareWithItem ) const override;

	static void Setup( void );
	static void Shutdown( void );

	static bool IsMotherVector( const char* vectorName );

private:

	class SigInfo
	{
	public:
		SigInfo( const char* vectorName, const char* latexname, const char* nonOrthoVectorName, double innerProduct );

		char vectorName[ 32 ];
		char latexName[ 128 ];
		char nonOrthoVectorName[ 32 ];
		double innerProduct;
	};

	static Utilities::Map< SigInfo* >* vectorMap;

	SigInfo* sigInfo;

	static void ParseForNumber( char* numberString, int numberStringSize, const char* vectorName );
};

// MotherVector.h
