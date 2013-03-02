// FractionNumber.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class CalcLib::FractionNumber : public Number
{
	DECLARE_CALCLIB_CLASS( FractionNumber );

public:

	FractionNumber( void );
	virtual ~FractionNumber( void );

	virtual Number* CreateCopy( Environment& environment ) const OVERRIDE;

	virtual bool Print( char* buffer, int bufferSize, bool printLatex, Environment& environment ) const OVERRIDE;
	virtual bool AssignFrom( const char* numberString, Environment& environment ) OVERRIDE;
	virtual bool AssignFrom( const Number* number, Environment& environment ) OVERRIDE;
	virtual bool AssignFrom( double number, Environment& environment ) OVERRIDE;
	virtual bool AssignTo( double& number, Environment& environment )  const OVERRIDE;
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

private:

	// The denominator will always be positive.
	// We always want to maintain here the fraction in lowest terms.
	long numerator, denominator;

	void ReduceFraction( void );
	static void UnifyFractions( const FractionNumber* left, const FractionNumber* right, long& leastCommonDenominator, long& leftNumerator, long& rightNumerator );
	static long LeastCommonMultiple( long a, long b );
	static long GreatestCommonDivisor( long a, long b );
};

// FractionNumber.h
