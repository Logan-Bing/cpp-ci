#include <iostream>

int main()
{
	char *ptr = new char;

	(void)ptr;

	delete ptr;
	return 0;
}
