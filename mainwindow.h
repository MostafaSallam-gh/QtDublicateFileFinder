#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include<QString>
#include<QTreeWidget>
namespace Ui
{
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT
    bool setData(const QModelIndex &index, const QVariant &value, int role);
public:
    void AddRoot(QByteArray name,QVector<QString> Vec);
    void AddChild(QTreeWidgetItem *parent,QString name);
    explicit MainWindow(QWidget *parent = 0);
    void Open_Dir(QString Dir_Name, QMap < QByteArray, QVector<QString> > &tree);
    QByteArray getCRC32(QString filePath);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif
