// FloatNumber.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

#pragma once

//=========================================================================================
class CalcLib::FloatingPointNumber : public Number
{
	DECLARE_CALCLIB_CLASS( FloatingPointNumber );

public:

	FloatingPointNumber( void );
	virtual ~FloatingPointNumber( void );

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

	// Let this be accessible.
	double value;
};

// FloatNumber.h
