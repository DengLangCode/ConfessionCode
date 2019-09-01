#include "ConfessionCode.h"
#ifdef Q_OS_WIN
#pragma execution_character_set("utf-8")   //��� VS����������������
#endif

ConfessionCode::ConfessionCode(QWidget *parent)
	: QWidget(parent)
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
	ui.setupUi(this);
	setWindowIcon(QIcon("Resources/Heart.jpg"));
	setWindowTitle("����һλϲ�����С���");
	QMovie *Movie = new QMovie("Resources/Confession.gif");
	ui.label_2->setMovie(Movie);
	Movie->start();
	connect(ui.pushButton, SIGNAL(clicked(bool)), this,  SLOT(OnButtonClickedOne()));
	connect(ui.pushButton_2, SIGNAL(clicked(bool)), this, SLOT(OnButtonClickedTwo()));
}

void ConfessionCode::OnButtonClickedOne()
{
	QMessageBox::information(nullptr, "��ϲ����", "����һ�𿴵�Ӱ�ɣ�������");
}

void ConfessionCode::OnButtonClickedTwo()
{
	//���ǳ����Bug����Ȼ��������仰
	QMessageBox::information(nullptr, "�����ϲ����", "��������ò��ã���������");
}

void ConfessionCode::mouseMoveEvent(QMouseEvent *event)
{	
	QPoint ButtonPoint = ui.pushButton_2->pos(); //�õ��ؼ�λ��										 
	QSize WindowSize = this->size(); //��õ�ǰ���ڴ�С
	QPoint MousePoint = event->pos();  //ȡ���������ڴ��ڵ�λ��
	if (MousePoint.ry() > WindowSize.height() / 2 && ButtonPoint.ry() > WindowSize.height() / 2) //����ڴ��ڲ�
	{
		ui.pushButton_2->move(ButtonPoint.rx(), ButtonPoint.ry() - WindowSize.height() / 2);//�ؼ��ƶ������ڵײ�
	}
	else if (MousePoint.ry() < WindowSize.height() / 2 && ButtonPoint.ry() < WindowSize.height() / 2) //����ڴ��ڲ�//����ڴ��ڵײ�
	{
		ui.pushButton_2->move(ButtonPoint.rx(), ButtonPoint.ry() + WindowSize.height() / 2);//�ؼ��ƶ������ڶ���
	}
}
