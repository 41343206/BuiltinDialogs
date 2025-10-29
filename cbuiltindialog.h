#ifndef CBUILTINDIALOG_H
#define CBUILTINDIALOG_H

#include <QDialog>
#include<QPushButton>
#include<QTextEdit>
#include<QtWidgets>

class CBuiltinDialog : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDialog(QWidget *parent = nullptr);
    ~CBuiltinDialog();

private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
    QPushButton *textColorPushBtn;
private slots :
    void doPushBtn();
    void doTextColor();
};
#endif // CBUILTINDIALOG_H
