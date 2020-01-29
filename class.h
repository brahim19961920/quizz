#include  <QSqlDatabase>
#include <QtWidgets>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include "question.h"
QSqlDatabase connexion();
class principale :public QWidget{
    Q_OBJECT
public :
    principale();
public slots:
    void res();
    QString champ(int ligne,int colonne);
 private :
    static int nbr_click;
    question* q1;
     question* q2;
     question* q3;
      question* q4;
      question* q5;
       question* q6;
    QGridLayout *grid;
    QSqlDatabase bd;
    QPushButton *resultat ;

};




