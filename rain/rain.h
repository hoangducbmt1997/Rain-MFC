
// rain.h : main header file for the rain application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CrainApp:
// See rain.cpp for the implementation of this class
//

class CrainApp : public CWinApp
{
public:
	CrainApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CrainApp theApp;
