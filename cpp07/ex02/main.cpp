#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    const Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    try
    {
        numbers[2] = 12;
        std::cout << numbers.size() <<  std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " 1"<< '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " 2" << '\n';
    }
    delete [] mirror;
	{
		Array<int> g(0);
		
		try{
			std::cout << g[1] << std::endl;
		}
		catch(std::exception &e)	{
			std::cout << e.what() << " 3" << std::endl;
		}
		Array<char> s(10);

		for (int i = 65, j = 0; i < 75; i++)	{
			s[j++] = i;
		}
		Array<char> t(s);
		try{
			std::cout << s[5] << std::endl;
			std::cout << t[0] << std::endl;
			std::cout << t[1] << std::endl;
			std::cout << s[-256] << std::endl;
		}
		catch (std::exception &e)	{
			std::cout << e.what() << " 4" << std::endl;
		}
	}
}