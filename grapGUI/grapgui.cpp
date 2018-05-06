#include "grapgui.h"

grapGUI::grapGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->source_point = 0;
	this->end_point = 0;

	connect(ui.Button_finish,
		SIGNAL(clicked()),
		this,
		SLOT(showresult()));
	connect(ui.Button_Add,
		SIGNAL(clicked()),
		this,
		SLOT(add()));
	ui.comboBox->addItem("DFS");
	ui.comboBox->addItem("BFS");
//	pointArray[0] = QPoint(200, 30);
	G = new Graph(12); //12������
	this->show_flag = false; //��ʼ������ʾ���


	for (int i = 0; i < 12; i++)
	{
		roadarray[i] = 12; //12 ����·����
	}
}

grapGUI::~grapGUI()
{

}
void grapGUI::showresult()
{

	for (int i = 0; i < 12; i++)
	{
		roadarray[i] = 12; //12 ����·����
	}
	QString str_aimp = ui.Aim_point->text();
	Aim_p = str_aimp.toInt();
	QString str_soup = ui.Soure_point->text();
	Souce_p = str_soup.toInt();

	int sort_index = ui.comboBox->currentIndex();

	switch (sort_index)
	{
	case 0: dfssearch = new DepthFirstPaths(*G, Souce_p);
		if (dfssearch->HasPathTo(Aim_p))
		{
			QString current_text = ui.plainTextEdit->toPlainText();
			ui.plainTextEdit->setPlainText(current_text + "\n" + GBK::s2q("DFS���������"));

			int i = 0;
			for (int point : dfssearch->PathTo(Aim_p))
			{
				
				if (point == Souce_p)
				{
					roadarray[i] = Souce_p;
					QString current_text = ui.plainTextEdit->toPlainText();
					ui.plainTextEdit->setPlainText(current_text + "\n" + QString::number(roadarray[i]));
					i++;
				}
				else
				{
					roadarray[i] = point;
					QString current_text = ui.plainTextEdit->toPlainText();
					ui.plainTextEdit->setPlainText(current_text + "\n" + QString::number(roadarray[i]));
					i++;
				}

			}

			

			ui.frame->Finsh(roadarray);
			//QMessageBox::information(NULL, "False", GBK::s2q("Finish"), QMessageBox::Yes);
			
		}
		else
		{
			QMessageBox::information(NULL, "False", GBK::s2q("û����Ӧ��·����"), QMessageBox::Yes);
		}
		break;
	case 1:
		bdssearch = new BreadthFirstPaths(*G, Souce_p);
		if (bdssearch->HasPathTo(Aim_p))
		{
			QString current_text = ui.plainTextEdit->toPlainText();
			ui.plainTextEdit->setPlainText(current_text + "\n" + GBK::s2q("BFS���������"));

			int i = 0;
			for (int point : bdssearch->PathTo(Aim_p))
			{

				if (point == Souce_p)
				{
					roadarray[i] = Souce_p;
					QString current_text = ui.plainTextEdit->toPlainText();
					ui.plainTextEdit->setPlainText(current_text + "\n" + QString::number(roadarray[i]));
					i++;
				}
				else
				{
					roadarray[i] = point;
					QString current_text = ui.plainTextEdit->toPlainText();
					ui.plainTextEdit->setPlainText(current_text + "\n" + QString::number(roadarray[i]));
					i++;
				}

			}



			ui.frame->Finsh(roadarray);
			//QMessageBox::information(NULL, "False", GBK::s2q("Finish"), QMessageBox::Yes);

		}
		else
		{
			QMessageBox::information(NULL, "False", GBK::s2q("û����Ӧ��·����"), QMessageBox::Yes);
		}


		break;
	default:
		break;
	}





	this->show_flag = true;
}
void grapGUI::add()
{
	bool flag = 0;
	QString string_source = ui.Start_point->text();
	source_point = string_source.toInt();
	QString string_end = ui.End_point->text();
	end_point = string_end.toInt();

	if (source_point == end_point) flag = 1;
	else if (source_point < 0 || end_point < 0) flag = 1;
	else if (source_point >= max_n || end_point >= max_n) flag = 1;

	if (flag)
	{
		QMessageBox::information(NULL, "False", GBK::s2q("���벻����Ҫ�����������룡"), QMessageBox::Yes);
	}
	else
	{
		ui.frame->Adjust(source_point, end_point);
		//������ͼ�в�����
		G->AddEdge(source_point, end_point);
		QString current_text = ui.plainTextEdit->toPlainText();
		ui.plainTextEdit->setPlainText(current_text + "\n"
			+GBK::s2q("��ǰ����·��:") + string_source + "<->" + string_end);

	}
	ui.Start_point->setText("");
	ui.End_point->setText("");

}