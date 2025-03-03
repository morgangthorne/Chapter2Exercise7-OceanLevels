/*
Filename: Chapter2Exercise7-OceanLevels.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write a program that displays:
-The number of millimeters higher than the current level that the ocean's level will be in 5 years.
-The number of millimeters higher than the current level that the ocean's level will be in 7 years.
-The number of millimeters higher than the current level that the ocean's level will be in 10 years.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float currentoceanlevel = 0;
	float currentoceansrise = 1.5;
	float oceanlevel5years = currentoceansrise * 5;
	float oceanlevel7years = currentoceansrise * 7;
	float oceanlevel10years = currentoceansrise * 10;

	cout << "Every year the ocean level rises by 1.5 millimeters." << endl;
	cout << "Lets say that the oceans level is at 0 millimeters right now." << endl;
	cout << "Current ocean level: " << currentoceanlevel << "mm" << endl;
	cout << "The ocean's level will have risen by " << oceanlevel5years << "mm in 5 years." << endl;
	cout << "The ocean's level will have risen by " << oceanlevel7years << "mm in 7 years." << endl;
	cout << "The ocean's level will have risen by " << oceanlevel10years << "mm in 10 years." << endl;





}
