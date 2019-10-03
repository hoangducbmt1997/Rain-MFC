#include "stdafx.h"
#include "line.h"


line::line(CPoint p1,CPoint p2)
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
void line::thietlap(int mx1,int my1,int mx3,int my3)
{
	x1=mx1;x3=mx3;y1=my1;y3=my3;
}
void line::ve(CClientDC *pDC)
{
	pDC->Rectangle(x1+10,y1,x3+10,y3);
	pDC->Rectangle(x1+20,y1,x3+20,y3);
	pDC->Rectangle(x1+30,y1,x3+30,y3);
	pDC->Rectangle(x1+40,y1,x3+40,y3);
	pDC->Rectangle(x1+50,y1,x3+50,y3);
	pDC->Rectangle(x1+60,y1,x3+60,y3);
	pDC->Rectangle(x1+70,y1,x3+70,y3);
	pDC->Rectangle(x1+80,y1,x3+80,y3);
	pDC->Rectangle(x1+90,y1,x3+90,y3);
	pDC->Rectangle(x1+100,y1,x3+100,y3);
	pDC->Rectangle(x1+110,y1,x3+110,y3);
	pDC->Rectangle(x1+120,y1,x3+120,y3);

}
void line::dropline()
{
	y1=y1+10;y3=y3+10;
}

void line::droplinemove(CClientDC *pDC)
{
	int r=0,r1=255;
	int g=0,g1=255;
	int b=0,b1=255;

	CPen *pen;
	pen=new CPen(PS_SOLID,1,RGB(r1,g1,b1));

	CBrush *newbrush=new CBrush(RGB(r,g,b));
	CBrush *oldbrush;
	int i=0;
	while (i<32)
	{
		pDC->SelectObject(pen);
		ve(pDC);
		dropline();
		oldbrush=pDC->SelectObject(newbrush);
		ve(pDC);
		pDC->SelectObject(oldbrush);

		Sleep(15);
		i++;
	}
}
line::line(void)
{
}


line::~line(void)
{
}
