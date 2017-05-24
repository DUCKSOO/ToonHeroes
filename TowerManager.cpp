#include "TowerManager.h"
#include "Core.h"

void TowerManager::init() // ���� �ʱ�ȭ �Լ�
{
	memset(m_pTowerList, NULL, sizeof(m_pTowerList));
}

void TowerManager::setScene(Layer* _curScene) //�̹��� ���� , ������ ����, ��ǥ ����, ���̾ add
{
	this->init();

	for (int i = 0; i < MAX_TOWER; i++)
	{
		m_pTowerList[i] = new Object_Tower;
		if (i == 0)
		{
			m_pTowerList[i]->init(P_TOWER);
			m_pTowerList[i]->setPosition(Point(155, 100));
		}
		else if (i == 1)
		{
			m_pTowerList[i]->init(E_TOWER);
			m_pTowerList[i]->setPosition(Point(1900, 100));
		}

		m_pTowerList[i]->setScale(0.7f);

		_curScene->addChild(m_pTowerList[i]);
	}
}

void TowerManager::dealloc() // ���� �Ҵ� Ǯ�� ( ���� �� or �������� �̵� �� ���� )
{
	for (int i = 0; i < MAX_TOWER; i++)
	{
		delete(m_pTowerList[i]);
	}
}