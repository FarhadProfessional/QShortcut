#include "mainapp.h"
#include "ui_mainapp.h"

MainApp::MainApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainApp)
{
    ui->setupUi(this);

    QShortcut *shortcut = new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_O), this);
    shortcut->setContext(Qt::ApplicationShortcut);
    connect(shortcut, &QShortcut::activated, this, &MainApp::activeShortcut);

//    ui->actionConnect->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
//    connect(ui->actionConnect, &QAction::triggered, this, &MainApp::actionTrig);

}

MainApp::~MainApp()
{
    delete ui;
}

void MainApp::activeShortcut()
{
    this->close();
}
