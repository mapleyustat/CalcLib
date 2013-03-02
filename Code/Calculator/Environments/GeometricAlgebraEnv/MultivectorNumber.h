// MultivectorNumber.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class CalcLib::MultivectorNumber : public Number
{
	DECLARE_CALCLIB_CLASS( MultivectorNumber );

public:

	MultivectorNumber( void );
	MultivectorNumber( const GeometricAlgebra::Vector& vector );
	MultivectorNumber( const GeometricAlgebra::Blade& blade );
	MultivectorNumber( const GeometricAlgebra::SumOfBlades& multivector );
	virtual ~MultivectorNumber( void );

	virtual Number* CreateCopy( Environment& environment ) const OVERRIDE;

	virtual bool Print( char* buffer, int bufferSize, bool printLatex, Environment& environment ) const OVERRIDE;
	virtual bool AssignFrom( const char* numberString, Environment& environment ) OVERRIDE;
	virtual bool AssignFrom( const Number* number, Environment& environment ) OVERRIDE;
	virtual bool AssignFrom( double number, Environment& environment ) OVERRIDE;
	virtual bool AssignFrom( const GeometricAlgebra::Scalar& scalar, Environment& environment );
	virtual bool AssignFrom( const GeometricAlgebra::SumOfBlades& sumOfBlades, Environment& environment );
	virtual bool AssignTo( double& number, Environment& environment )  const OVERRIDE;
	virtual bool AssignTo( GeometricAlgebra::Blade& blade, Environment& environment )const;
	virtual bool AssignTo( GeometricAlgebra::SumOfBlades& sumOfBlades, Environment& environment ) const;
	virtual bool AssignSum( const Number* left, const Number* right, Environment& environment ) OVERRIDE;
	virtual bool AssignDifference( const Number* left, const Number* right, Environment& environment ) OVERRIDE;
	virtual bool AssignProduct( const Number* left, const Number* right, Environment& environment ) OVERRIDE;
	virtual bool AssignQuotient( const Number* left, const Number* right, Environment& environment ) OVERRIDE;
	virtual bool AssignAdditiveInverse( const Number* number, Environment& environment ) OVERRIDE;
	virtual bool AssignMultilicativeInverse( const Number* number, Environment& environment ) OVERRIDE;
	virtual bool AssignAdditiveIdentity( Environment& environment ) OVERRIDE;
	virtual bool AssignMultiplicativeIdentity( Environment& environment ) OVERRIDE;
	virtual bool AssignInnerProduct( const Number* left, const Number* right, Environment& environment ) OVERRIDE;
	virtual bool AssignOuterProduct( const Number* left, const Number* right, Environment& environment ) OVERRIDE;
	virtual bool IsAdditiveIdentity( bool& isAdditiveIdentity, Environment& environment ) const OVERRIDE;
	virtual bool IsMultiplicativeIdentity( bool& isMultiplicativeIdentity, Environment& environment ) const OVERRIDE;
	virtual bool CompareWith( const Number* number, Comparison& comparison, Environment& environment ) const OVERRIDE;
	virtual bool AssignDerivative( const Number* number, const char* variableName, Environment& environment ) OVERRIDE;
	virtual bool AssignAntiDerivative( const Number* number, const char* variableName, Environment& environment ) OVERRIDE;

	bool Reverse( Environment& environment );
	bool Bar( Environment& environment );

	bool CopyOperandsIfNeeded( const Number* left, const Number* right,
									const MultivectorNumber*& leftMultivectorNumber,
									const MultivectorNumber*& rightMultivectorNumber,
									Environment& environment ) const;

	

private:

	GeometricAlgebra::SumOfBlades multivector;
};

// MultivectorNumber.h
