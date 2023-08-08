#include <iostream>

int main() {
	int raccoon;
	int lion;

	std::cout << "Enter amount of lions: ";
	std::cin >> lion;

	raccoon = 21 * lion;
	std::cout << "In order to have a chance against " << lion << " lions, " << raccoon << " raccoons will have to join forces or else they will lose.";

}