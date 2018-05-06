#include "grapgui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	grapGUI w;
	w.show();
	return a.exec();
}
