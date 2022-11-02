/*
Angel Santoyo
CPSC 351
Assignment#4
*/



#pragma once
#define WM_RECVDATA WM_USER+1


struct RECVPARAM
{
	SOCKET sock;
	HWND hwnd;
};


class hw4_angelSantoyoDlg : public CDialogEx
{

public:
	hw4_angelSantoyoDlg(CWnd* pParent = nullptr);	

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CHAT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	



protected:
	HICON m_hIcon;

	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	bool InitSocket(void);
	DWORD static WINAPI RecvProc(LPVOID lpParameter);
	afx_msg LRESULT OnRecvData(WPARAM wParam, LPARAM lParam);
	
private:
	SOCKET m_socket;
public:
	
	afx_msg void OnBnClickedBtnSend();
	
};
