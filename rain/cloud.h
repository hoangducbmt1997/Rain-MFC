#pragma once
#include "hinh.h"
class cloud :
	public hinh
{
private:
	int x1,y1,y3,x3;
public:
	cloud(CPoint p1,CPoint p2);
	int kiemtratronghinh(CPoint p1);
	void thietlap(int mx1,int my1,int mx3,int my3);
	void ve(CClientDC *pDC);
	cloud(void);
	~cloud(void);
};

