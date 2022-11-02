#pragma once

#ifndef __AFXWIN_H__
#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"


class hw4_angelSantoyo : public CWinApp
{
public:
	hw4_angelSantoyo();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern hw4_angelSantoyo app;
