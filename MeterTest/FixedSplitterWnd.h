#pragma once

class CFixedSplitterWnd:
	public CSplitterWnd
{
	DECLARE_DYNAMIC(CFixedSplitterWnd)
public:
	CFixedSplitterWnd(void);
	bool m_bCreated;
public:
	~CFixedSplitterWnd(void);
public:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};