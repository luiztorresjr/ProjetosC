//calculator.h

class Calculator{
	public:												  	//external code can call these methods
		Calculato();								      	//construtor
		~Calculator();									  	//destructor
		
		int add(int num1, int num2); 					  	//method
		float divide(float numerator, float denominator); 	//method
		
		bool getAllowNegatives();						  	//method	
		void getAllowNegatives(bool inValue);			  	//method
		
	protected:												//external code can't acess these members
		bool fAllowNegatives;								//data member
		
};
