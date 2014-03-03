#include "mainwindow.h"
#include "ui_mainwindow.h"

cPanelUser::cPanelUser(QWidget *p_poParent, QString p_qsUserName)
{
    horizontalLayout = new QHBoxLayout( this );
    horizontalLayout->setObjectName( QString::fromUtf8( "horizontalLayout" ) );
    horizontalLayout->setSpacing( 0 );
    horizontalLayout->setMargin( 1 );
    setSizePolicy( QSizePolicy::Expanding, QSizePolicy::Fixed );

    lblUserName = new QLabel( this );
    lblUserName->setObjectName( QString::fromUtf8( "lblUserName" ) );
    lblUserName->setText( p_qsUserName );
    horizontalLayout->addWidget( lblUserName );
}

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_ExitApplication_triggered()
{
    close();
}

void MainWindow::on_action_AddNewUser_triggered()
{

}

void MainWindow::on_action_EditUser_triggered()
{

}

void MainWindow::on_action_DeleteUser_triggered()
{

}
