// FractionEnv.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class CalcLib::FractionEnvironment : public Environment
{
	DECLARE_CALCLIB_CLASS( FractionEnvironment );

public:

	FractionEnvironment( void );
	virtual ~FractionEnvironment( void );

	virtual void PrintEnvironmentInfo( void ) OVERRIDE;
	virtual Number* CreateNumber( void ) OVERRIDE;
	virtual FunctionEvaluator* CreateFunction( const char* functionName ) OVERRIDE;
	virtual Evaluator* CreateVariable( const char* variableName ) OVERRIDE;
};

// FractionEnv.h
