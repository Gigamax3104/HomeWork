#include	<iostream>
#include	<cstdlib>
#include	<ctime>
using namespace std;

const int MAX_NAME = 16;

struct DynamicObject {
	char name[MAX_NAME];
	int TransformPositionX;
	int TransformPositionY;
	int ImageID;
};

struct MainCharacter {
	DynamicObject Object;
	int LevelOfViolence;
	int HP;
	int MP;
	double Attack;
};

struct NPC {
	DynamicObject Object;
	int ConversationID;
};

struct Player {
	MainCharacter Character;
	char Occupation[MAX_NAME];
};

struct Enemy {
	MainCharacter Character;
	bool Discharge;
	bool BossFlag;
};

int main() {
	Player player[]{
		{"óˆä½",50,100,20403545,10,50,100,30},
		{"÷^‰›",200,100,30102256,3,30,70,22},
		{"t•——S÷",150,300,60321076,15,70,130,65},
		{"–‚‚dF",500,400,80306045,20,100,150,100}
	};

	Enemy enemy{ "ƒI[ƒKEƒVƒ“",600,600,10200045,true,true };
}