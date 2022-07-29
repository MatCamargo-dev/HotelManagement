#include <iostream>
#include "HotelChoices.h"

using namespace std;

int main() {
	HotelChoices h1;
	int choice;
	

	h1.setDatas();

	m:
	cout << "\n\t\t\t Please select from the menu options ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pasta";
	cout << "\n3) Burger";
	cout << "\n4) Noodles";
	cout << "\n5) Shake";
	cout << "\n6) Chiken-Roll";
	cout << "\n7) Information regarding sales and collection ";
	cout << "\n8) Exit";

	cout << "\n\n Please Enter your choice ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			h1.roomsMessage();
			break;
		case 2:
			h1.pastaMessage();
			break;
		case 3:
			h1.burgerMessage();
			break;
		case 4:
			h1.noodlesMessage();
			break;
		case 5:
			h1.shakeMessage();
			break;
		case 6:
			h1.chikenMessage();
			break;
		case 7:
			h1.informationMessage();
			break;
		case 8:
			exit(0);
		default:
			cout << "\n Please select the numbers mentioned above!";
			
	}
	goto m;
}