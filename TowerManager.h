#pragma once
#include "Object_Tower.h"
#include "Object_Alliance.h"

#define MAX_TOWER		2 // �� , �÷��̾�

class TowerManager
{
private:
	Object_Tower* m_pTowerList[MAX_TOWER];
public:
	void init();	// ���� �ʱ�ȭ �Լ�
	void setScene(Layer* _curScene);	//�̹��� ���� , ������ ����, ��ǥ ����, ���̾ add
	void dealloc();		// ���� �Ҵ� Ǯ�� ( ���� �� or �������� �̵� �� ���� )
	Object_Tower* CollisionCheckAboutTower(Object_Alliance* _alliance);
};