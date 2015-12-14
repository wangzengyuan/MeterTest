#pragma once


// CNavigationView 视图

class CNavigationView : public CTreeView
{
	DECLARE_DYNCREATE(CNavigationView)

protected:
	CNavigationView();           // 动态创建所使用的受保护的构造函数
	virtual ~CNavigationView();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();

private:
	CImageList m_ImageList;
};


