//=====================================================================================

#include "MainDlg.h"

//=====================================================================================

bool cMainDlg::UnlockAll()
{
	bool bSuccess = true;

	for (int i = 0; i < UNLOCK_ALL_SIZE; i++)
	{
		if (!cMemory::MemWrite("iw6mp64_ship.exe", UNLOCK_ALL_OFFSET + i, UNLOCK_ALL_VALUE))
		{
			bSuccess = false;
			break;
		}
	}

	return bSuccess;
}

//=====================================================================================