#include "stdafx.h"
#include "cloud.h"

void cloud::thietlap(int mx1,int my1,int mx3,int my3)
{
	x1=mx1;x3=mx3;y1=my1;y3=my3;
}

cloud::cloud(CPoint p1,CPoint p2)
{
	point1.x = p1.x;
	point1.y = p1.y;
	point2.x = p2.x;
	point2.y = p2.y;
	x1 = p1.x;
	x3 = p2.x;
	y1 = p1.y;
	y3 = p2.y;
}
int cloud::kiemtratronghinh(CPoint p1)
{
	if (p1.x >= x1 && p1.x <= x3 && p1.y >= y1 && p1.y <= y3)
		return 1;
	else
		return 0;
}

void cloud::ve(CClientDC *pDC)
{
	pDC->Ellipse(x1,y1,x3,y3);
}
cloud::cloud(void)
{
}


cloud::~cloud(void)
{
}
