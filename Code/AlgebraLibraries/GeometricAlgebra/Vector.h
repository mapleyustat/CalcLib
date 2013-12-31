// Vector.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class GeometricAlgebra::Vector : public Utilities::List::Item
{
public:

	Vector( void );
	virtual ~Vector( void );

	virtual Item* MakeCopy( void ) const = 0;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const = 0;
	virtual double InnerProduct( const Vector& right ) const = 0;
	virtual const char* Name( void ) const = 0;
	virtual const char* LatexName( void ) const = 0;
	virtual bool IsComposite( void ) const;

	virtual Utilities::List::SortComparison SortCompare( const Item* compareWithItem ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e0 : public Vector
{
public:

	Vector_e0( void );
	virtual ~Vector_e0( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e1 : public Vector
{
public:

	Vector_e1( void );
	virtual ~Vector_e1( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e2 : public Vector
{
public:

	Vector_e2( void );
	virtual ~Vector_e2( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e3 : public Vector
{
public:

	Vector_e3( void );
	virtual ~Vector_e3( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e4 : public Vector
{
public:

	Vector_e4( void );
	virtual ~Vector_e4( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e5 : public Vector
{
public:

	Vector_e5( void );
	virtual ~Vector_e5( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e6 : public Vector
{
public:

	Vector_e6( void );
	virtual ~Vector_e6( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_no : public Vector
{
public:

	Vector_no( void );
	virtual ~Vector_no( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_ni : public Vector
{
public:

	Vector_ni( void );
	virtual ~Vector_ni( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e0_bar : public Vector
{
public:

	Vector_e0_bar( void );
	virtual ~Vector_e0_bar( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e1_bar : public Vector
{
public:

	Vector_e1_bar( void );
	virtual ~Vector_e1_bar( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e2_bar : public Vector
{
public:

	Vector_e2_bar( void );
	virtual ~Vector_e2_bar( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_e3_bar : public Vector
{
public:

	Vector_e3_bar( void );
	virtual ~Vector_e3_bar( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_no_bar : public Vector
{
public:

	Vector_no_bar( void );
	virtual ~Vector_no_bar( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

//=========================================================================================
class GeometricAlgebra::Vector_ni_bar : public Vector
{
public:

	Vector_ni_bar( void );
	virtual ~Vector_ni_bar( void );

	virtual Item* MakeCopy( void ) const OVERRIDE;
	virtual Vector* MakeBar( ScalarAlgebra::Scalar& sign ) const OVERRIDE;
	virtual double InnerProduct( const Vector& right ) const OVERRIDE;
	virtual const char* Name( void ) const OVERRIDE;
	virtual const char* LatexName( void ) const OVERRIDE;
};

// Vector.h
