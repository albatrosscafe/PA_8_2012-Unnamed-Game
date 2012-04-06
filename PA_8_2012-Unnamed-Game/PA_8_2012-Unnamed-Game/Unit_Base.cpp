#include "Unit_Base.h"

Unit_Base::Unit_Base()
{
	this->hp = 0;
	this->isAlive = false;
	this->movement = 0;
	this->ranged = false;
	this->special = 0;
}

Unit_Base::~Unit_Base()
{
}

void Unit_Base::setHp(int newHp)
{
	this->hp = newHp;
}

void Unit_Base::setIsAlive (bool modifier)
{
	this->isAlive = modifier;
}

void Unit_Base::setMovment (int moveAmount)
{
	this->movement = moveAmount;
}

void Unit_Base::setRanged (bool modifier)
{
	this->ranged = modifier;
}

void Unit_Base::setSpecial (int specialNum)
{
	this->special = specialNum;
}