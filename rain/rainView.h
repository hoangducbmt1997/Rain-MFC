
// rainView.h : interface of the CrainView class
//

#pragma once
#include"cloud.h"
#include"hinh.h"
#include"cloud.h"
#include"line.h"

class CrainView : public CView
{
protected: // create from serialization only
	CrainView();
	DECLARE_DYNCREATE(CrainView)

// Attributes
public:
	CrainDoc* GetDocument() const;
	CPoint p1, p2;
	cloud cloud1,cloud2,cloud3;
	int control;
	line line;
// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CrainView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in rainView.cpp
inline CrainDoc* CrainView::GetDocument() const
   { return reinterpret_cast<CrainDoc*>(m_pDocument); }
#endif

