#ifndef GRAPGUI_H
#define GRAPGUI_H

#include <QtWidgets/QMainWindow>
#include "ui_grapgui.h"
#include <QMessageBox>  
#include "GBK.h"
#include "Graph.h"
#include "DepthFirstPaths.h"
#include "BreadthFirstPaths.h"

class grapGUI : public QMainWindow
{
	Q_OBJECT

public:
	grapGUI(QWidget *parent = 0);
	~grapGUI();
	int source_point;
	int end_point;
	const int max_n = 12;
	Graph* G;
	DepthFirstPaths* dfssearch;
	BreadthFirstPaths* bdssearch;

	int Souce_p;
	int Aim_p;

	bool show_flag;

	int roadarray[12]; //×î¶à12

private:
	Ui::grapGUIClass ui;

private slots:
	void showresult();
	void add();

};

#endif // GRAPGUI_H
