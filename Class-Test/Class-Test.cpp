// Class-Test.cpp : Defines the entry point for the console application.
//

#include <iostream>
class Part
{
private:
	int i;
	char s;

public:
	Part();
	Part(int j);
	Part(int j, char g);
	int getData();	
	char getData1();
	
};
Part::Part() :i(4), s('a')
{
	;
}

Part::Part(int j, char g) : i(66), s('g')
{}

Part::Part(int j) :i(j)
{
	;
}

int Part::getData()
{
	return i;
}

char Part::getData1()
{
	return s;
}


int main()
{
	Part p1;
	Part p2(5);
	Part p3(6, 'D');
	std::cout << p1.getData() << std::endl;
	std::cout << p1.getData1() << std::endl;

	std::cout << p2.getData() << std::endl; 
	std::cout << p3.getData() << std::endl;
	std::cout << p3.getData1() << std::endl;
	system("pause");
    return 0;
}

