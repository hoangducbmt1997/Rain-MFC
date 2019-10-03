#pragma once
class hinh
{
public:
	CPoint point1,point2;
	virtual void thietlap(int mx1,int my1,int mx3,int my3);
	virtual void ve(CClientDC *pDC);
	hinh(void);
	~hinh(void);
};

