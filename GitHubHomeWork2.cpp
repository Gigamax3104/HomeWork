#include	<iostream>
#include	<cstdlib>
#include	<ctime>
using namespace std;


const int MAX_NAME = 16;

struct DynamicObject {
	char name[MAX_NAME];
	double TransformPositionX;
	double TransformPositionY;
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

void drawMainCaracterParam(const MainCharacter& mc);

int main() {
	Player player[]{
		{"浅井誠",50.4,100.3,20403545,10,50,100,30,"勇者"},
		{"桜真央",200.7,100.9,30102256,3,30,70,22,"魔法見習い"},
		{"春風祐樹",150.1,300.9,60321076,15,70,130,65,"魔法使い"},
		{"魔高重孝",500.0,400.1,80306045,20,100,150,100,"賢者"}
	};

	Enemy enemy{ "オーガ・シン",600,600,10200045,true,true };

	for (int i = 0; i < sizeof player / sizeof * player; i++) {
		drawMainCaracterParam(player[i].Character);
	}
}

void drawMainCaracterParam(const MainCharacter& mc) {
	cout << "名前:" << mc.Object.name << endl;
	cout << endl;
	cout << "x座標:" << mc.Object.TransformPositionX << endl;
	cout << "y座標:" << mc.Object.TransformPositionY << endl;
	cout << "画像ID:" << mc.Object.ImageID << endl;
	cout << "レベル:" << mc.LevelOfViolence << endl;
	cout << "体力:" << mc.HP << endl;
	cout << "魔力:" << mc.MP << endl;
	cout << "攻撃力:" << mc.Attack << endl;
	cout << endl;
}
