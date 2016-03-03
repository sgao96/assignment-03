#include<iostream>
#include "keyboardKey.h"

template <typename T>
void Swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

template <typename P>
P AskForInput()
{
	P xsub;
	P ysub;

	std::cout << "Please enter two " << typeid(xsub).name() << "."
		 << std::endl;
	std::cin >> xsub;
	std::cin >> ysub;

	std::cout << xsub << " " << ysub << std::endl;

	Swap(xsub, ysub);

	std::cout << xsub << " " << ysub << std::endl;

	return xsub;
}




int main()
{
	//AskForInput<int>();

	//AskForInput<char>();

	//system("PAUSE");
	
	keyboardKey<int> number;
	
	number.printToScreen();

	system("PAUSE");

	keyboardKey<char> letter;
	letter.printToScreen();

	system("PAUSE");

	return 0;
}
