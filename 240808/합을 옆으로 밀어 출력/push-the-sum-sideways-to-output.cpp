#include <iostream>
#include <string>

int main()
{
	std::string result;
	char ch;
	int n, in, sum = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> in;
		sum += in;
	}

	result = std::to_string(sum);
	ch = result[0];
	result.erase(0, 1);
	std::cout << result << ch;
}