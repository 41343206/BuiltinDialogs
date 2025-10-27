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
private slots :
    void doPushBtn();
};
#endif // CBUILTINDIALOG_H
