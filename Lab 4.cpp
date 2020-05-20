

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double length, width, height;
	int NumberOfWindows, NumberOfDoors;
	int window = 15, door = 21;

	// Input for room dimensions and number of doors/windows from user
	cout << "What is the total length of the walls? " << endl;
	cout << "(combined lenght of the walls. Please include inches using a decimal point.) ";
	cin >> length;

	cout << "What is the height of the room? "; 
	cin >> height;

	cout << "How many doors are in the room? ";
	cin >> NumberOfDoors;

	cout << "How many windows are in the room? ";
	cin >> NumberOfWindows;


	//Calcualtions for square footage of the paint needed for doors and windows
	double DoorWindowSqFt = (15 * NumberOfWindows) + (21 * NumberOfDoors);
	cout << DoorWindowSqFt << " sq ft of doors and windows" <<endl;

	//Calcualtions for square footage of the walls
	double WallSqFt = (length*height);
	cout << WallSqFt << " sq ft of walls" <<endl;

	double TotalSqFt = (WallSqFt + DoorWindowSqFt);

	cout << TotalSqFt << " Total sq ft" <<endl;

	//Calculation for total amount of buckets needed
	double Buckets;
	Buckets =  TotalSqFt / 500;
	int TotalBuckets = (int)Buckets;
	TotalBuckets++;
	cout << TotalBuckets << " Buckets of paint needed.";



	



	



	
	return 0;
}

