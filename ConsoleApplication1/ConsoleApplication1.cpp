#include <iostream>
#include <cstdlib>

using namespace std;

// Global Game Variables
int visiableHeight = 10;
int lanes = 3;
int defaultPlayerLane = 1;

int obstaclesGenerator() {
	int numOfObstacles = rand() % lanes + 1;
    return numOfObstacles;
}

void printGame() {
	for (int h = 0; h < visiableHeight; h++)
	{
		int numOfObs = obstaclesGenerator();

		int obsLocations[3];

		std::srand(std::time(0));

		for (int i = 0; i < 3; ++i) {
			obsLocations[i] = std::rand() % 2;
		}

		for (int i = 0; i < lanes; i++)
		{
			if (h % 2 == 0) {
				if (obsLocations[i] == 1) {
					cout << "|XX|";
				}
				else {
					cout << "|  |";
				}
			}
			else {
				cout << "|  |";
			}
		}
		cout << "\n";
	}
}

int main()
{
    printGame();
	cout << "\n\n\n";
	system("PAUSE");
}