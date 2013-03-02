// ComplexNumberFieldEnv.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class CalcLib::ComplexNumberFieldEnvironment : public Environment
{
	DECLARE_CALCLIB_CLASS( ComplexNumberFieldEnvironment );

public:

	ComplexNumberFieldEnvironment( void );
	virtual ~ComplexNumberFieldEnvironment( void );

	virtual void PrintEnvironmentInfo( void ) OVERRIDE;
	virtual Number* CreateNumber( void ) OVERRIDE;
	virtual FunctionEvaluator* CreateFunction( const char* functionName ) OVERRIDE;
	virtual Evaluator* CreateVariable( const char* variableName ) OVERRIDE;
};

// ComplexNumberFieldEnv.h
