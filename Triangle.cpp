// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"

#include "string"
using namespace std;


void createNumTriangle( string  input)
{
	int len = input.size();

	int middle = len / 2;
		
	for (int i = 1; i <=len; i++)
	{
		
		for (int j = len-1; j >= i; j--)
		
			cout << " ";
		for (int k=1;k<=i;k++)
		{
			
			cout << input[middle];
			
		}
			
		

		cout << endl;
	}
}
int main()
{
	createNumTriangle("welcome");
	system("pause>0");
}

