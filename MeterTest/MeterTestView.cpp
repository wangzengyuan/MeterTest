
// MeterTestView.cpp : CMeterTestView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MeterTest.h"
#endif

#include "MeterTestDoc.h"
#include "MeterTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMeterTestView

IMPLEMENT_DYNCREATE(CMeterTestView, CView)

BEGIN_MESSAGE_MAP(CMeterTestView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CMeterTestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMeterTestView ����/����

CMeterTestView::CMeterTestView()
{
	// TODO: �ڴ˴���ӹ������

}

CMeterTestView::~CMeterTestView()
{
}

BOOL CMeterTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMeterTestView ����

void CMeterTestView::OnDraw(CDC* /*pDC*/)
{
	CMeterTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMeterTestView ��ӡ


void CMeterTestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CMeterTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMeterTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMeterTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CMeterTestView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMeterTestView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMeterTestView ���

#ifdef _DEBUG
void CMeterTestView::AssertValid() const
{
	CView::AssertValid();
}

void CMeterTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMeterTestDoc* CMeterTestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMeterTestDoc)));
	return (CMeterTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CMeterTestView ��Ϣ�������
