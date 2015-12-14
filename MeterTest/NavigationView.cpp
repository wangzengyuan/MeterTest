// NavigationView.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MeterTest.h"
#include "NavigationView.h"
#include "resource.h"

// CNavigationView

IMPLEMENT_DYNCREATE(CNavigationView, CTreeView)

CNavigationView::CNavigationView()
{

}

CNavigationView::~CNavigationView()
{
}

BEGIN_MESSAGE_MAP(CNavigationView, CTreeView)
END_MESSAGE_MAP()


// CNavigationView ���

#ifdef _DEBUG
void CNavigationView::AssertValid() const
{
	CTreeView::AssertValid();
}

#ifndef _WIN32_WCE
void CNavigationView::Dump(CDumpContext& dc) const
{
	CTreeView::Dump(dc);
}
#endif
#endif //_DEBUG


// CNavigationView ��Ϣ�������


void CNavigationView::OnInitialUpdate()
{
	CTreeView::OnInitialUpdate();

	// TODO: �ڴ����ר�ô����/����û���
	CTreeCtrl & TCtrl = GetTreeCtrl();
	
	m_ImageList.Create(32, 32, TRUE | ILC_COLOR8, 2, 1);
	HICON hIcon = ::LoadIcon(AfxGetResourceHandle(),MAKEINTRESOURCE(IDI_ICON1));  
    m_ImageList.Add(hIcon);
	hIcon = (HICON)::LoadImage(AfxGetInstanceHandle(),MAKEINTRESOURCE(IDI_ICON3),IMAGE_ICON,0,0, LR_DEFAULTCOLOR | LR_CREATEDIBSECTION | LR_DEFAULTSIZE);
    m_ImageList.Add(hIcon);

	TCtrl.SetImageList(&m_ImageList,TVSIL_NORMAL);
	TCtrl.ModifyStyle(0,TVS_HASBUTTONS|TVS_HASLINES|TVS_LINESATROOT);
	HTREEITEM m_HTree[3];
	HTREEITEM father1 = TCtrl.InsertItem(_T("���Թ��̹���"));
	TCtrl.SetItemImage(father1,0,0);
	HTREEITEM father2 = TCtrl.InsertItem(_T("��Լ����"));
	HTREEITEM father3 = TCtrl.InsertItem(_T("���ù���"));
	m_HTree[0] = TCtrl.InsertItem(_T("�����ն���Ϣ"),father1);
	//TCtrl.SetItemImage(m_HTree[0],1,1);
	m_HTree[1] = TCtrl.InsertItem(_T("ִ�в���"),father1);
	m_HTree[2] = TCtrl.InsertItem(_T("������Ϣ���"),father1);
	TCtrl.InsertItem(_T("������Ϣ���"),father2);
	TCtrl.InsertItem(_T("������Ϣ���"),father2);
	TCtrl.InsertItem(_T("������Ϣ���"),father2);
}
