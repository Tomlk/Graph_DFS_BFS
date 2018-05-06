#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QFrame>
#include "qpainter.h"
#include "qpen.h"
#include "qmap.h"
#include "GBK.h"


class MyWidget : public QFrame
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent);
	~MyWidget();
	void Adjust(int source_p,int end_p);
	void Finsh(int* array);

	//int PointArray[40][40];  //两点之间是否存在通路
	int RoadArray[12][12];//两点之间是否存在通路
	QPoint getPoint(int index);
	int getPoint_C(int index);
	int getPoint_R(int index);
	QPoint pointArray[12];
	int pointSort[12];

	bool result_flag;
private:
	void paintEvent(QPaintEvent *event);
};

#endif // MYWIDGET_H
