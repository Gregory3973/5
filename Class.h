#pragma once
#include <string>
using namespace std;


class Snack
{
public:
	
	Snack(string snackName);
	~Snack() = default;

	string getsnackName() const;
	void setsnackName(char* value);

protected:
	string _snackName;
	
};


class SnackSlot
{
public:
	
	SnackSlot(short snackCount);
	~SnackSlot() = default;
	
	SnackSlot& operator ++();
	SnackSlot& operator --();

	short getsnackCount() const;
	void setsnackCount(short *value);

	void AddSnack(Snack *snack);
protected:
	short _snackCount;

};

class VendingMachine
{
public:

	VendingMachine& operator ++();
	VendingMachine& operator --();

	VendingMachine(short slotCount);
	~VendingMachine() = default;

	short getSlotCount() const;
	void setSlotCount(short value);

	void AddSlot(SnackSlot* slot);
	short getEmptySlotsCount(SnackSlot &s);

protected:
	short _slotCount;
	short _i = 0;
	
};
