#include <string>
#include "Class.h"
using namespace std;

 int count = 0;

Snack::Snack(string snackName)
{
	_snackName = snackName;
}

string Snack::getsnackName() const
{
	return _snackName;
}

void Snack::setsnackName(char* value)
{
	_snackName = *value;
}



SnackSlot::SnackSlot(short snackcount)
{
	_snackCount = snackcount;
}

SnackSlot& SnackSlot :: operator++ ()
{
	_snackCount++;
	return *this;
}

SnackSlot& SnackSlot :: operator-- ()
{
	_snackCount--;
	return *this;
}

short SnackSlot::getsnackCount() const
{
	return _snackCount;
}
void SnackSlot::setsnackCount(short* value)
{
	_snackCount = *value;
}


void SnackSlot::AddSnack(Snack* snack)
{
	--_snackCount;
}


VendingMachine::VendingMachine(short slotCount)
{
	_slotCount = slotCount;
}

VendingMachine& VendingMachine :: operator++()
{
	_slotCount++;

	return *this;
}

VendingMachine& VendingMachine :: operator--()
{
	_slotCount--;
	return *this;
}

void VendingMachine::AddSlot(SnackSlot *slot)
{
	++ _slotCount;
		
}

short VendingMachine::getSlotCount() const
{
	return _slotCount;

}

short VendingMachine::getEmptySlotsCount(SnackSlot & s)
{
	
	return _i = s.getsnackCount();
}

void  VendingMachine::setSlotCount(short value)
{
	_slotCount = value;
}

