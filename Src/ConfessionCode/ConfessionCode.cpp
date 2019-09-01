#include "ConfessionCode.h"
#ifdef Q_OS_WIN
#pragma execution_character_set("utf-8")   //解决 VS编译器下中文乱码
#endif

ConfessionCode::ConfessionCode(QWidget *parent)
	: QWidget(parent)
{
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
	ui.setupUi(this);
	setWindowIcon(QIcon("Resources/Heart.jpg"));
	setWindowTitle("来自一位喜欢你的小哥哥");
	QMovie *Movie = new QMovie("Resources/Confession.gif");
	ui.label_2->setMovie(Movie);
	Movie->start();
	connect(ui.pushButton, SIGNAL(clicked(bool)), this,  SLOT(OnButtonClickedOne()));
	connect(ui.pushButton_2, SIGNAL(clicked(bool)), this, SLOT(OnButtonClickedTwo()));
}

void ConfessionCode::OnButtonClickedOne()
{
	QMessageBox::information(nullptr, "我喜欢你", "晚上一起看电影吧！！！！");
}

void ConfessionCode::OnButtonClickedTwo()
{
	//除非程序出Bug，不然不会有这句话
	QMessageBox::information(nullptr, "我真的喜欢你", "给个机会好不好！！！！！");
}

void ConfessionCode::mouseMoveEvent(QMouseEvent *event)
{	
	QPoint ButtonPoint = ui.pushButton_2->pos(); //得到控件位置										 
	QSize WindowSize = this->size(); //求得当前窗口大小
	QPoint MousePoint = event->pos();  //取得鼠标相对于窗口的位置
	if (MousePoint.ry() > WindowSize.height() / 2 && ButtonPoint.ry() > WindowSize.height() / 2) //鼠标在窗口部
	{
		ui.pushButton_2->move(ButtonPoint.rx(), ButtonPoint.ry() - WindowSize.height() / 2);//控件移动到窗口底部
	}
	else if (MousePoint.ry() < WindowSize.height() / 2 && ButtonPoint.ry() < WindowSize.height() / 2) //鼠标在窗口部//鼠标在窗口底部
	{
		ui.pushButton_2->move(ButtonPoint.rx(), ButtonPoint.ry() + WindowSize.height() / 2);//控件移动到窗口顶部
	}
}
