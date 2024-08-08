#include <iostream>
#include <string>

int main()
{
	std::string strs[2], result = "";
	int num = 0;
	std::cin >> strs[0] >> strs[1];

	for(int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < strs[i].size(); ++j)
		{
			if (strs[i][j] < '9')
				result += strs[i][j];
		}
		num += std::stoi(result);
		result = "";
	}
	std::cout << num;
}