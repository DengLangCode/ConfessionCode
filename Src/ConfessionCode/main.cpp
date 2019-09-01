#include "ConfessionCode.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ConfessionCode w;
	w.setMouseTracking(true); //开启widgets鼠标移动监视
	//注意qt的机制导致设置鼠标移动监视需要在widget初始化出来之后show出来之前，而qmainwindow则还需要设置中心布局
	w.show();
	return a.exec();
}
