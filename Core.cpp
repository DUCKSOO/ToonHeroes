#include "Core.h"

Core::Core() {
	m_iStage = 1; // 1�������� ���� ����
	PlayerStartPos = Point(200, 168);
	isKeyDown = false;
	IM = NULL;
}