#pragma once
#include "cocos2d.h"
using namespace cocos2d;

#include "TowerManager.h"
#include "AllianceManager.h"
#include "InGameInterface.h"


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
	SWORD, F_NINJA, M_NINJA
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
	bool InterfaceIsFlag; // �������̽� ü�¹ٸ� ��Ʈ�� �ϱ����� �÷���
	Point PlayerStartPos; // �÷��̾� ���� ��ü ���� ��ġ
	EventListenerMouse* Mouse;
	InGameInterface* IM; //�������̽� �Ŵ���
	float m_iMP; // ��ü ������ ����ϴ� MP

	// �Ŵ��� ����

	TowerManager TM;	// Ÿ�� ��ü�� ���� �� ����
	AllianceManager AM;	// �÷��̾� ���� ��ü�� ���� �� ����
};