
// rainView.cpp : implementation of the CrainView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "rain.h"
#endif

#include "rainDoc.h"
#include "rainView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CrainView

IMPLEMENT_DYNCREATE(CrainView, CView)

BEGIN_MESSAGE_MAP(CrainView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CrainView construction/destruction

CrainView::CrainView()
{
	// TODO: add construction code here
	cloud1.thietlap(200,50,300,90);
	cloud2.thietlap(270,50,370,90);
	cloud3.thietlap(235,60,335,107);
	
	line.thietlap(215,107,218,177);
	
}

CrainView::~CrainView()
{
}

BOOL CrainView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CrainView drawing

void CrainView::OnDraw(CDC* /*pDC*/)
{
	CrainDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CClientDC pDC(this);
	CPen *pen1;
	pen1=new CPen(PS_SOLID,1,RGB(202,228,244));
	pDC.SelectObject(pen1);
	CBrush *newbrush= new CBrush(RGB(202,228,244));
	pDC.SelectObject(newbrush);
	cloud1.ve(&pDC);
	cloud2.ve(&pDC);
	cloud3.ve(&pDC);

	
	
	// TODO: add draw code for native data here
}


// CrainView printing

BOOL CrainView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CrainView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CrainView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CrainView diagnostics

#ifdef _DEBUG
void CrainView::AssertValid() const
{
	CView::AssertValid();
}

void CrainView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CrainDoc* CrainView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CrainDoc)));
	return (CrainDoc*)m_pDocument;
}
#endif //_DEBUG


// CrainView message handlers


void CrainView::OnLButtonDown(UINT nFlags, CPoint point)
{
	p1.x=point.x;
	p1.y=point.y;
	// TODO: Add your message handler code here and/or call default
	if(cloud1.kiemtratronghinh(p1)==1||cloud2.kiemtratronghinh(p1)==1||cloud3.kiemtratronghinh(p1)==1)
	{
			CClientDC pDC(this);
			for(int i=0;i<20;i++)
			{
				line.droplinemove(&pDC);
				line.thietlap(215,107,218,177);
			}
	}
	CView::OnLButtonDown(nFlags, point);
}
