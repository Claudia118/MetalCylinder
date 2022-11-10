/**********************************
*Programmer: Claudia Ortiz
*Email: cortiz118@cnm.edu
*Date: 8June2021
*Program: Weight of a Metal cylinder 
*Purpose: Determine the volume  and weight of the cylinder
**********************************/

#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
	float diameter;
	float radius;
	float totalSum;
	float radiusSquare;
	float length;
	const float Pi = 3.141592;
	float volume;
	float weight;
	string metals;
	char userChoice = 'n';
	
		cout << "Claudia Ortiz\n";
		cout << " Weight of Metal Cylinder\n";
		cout << "Determine the volume  and weight of the cylinder\n";

		do
		{
		//Explaining user what program does
		cout << "\nSelect a metal and enter the dimensions for a cylinder.";
		cout << "\nThe program will calculate the volume and weight.";

		////Printing list of metals 
		cout << "\n(Al) Aluminum"
			<< "\n(Au) Gold"
			<< "\n(Pb) Lead"
			<< "\n(Ag) Silver";

		cout << "\nSelect a metal by using the two letter abbreviation(example Al). ";
		getline(cin, metals);

		//Asking user for length input
		cout << "Please enter the length of cylinder:  ";
		cin >> length;
		cin.ignore();

		//Asking user for diameter input
		cout << "Please enter the diameter of the cylinder: ";
		cin >> diameter;
		cin.ignore();

		//To find volume
		radius = diameter / 2;
		radiusSquare = radius * radius;
		totalSum = radiusSquare * length;
		volume = totalSum * Pi;
		
		
			if (metals == "Al")
			{
				//to get weight
				float Al = 0.10;
				weight = Al * volume;
				cout.precision(4);

				//report to the customer 
				cout << "\nThe metal you selected: " << metals << endl;
				cout << "The length you entered: " << length << " inches" << endl;
				cout << "The diameter you entered: "<< diameter << " inches" << endl;
				cout << "\nThe Volume is: "<< volume << " cubic inches"<<endl;
				cout <<"The weight is: " << weight << " lbs"<<endl;
			}
			else if (metals == "Au")
			{
				//to get weight
				float Au = 0.69;
				weight = Au * volume;
				cout.precision(4);
				
				//report to the customer 
				cout << "\nThe metal you selected: " << metals << endl;
				cout << "The length you entered: " << length << " inches" << endl;
				cout << "The diameter you entered: " << diameter << " inches" << endl;
				cout << "The Volume is: " << volume <<" cubic inches"<<endl;
				cout<<"The weight is: " << weight << " lbs"<<endl;
			}
			else if (metals == "Pb")
			{
				//to get weight
				float Pb = 0.41;
				weight = Pb * volume;
				cout.precision(4);

				//report to the customer 
				cout << "\nThe metal you selected: " << metals << endl;
				cout << "The length you entered: " << length << " inches" << endl;
				cout << "The diameter you entered: " << diameter << " inches" << endl;
				cout << "The Volume is: " << volume <<" cubic inches"<<endl;
				cout<<"The weight is: " << weight << " lbs"<<endl;

			}
			else if (metals == "Ag")
			{
				//to get weight
				float Ag = 0.38;
				weight = Ag * volume;
				cout.precision(4);

				//report to the customer 
				cout << "\nThe metal you selected: " << metals << endl;
				cout << "The length you entered: " << length << " inches" << endl;
				cout << "The diameter you entered: " << diameter << " inches" << endl;
				cout << "The Volume is: " << volume <<" cubic inches"<<endl;
				cout<<" The weight is: " << weight << " lbs"<<endl;
			}
			cout << "\nWould you like to perform another calculation (y/n): ";
			cin >> userChoice;
			cin.ignore();

		} while (userChoice == 'y' || userChoice == 'Y');

		//Goodbye message
		cout << "\nThanks for using the C++ program to calculate the weight and volume of a cylinder\n";
		cout << "Goodbye\n";

		return 0;

}