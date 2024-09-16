#include "newwindow.h"
#include "ui_newwindow.h"

NewWindow::NewWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(QStringLiteral("samp2_4"));
}

NewWindow::~NewWindow()
{
    delete ui;
}

void NewWindow::on_pushButton_clicked(bool checked)
{
    this->close();
}

