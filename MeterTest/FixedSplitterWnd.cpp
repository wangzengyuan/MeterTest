#include "StdAfx.h"
#include "FixedSplitterWnd.h"

IMPLEMENT_DYNAMIC(CFixedSplitterWnd,CSplitterWnd)
CFixedSplitterWnd::CFixedSplitterWnd(void)
{
	m_bCreated = false;
	//m_cySplitterGap  = 3;
	//m_cxSplitterGap  = 3;
}

CFixedSplitterWnd::~CFixedSplitterWnd(void)
{
}
BEGIN_MESSAGE_MAP(CFixedSplitterWnd, CSplitterWnd)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_SIZE()
END_MESSAGE_MAP()

void CFixedSplitterWnd::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//return;   

	//CSplitterWnd::OnMouseMove(nFlags, point);

}

void CFixedSplitterWnd::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	//return;
	//CSplitterWnd::OnLButtonDown(nFlags, point);
}

void CFixedSplitterWnd::OnSize(UINT nType, int cx, int cy)
{
	CSplitterWnd::OnSize(nType, cx, cy);
	//static bool m_flag = false;
	if(m_bCreated)
	{
		CRect myrc;
		GetClientRect(&myrc);
		SetColumnInfo(0,(myrc.Width())/5,0);
		SetColumnInfo(1,(myrc.Width())/5,0);
		RecalcLayout();
	}
	else
		m_bCreated = true;
	// TODO: 在此处添加消息处理程序代码
}
