#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> cards = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	std::random_shuffle(cards.begin(), cards.end());
	for (int card : cards)
	{
		std::cout << card << std::endl;
	}
}