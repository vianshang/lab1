#include <iostream>
using namespace std;

int main()
{
	int number;
	int a;
	std::cout << "Enter a number:";
	cin >> number;
	cout << "Sequence: "<<number<<" ";
	
	while (number != 1){

		a = number % 2;
		if (a == 1){
			number = number * 3 + 1;
			std::cout << number<<" ";
		}
		if (a == 0){
			number = number / 2;
			std::cout << number<<" ";
		}
	}
	
	return 0;
}
