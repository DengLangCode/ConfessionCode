#include "ConfessionCode.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ConfessionCode w;
	w.setMouseTracking(true); //����widgets����ƶ�����
	//ע��qt�Ļ��Ƶ�����������ƶ�������Ҫ��widget��ʼ������֮��show����֮ǰ����qmainwindow����Ҫ�������Ĳ���
	w.show();
	return a.exec();
}
