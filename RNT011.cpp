/*
    LINK:   https://www.codechef.com/DECQ2021/problems/RNT011
*/

#include <iostream>
#include <stack>
using namespace std;

/* function to check if brackets are balanced */
bool areBracketsBalanced(string str)
{
	stack<char> str;
	char x;

	/* Traversing the Expression */
	for (int i = 0; i < expr.length(); i++)
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			/* Push the element in the stack */
			str.push(str[i]);
			continue;
		}

		/* IF current current character is not opening bracket, then it must be closing. So stack cannot be empty at this point. */
		if (str.empty())
			return false;

		switch (str[i])
		{
		case ')':

			/* Store the top element in a */
			x = str.top();
			str.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			/* Store the top element in b */
			x = str.top();
			str.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			/* Store the top element in c */
			x = str.top();
			str.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	/* Check Empty Stack */
	return (str.empty());
}

int main()
{
	string str;

	if (areBracketsBalanced(str))
		cout << "YES\n";

	else
		cout << "NO\n";
	return 0;
}
