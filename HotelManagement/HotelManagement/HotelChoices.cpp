#include <string>
#include <iostream>
using namespace std;

#include "HotelChoices.h"

HotelChoices::HotelChoices() {
}

HotelChoices::~HotelChoices() {
}

int quant;


int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchiken = 0;

int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schiken = 0;

int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chiken = 0;


void HotelChoices::setDatas() {
	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms available: ";
	cin >> Qrooms;
	cout << "\n Quantity of pasta: ";
	cin >> Qpasta;
	cout << "\n Quantity of burger: ";
	cin >> Qburger;
	cout << "\n Quantity of noodles: ";
	cin >> Qnoodles;
	cout << "\n Quantity of shake: ";
	cin >> Qshake;
	cout << "\n Quantity of chiken-roll: ";
	cin >> Qchiken;

}

void HotelChoices::roomsMessage() {
	cout << "\n\n Enter the number of rooms you want: ";

	cin >> quant;
	if (Qrooms - Srooms >= quant) {
		Srooms = Srooms + quant;
		Total_rooms = Total_rooms + quant * 1200;
		cout << "\n\n\t\t" << quant << "rooms have been alloted to you";
	}
	else {
		cout << "\n\tOnly " << Qrooms - Srooms << " Rooms remaining in hotel ";
	}
}

void HotelChoices::pastaMessage() {
	cout << "\n\n Enter Pasta Quantity: ";
	cin >> quant;
	if (Qpasta - Spasta >= quant) {
		Spasta = Spasta + quant;
		Total_pasta = Total_pasta + quant * 250;
		cout << "\n\n\t\t" << quant << " pasta is the order! ";
	}
	else {
		cout << "\n\tOnly" << Qpasta - Spasta << "Pasta remaining in hotel ";
	}
}

void HotelChoices::burgerMessage() {
	cout << "\n\n Enter Burger Quantity: ";
	cin >> quant;
	if (Qburger - Sburger >= quant) {
		Sburger = Sburger + quant;
		Total_burger = Total_burger + quant * 250;
		cout << "\n\n\t\t" << quant << " burger is the order! ";
	}
	else {
		cout << "\n\tOnly" << Qpasta - Spasta << "Burger remaining in hotel ";
	}
}

void HotelChoices::noodlesMessage() {
	cout << "\n\n Enter Noodles Quantity: ";
	cin >> quant;
	if (Qnoodles - Snoodles >= quant) {
		Snoodles = Snoodles + quant;
		Total_noodles = Total_noodles + quant * 250;
		cout << "\n\n\t\t" << quant << " noodles is the order! ";
	}
	else {
		cout << "\n\tOnly" << Qnoodles - Snoodles << "Noodles remaining in hotel ";
	}
}

void HotelChoices::shakeMessage() {
	cout << "\n\n Enter Shake Quantity: ";
	cin >> quant;
	if (Qshake - Sshake >= quant) {
		Sshake = Sshake + quant;
		Total_shake = Total_shake + quant * 250;
		cout << "\n\n\t\t" << quant << " shake is the order! ";
	}
	else {
		cout << "\n\tOnly" << Qshake - Sshake << "Shake remaining in hotel ";
	}
}

void HotelChoices::chikenMessage() {
	cout << "\n\n Enter Chiken Quantity: ";
	cin >> quant;
	if (Qchiken - Schiken >= quant) {
		Schiken = Schiken + quant;
		Total_chiken = Total_chiken + quant * 250;
		cout << "\n\n\t\t" << quant << " chiken-roll is the order! ";
	}
	else {
		cout << "\n\tOnly" << Qchiken - Schiken << "Chiken-roll remaining in hotel ";
	}
}

void HotelChoices::informationMessage() {
	cout << "\n\t\tDetails of sales collections ";
	cout << "\n\n Number of rooms we had: " << Qrooms;
	cout << "\n\n Number of rooms we gave for rent " << Srooms;
	cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
	cout << "\n\n Total rooms collection for the day: " << Total_rooms;

	cout << "\n\n Number of rooms we had: " << Qpasta;
	cout << "\n\n Number of pasta we gave for rent " << Spasta;
	cout << "\n\n Remaining pasta: " << Qpasta - Spasta;
	cout << "\n\n Total pasta collection for the day: " << Total_pasta;

	cout << "\n\n Number of burgers we had: " << Qburger;
	cout << "\n\n Number of burgers we gave for rent " << Sburger;
	cout << "\n\n Remaining burgers: " << Qburger - Sburger;
	cout << "\n\n Total burgers collection for the day: " << Total_burger;

	cout << "\n\n Number of noodles we had: " << Qnoodles;
	cout << "\n\n Number of noodles we gave for rent " << Snoodles;
	cout << "\n\n Remaining noodles: " << Qnoodles - Snoodles;
	cout << "\n\n Total noodles collection for the day: " << Total_noodles;

	cout << "\n\n Number of shakes we had: " << Qshake;
	cout << "\n\n Number of shakes we gave for rent " << Sshake;
	cout << "\n\n Remaining shakes: " << Qshake - Sshake;
	cout << "\n\n Total shakes collection for the day: " << Total_shake;

	cout << "\n\n Number of chiken-rolls we had: " << Qchiken;
	cout << "\n\n Number of chiken-rolls we gave for rent " << Schiken;
	cout << "\n\n Remaining chiken-rolls: " << Qchiken - Schiken;
	cout << "\n\n Total chiken-rolls collection for the day: " << Total_chiken;
}