#include  "Mage.h"
Mage::Mage()
{
	
}
void Mage::setName(string dado)
{
	Name = dado;
	status[0] = Name;
}
string Mage::getName()
{
	return Name;
}
/*
int Mage::getAtack()
{
	return AtackW;
}

int Mage::getDefense()
{
	return Defense;
}

int Mage::getHPpoints()
{
	return HPpoints;
}



*/
