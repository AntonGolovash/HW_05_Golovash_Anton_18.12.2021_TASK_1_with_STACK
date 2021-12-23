#include <iostream>
#include <sstream>
#include <string>
#include <ostream>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "************************** START OF TASK 1 *************************" << endl;
	cout << endl;
	string str = "u(e{f[n]f}i}]e;";
	bool stringIsCorrect = NULL;
	Stack<string> stack1;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			stack1.Push("(");
		if (str[i] == ')')
			stack1.Push(")");

		if (str[i] == '{')
			stack1.Push("{");
		if (str[i] == '}')
			stack1.Push("}");

		if (str[i] == '[')
			stack1.Push("[");
		if (str[i] == ']')
			stack1.Push("]");
	}
	cout << stack1 << endl;

	(stack1.GetSize() % 2 == 0) ? stringIsCorrect = true : stringIsCorrect = false;

	if (stringIsCorrect)
	{
		cout << "The string is correct" << endl;
	}
	if (!stringIsCorrect)
	{
		cout << "The string is NOT correct" << endl;
	}

	cout << endl;
	cout << "************************** END OF TASK 1 *************************" << endl;
}