#pragma once
#include <iostream>

class Unit_Base
{
	public:
		Unit_Base ();
		~Unit_Base ();

		void setHp (int newHp);//changes hp, probably will use in battle
		void setIsAlive (bool modifier);//can decide if unit should be on board
		void setMovment (int moveAmount);//amount of movement in int for spaces
		void setRanged (bool modifier);//decides if unit is ranged
		void setSpecial (int specialNum);//thinking list of specials, assign special "number" so unit can use special

		//movement :used 2d array and keep track of location. then get move from player and change location depending on that
		//special could be called as a skill?
		//need combat handler here as well, probably virtual function


	protected:
		int hp;
		bool isAlive;
		int movement;
		bool ranged;
		int special;
};