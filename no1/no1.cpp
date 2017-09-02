#include "no1.h"
#include <qaction>
#include <QMenuBar>
#include <QPixmap>
#include <QAxFactory>

#include "fileopen.xpm"
#include "filesave.xpm"

no1::no1(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);
	QAction *action;
	QMenu *file = new QMenu(this);
	action = new QAction(QPixmap((const char**)fileopen),"&Save",this);
	action->setShortcut(tr("CTRL+O"));
	connect(action, &QAction::triggered, this, &no1::fileOpen);
	file->addAction(action);

	action = new QAction(QPixmap((const char**)filesave), "&Save", this);
	action->setShortcut(tr("CTRL+S"));
	connect(action, &QAction::triggered, this, &no1::fileSave);
	file->addAction(action);

	QMenu *edit = new QMenu(this);

	action = new QAction("&Normal", this);
	action->setShortcut(tr("CTRL+N"));
	action->setToolTip("Normal");
	action->setStatusTip("Toggles Normal");
	action->setCheckable(true);
	connect(action, &QAction::triggered, this, &no1::editNormal);
	edit->addAction(action);

	action = new QAction("&Bold", this);
	action->setShortcut(tr("CTRL+B"));
	action->setCheckable(true);
	connect(action, &QAction::triggered, this, &no1::editBold);
	edit->addAction(action);

	action = new QAction("&Underline", this);
	action->setShortcut(tr("CTRL+U"));
	action->setCheckable(true);
	connect(action, &QAction::triggered, this, &no1::editUnderline);
	edit->addAction(action);

}

no1::~no1()
{

}
