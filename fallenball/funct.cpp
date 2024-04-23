#include <iostream>
#include "constfallenball.h"

double getInitialHeight()
{
	std::cout << "Enter the initial height of the tower in meters: ";
	double initialHeight;
	std::cin >> initialHeight;
	return initialHeight;
}

// ���������� ���������� �� ����� ����� "..." ������ �������
double calculateHeight(double initialHeight, int seconds)
{
	// ���������� �������: [ s = u * t + (a * t^2) / 2 ], ��� u(��������� ��������) = 0
	double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
	double currentHeight = initialHeight - distanceFallen;

	return currentHeight;
}

// ������� ������, �� ������� ��������� ����� ����� ������ ������� ������� 
void printHeight(double height, int seconds)
{
	if (height > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
	double height = calculateHeight(initialHeight, seconds);
	printHeight(height, seconds);
}
