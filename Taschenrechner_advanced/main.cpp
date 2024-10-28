#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


double parser_term(istringstream& input)
{
	double result;
	char op;

	input >> result;

	while (input >> op)
	{
		if (op == '*')
		{
			double number;
			input >> number;
			result *= number;
		}
		else if(op == '/')
		{
			double number;
			input >> number;
			result /= number;

		}
		else
		{
			input.putback(op);
			break;
		}
	}

	return result;
}


double parser_simp(istringstream & input)
{
	double result;
	char op;
	
	result = parser_term(input);

	while (input >> op)
	{
		if (op == '+')
		{
			double number;
			number = parser_term(input);
			result += number;
		}
		else if (op == '-')
		{
			double number;
			number = parser_term(input);
			result -= number;
		}
	}
		
	return result;
}




int main()
{
	double result = 0.0;
	string test = "14+16/2*5-1";

	istringstream input(test);

	result = parser_simp(input);

	cout << result << endl;





	


	return 0;

}

