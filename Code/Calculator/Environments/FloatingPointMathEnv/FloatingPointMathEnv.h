// FloatingPointMathEnv.h

//=========================================================================================
class CalcLib::FloatingPointMathEnvironment : public Environment
{
	DECLARE_CALCLIB_CLASS( FloatingPointMathEnvironment );

public:

	FloatingPointMathEnvironment( void );
	virtual ~FloatingPointMathEnvironment( void );
	
	virtual void PrintEnvironmentInfo( void ) OVERRIDE;
	virtual Number* CreateNumber( void ) OVERRIDE;
	virtual FunctionEvaluator* CreateFunction( const char* functionName ) OVERRIDE;
	virtual Evaluator* CreateVariable( const char* variableName ) OVERRIDE;
	virtual Evaluator* CreateBinaryOperator( const char* operatorName, Evaluator* leftOperand, Evaluator* rightOperand, bool& isBinaryOperationEvaluator ) OVERRIDE;
};

// FloatingPointMathEnv.h
