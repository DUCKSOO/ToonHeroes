#pragma once
#include "cocos2d.h"
using namespace cocos2d;

#include "TowerManager.h"
#include "AllianceManager.h"


enum TOWER_TAG {	// Ÿ���� �±� ��
	P_TOWER, E_TOWER
};

enum OBJECT_TAG {
	PLAYER, ENEMY
};

enum OBJECT_STATE {
	IDLE, WALK , ATTACK
};
enum DIRECTION {
	LEFT, RIGHT
};

enum PLAYER_ALLIANCE {
	SWORD
};

class Core
{
private:
	Core();
	~Core() { delete instance; }

public:
	static Core* instance;
	static Core* sharedManager()
	{
		if (instance == NULL) instance = new Core;
		return instance;
	}

public: // �̱��� ��� ����
	float m_fOriginX;  //Ⱦ��ũ�� ����� �� ���� ����. ����ó���� �� ��
					// �������� �ٲ� �� ���� 0 ���� �ʱ�ȭ
	int m_iStage; //���� ��������
	bool isKeyDown;  // ���� Ű�� ���ȳ�? ( �׽�Ʈ �� ) ��ü ���� ��
	Point PlayerStartPos; // �÷��̾� ���� ��ü ���� ��ġ

	// �Ŵ��� ����

	TowerManager TM;	// Ÿ�� ��ü�� ���� �� ����
	AllianceManager AM;	// �÷��̾� ���� ��ü�� ���� �� ����
};