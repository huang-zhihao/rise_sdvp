#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void timerSlot();

    void on_runSim_clicked();
    void on_resetSim_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *mTimer;

};

#endif // MAINWINDOW_H
