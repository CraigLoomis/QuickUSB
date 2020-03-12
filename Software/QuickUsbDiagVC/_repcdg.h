#if !defined(AFX__REPCDG_H__EA37D49C_5A91_4C27_A692_0EDE9791B411__INCLUDED_)
#define AFX__REPCDG_H__EA37D49C_5A91_4C27_A692_0EDE9791B411__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class C_Collection;
class CRepositoryObject;

/////////////////////////////////////////////////////////////////////////////
// C_RepCdg wrapper class

class C_RepCdg : public CWnd
{
protected:
	DECLARE_DYNCREATE(C_RepCdg)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xfe200e89, 0x9244, 0x11d1, { 0xa1, 0x6, 0x0, 0xc0, 0x4f, 0xbb, 0xc2, 0x21 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	C_Collection GetMcolRepositories();
	void SetRefMcolRepositories(LPDISPATCH newValue);
	C_Collection GetMcolRepNames();
	void SetRefMcolRepNames(LPDISPATCH newValue);
	void SetCancelDialog(BOOL* newValue);
	BOOL GetCancelDialog();
	void SetLookInString(BSTR* newValue);
	void SetSelectedObject(BSTR* newValue);
	void SetOverwritePrompt(BOOL* newValue);
	BOOL GetOverwritePrompt();
	void SetObjectExists(BOOL* newValue);
	BOOL GetObjectExists();
	void SetShowHidden(BOOL* newValue);
	CString GetSelectedObject();
	void SetObjectName(BSTR* newValue);
	CString GetObjectName();
	void SetSelectedPackage(BSTR* newValue);
	CString GetSelectedPackage();
	void SetShowConnect(BOOL* newValue);
	void SetAction(short* newValue);
	short GetAction();
	CString GetWinHelpFile();
	void SetWinHelpFile(BSTR* newValue);
	long GetHelpID();
	void SetHelpID(long* newValue);
	CString GetCurrentRepos();
	void SetCurrentRepos(BSTR* newValue);
	CRepositoryObject GetCurrentReposObject();
	void SetRepositories(BSTR* newValue);
	void SetFindInterfaces(BSTR* newValue);
	void SetFindClasses(BSTR* newValue);
	BOOL GetInterface(LPDISPATCH* Obj, BSTR* InterfaceName, LPDISPATCH* Iface);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX__REPCDG_H__EA37D49C_5A91_4C27_A692_0EDE9791B411__INCLUDED_)