#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
	: QFrame(parent)
{
	pointArray[0] = QPoint(200, 30);
	pointArray[1] = QPoint(250, 30);
	pointArray[2] = QPoint(160, 50);
	pointArray[3] = QPoint(240, 60);
	pointArray[4] = QPoint(180, 70);
	pointArray[5] = QPoint(260, 80);
	pointArray[6] = QPoint(130, 90);
	pointArray[7] = QPoint(200, 100);
	pointArray[8] = QPoint(230, 120);
	pointArray[9] = QPoint(260, 125);
	pointArray[10] = QPoint(160, 140);
	pointArray[11] = QPoint(210, 180);
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			RoadArray[i][j] = 0;
		}
		pointSort[i] = 12;
	}


	result_flag = false;
}

MyWidget::~MyWidget()
{

}
void MyWidget::paintEvent(QPaintEvent *event)
{
	/*每次update重新画一遍*/
	QPainter painter(this);
	//painter.drawLine(80, 100, 650, 500);
	painter.setPen(Qt::black);

	for (int i = 0; i < 12; i++)
	{
		if (i != 6)
		{
			painter.drawEllipse(pointArray[i].x() - 10, pointArray[i].y() - 10, 20, 20); //椭圆
		}
		}
	pointArray[6] = QPoint(130, 90);
	painter.drawEllipse(pointArray[6].x() - 10, pointArray[6].y() - 10, 20, 20);
	


		painter.setPen(Qt::blue);
		for (int index1 = 0; index1 < 12; index1++)
		{
			for (int index2 = 0; index2 < 12; index2++)
			{
				if (RoadArray[index1][index2] == 1)
				{
					QPoint point1 = pointArray[index1];
					QPoint point2 = pointArray[index2];
					painter.drawLine(point1, point2);
				}
			}
		}
	
	
	if (result_flag)
	{

		painter.setPen(Qt::red);
		//paint the result
		for (int i = 0; pointSort[i + 1] != 12; i++)
		{
			QPoint point1 = pointArray[pointSort[i]];
			QPoint point2 = pointArray[pointSort[i+1]];
			painter.drawLine(point1, point2);
		}

	}

}

void MyWidget::Adjust(int source_p, int end_p)
{
	RoadArray[source_p][end_p] = 1;
	//result_flag = flag;
	update();
}
void MyWidget::Finsh(int* array)
{
	for (int i = 0; i < 12;i++)
		pointSort[i] = 12;
	for (int i = 0; i < 12; i++)
	{
		if (array[i] != 12)
		{
			pointSort[i] = array[i];
		}
	}
	result_flag = true;
	update();
}
QPoint MyWidget::getPoint(int index)
{
	int row_index = index /10; //0~9 /10=0
	int column_index = index - row_index * 10;//2
	return QPoint(50 + column_index * 40 + 20, 40 + row_index * 40 + 20);


}

int MyWidget::getPoint_C(int index)
{
	return index - getPoint_R(index) * 10;

}
int MyWidget::getPoint_R(int index)
{
	return index / 10;
}