#pragma once
#include "hinh.h"
class line :
	public hinh
{
private:
	int x1,y1,x3,y3;
public:
	line(CPoint p1,CPoint p2);
	void thietlap(int mx1,int my1,int mx3,int my3);
	void ve(CClientDC *pDC);
	void dropline();
	void droplinemove(CClientDC *pDC);
	line(void);
	~line(void);
};

