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
		{"��䐽",50.4,100.3,20403545,10,50,100,30,"�E��"},
		{"���^��",200.7,100.9,30102256,3,30,70,22,"���@���K��"},
		{"�t���S��",150.1,300.9,60321076,15,70,130,65,"���@�g��"},
		{"�����d�F",500.0,400.1,80306045,20,100,150,100,"����"}
	};

	Enemy enemy{ "�I�[�K�E�V��",600,600,10200045,true,true };

	for (int i = 0; i < sizeof player / sizeof * player; i++) {
		drawMainCaracterParam(player[i].Character);
	}
}

void drawMainCaracterParam(const MainCharacter& mc) {
	cout << "���O:" << mc.Object.name << endl;
	cout << endl;
	cout << "x���W:" << mc.Object.TransformPositionX << endl;
	cout << "y���W:" << mc.Object.TransformPositionY << endl;
	cout << "�摜ID:" << mc.Object.ImageID << endl;
	cout << "���x��:" << mc.LevelOfViolence << endl;
	cout << "�̗�:" << mc.HP << endl;
	cout << "����:" << mc.MP << endl;
	cout << "�U����:" << mc.Attack << endl;
	cout << endl;
}
