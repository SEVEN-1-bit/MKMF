#include "HWNDManager.h"

Handle::Handle() {
	this->display = nullptr;
	this->MSGStatus = TRUE;
	this->MSGWindow = nullptr;
}

Handle handle = Handle();		// ȫ�ֱ���