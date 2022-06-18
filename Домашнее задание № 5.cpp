#include <iostream>
#include "Class.h"
#include <string>

using namespace std;


int main()
{	
	
	Snack *bounty = new Snack("Bounty");
	Snack *snikers = new Snack("Snikers");
	SnackSlot* slot = new SnackSlot(8);
	slot->AddSnack(bounty);
	slot->AddSnack(snikers);
	
	

	VendingMachine* machine = new VendingMachine(15);
	machine->AddSlot(slot);

	cout << machine->getEmptySlotsCount(*slot);
	delete machine;
	delete slot;
	delete bounty;
	delete snikers;

	return 0;
}
