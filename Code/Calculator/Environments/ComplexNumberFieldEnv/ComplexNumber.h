// ComplexNumber.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class CalcLib::ComplexNumber : public Number
{
	DECLARE_CALCLIB_CLASS( ComplexNumber );

public:

	ComplexNumber( double realPart, double imaginaryPart );
	virtual ~ComplexNumber( void );
	
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
	virtual bool AssignAdditiveIdentity( Environment& environment ) OVERRIDE;
	virtual bool AssignMultiplicativeIdentity( Environment& environment ) OVERRIDE;
	virtual bool IsAdditiveIdentity( bool& isAdditiveIdentity, Environment& environment ) const OVERRIDE;
	virtual bool IsMultiplicativeIdentity( bool& isMultiplicativeIdentity, Environment& environment ) const OVERRIDE;
	virtual bool CompareWith( const Number* number, Comparison& comparison, Environment& environment ) const OVERRIDE;

private:

	bool VerifyArguments( const ComplexNumber*& leftNumber, const ComplexNumber*& rightNumber, const Number* left, const Number* right, Environment& environment );

	double realPart;
	double imaginaryPart;
};

// ComplexNumber.h
