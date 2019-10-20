//=====================================================================================

#pragma once

#include "../Resources/Resource.h"
#include "../Interface/WinAPI/Dialog.hpp"
#include "../Interface/WinAPI/Button.hpp"
#include "../Helpers/Message.hpp"
#include "../Helpers/Memory.hpp"

//=====================================================================================

#define UNLOCK_ALL_OFFSET 0x1445A2B40
#define UNLOCK_ALL_VALUE 0xFF
#define UNLOCK_ALL_SIZE 0x2D0

//=====================================================================================

class cMainDlg : public cDialog
{
public:

	cMainDlg(HINSTANCE instance);
	~cMainDlg() {};

private:

	bool UnlockAll();

	DLG_HANDLER(OnInit);
	DLG_HANDLER(OnClose);
	DLG_HANDLER(OnUnlockAll);

	ctrl::cButton _unlockAll;

	HINSTANCE _instance;
};

//=====================================================================================