// TEST.cpp : Defines the entry point for the console application.
//
#include <iostream>

// using pass-by-pointer 
//void function(int* n)
//{
//	*n = 5; 
//}
//
//
//int main()
//{
//	int n = 0; 
//
//	function(&n); 
//	std::cout << "n = " << n << std::endl; 
//	
//	getchar(); 
//    return 0;
//}

// using pass-by-reference
void function(int& n)
{
	n = 5;
}


int main()
{
	int n = 0;

	function(n);
	std::cout << "n = " << n << std::endl;

	getchar();
	return 0;
}
