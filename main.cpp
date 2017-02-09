#include "mainwindow.h"
#include <QApplication>
#include<QVector>
#include<QMap>
#include<dirent.h>
#include<QString>
#include<QDebug>
#include<QVBoxLayout>
#include<QPushButton>
#include<QTreeWidget>
#include<QString>
#include<QFlags>
#include<QDebug>
#include<QDir>
#include<QAbstractItemModel>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
