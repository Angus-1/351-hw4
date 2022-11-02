

#include "stdafx.h"
#include "hw4_angelSantoyo.h"
#include "hw4_angelSantoyoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


BEGIN_MESSAGE_MAP(hw4_angelSantoyo, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


hw4_angelSantoyo::hw4_angelSantoyo()
{
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

}


hw4_angelSantoyo app;

BOOL hw4_angelSantoyo::InitInstance()
{

	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}



	CShellManager *pShellManager = new CShellManager;
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));
	SetRegistryKey(_T("generated native applications"));

	hw4_angelSantoyoDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{

	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "Warning: Dialog box created failed，applicator\n");
		TRACE(traceAppMsg, 0, "Warning: If you use MFC controls on dialogs, you cannot #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS。\n");
	}
	if (pShellManager != nullptr)
	{
		delete pShellManager;
	}

#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif
	return FALSE;
}

