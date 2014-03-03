#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QString>

class cPanelUser : public QFrame
{
    Q_OBJECT

public:
    cPanelUser( QWidget *p_poParent = 0, QString p_qsUserName = "" );

public:
    QHBoxLayout     *horizontalLayout;
    QLabel          *lblUserName;
    QSpacerItem     *horizontalSpacer1;
    QPushButton     *pbUserEnable;
};

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_ExitApplication_triggered();

    void on_action_AddNewUser_triggered();

    void on_action_EditUser_triggered();

    void on_action_DeleteUser_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
