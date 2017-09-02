#ifndef NO1_H
#define NO1_H

#include <QtWidgets/QMainWindow>

QT_BEGIN_NAMESPACE
class QTextEdit;
QT_END_NAMESPACE

class no1 : public QMainWindow
{
	Q_OBJECT

public:
	no1(QWidget *parent = 0);
	~no1();

public slots:
	void fileOpen();
	void fileSave();

	void editNormal();
	void editBold();
	void editUnderline();

	void editAdvanceFont();
	void editAdvaceStyle();

	void helpAbout();
	void helpAboutQt();

private:
	QTextEdit *editor;
};

#endif // NO1_H
