#pragma once

#include <QtWidgets/QWidget>
#include "ui_ConfessionCode.h"
#include <QMouseEvent>
#include <QMessageBox>
#include <QTextEncoder>
#include <QMovie>
#include <QIcon>

class ConfessionCode : public QWidget
{
	Q_OBJECT

public:
	ConfessionCode(QWidget *parent = Q_NULLPTR);

private:
	Ui::ConfessionCodeClass ui;
private slots:
	void OnButtonClickedOne();
	void OnButtonClickedTwo();
	void mouseMoveEvent(QMouseEvent *event);
};
