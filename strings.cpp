#include <iostream>
#include <cstring>

int main()
{

	const int size = 15;
	char name1[size];                 //array empty
	char name2[size] = "C++owboy";    //array initialized

	std::cout << "Howdy! I'm " << name2;
	std::cout << "! What's your name? " << std::endl;
	std::cin >> name1;
	std::cout << "Well, " << name1 << " , your name has ";
	std::cout << strlen(name1) << " letters and is stored " << std::endl;
	std::cout << "in a array of " << sizeof(name1) << " bytes." << std::endl;
	std::cout << "Your initial is " << name1[0] << std::endl;
	name2[3] = '\0';
	std::cout << "Here are the first 3 characters of my name: ";
	std::cout << name2 << std::endl;


	return 0;
}