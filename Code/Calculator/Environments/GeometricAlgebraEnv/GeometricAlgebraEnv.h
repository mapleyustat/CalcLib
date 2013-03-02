// GeometricAlgebraEnv.h

/*
 * Copyright (C) 2013 Spencer T. Parkin
 *
 * This software has been released under the MIT License.
 * See the "License.txt" file in the project root directory
 * for more information about this license.
 *
 */

//=========================================================================================
class CalcLib::GeometricAlgebraEnvironment : public Environment
{
	DECLARE_CALCLIB_CLASS( GeometricAlgebraEnvironment );

public:
	
	GeometricAlgebraEnvironment( void );
	virtual ~GeometricAlgebraEnvironment( void );
	
	virtual void PrintEnvironmentInfo( void ) OVERRIDE;
	virtual Number* CreateNumber( void ) OVERRIDE;
	virtual FunctionEvaluator* CreateFunction( const char* functionName ) OVERRIDE;
	virtual Evaluator* CreateVariable( const char* variableName ) OVERRIDE;
	virtual Evaluator* CreateBinaryOperator( const char* operatorName, Evaluator* leftOperand, Evaluator* rightOperand, bool& isBinaryOperationEvaluator ) OVERRIDE;
	virtual Evaluator* CreateUnaryOperator( const char* operatorName, Evaluator* operand, bool& isUnaryOperationEvaluator ) OVERRIDE;

	enum DisplayMode
	{
		DISPLAY_AS_SUM_OF_BLADES,
		DISPLAY_AS_SUM_OF_VERSORS,
	};

	DisplayMode displayMode;
};

// GeometricAlgebraEnv.h
