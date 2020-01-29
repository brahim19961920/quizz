#include "class.h"
int principale::nbr_click=0;
QSqlDatabase connexion(){

    QSqlDatabase  bd;
    bd= QSqlDatabase::addDatabase("QSQLITE");
    bd.setDatabaseName("questions.db");
    bd.open();


  return(bd);

}
void principale::res(){
if (nbr_click==0){
    nbr_click+=1;
    q1->verification();
    q2->verification();
    q3->verification();
    q4->verification();
    q5->verification();
    q6->verification();}

}
QString principale ::champ(int lignes ,int colonnes){
    int indice;
    QSqlQuery q("SELECT * FROM questions");

switch(colonnes){

case (1):
    indice=q.record().indexOf("question");

    break ;
case (2):
    indice=q.record().indexOf("choix1");
    break ;
case (3):
    indice=q.record().indexOf("choix2");
    break ;
case (4):
    indice=q.record().indexOf("choix3");
    break ;

case (5):
    indice=q.record().indexOf("reponse");
    break ;}
 q.seek(lignes);

    return(q.value(indice).toString());


}


principale::principale():QWidget(){
    bd=connexion();
    q1=new question(1,champ(0,1),champ(0,2),champ(0,3),champ(0,4),champ(0,5));
    q2=new question(2,champ(1,1),champ(1,2),champ(1,3),champ(1,4),champ(1,5));
    q3=new question(3,champ(6,1),champ(6,2),champ(6,3),champ(6,4),champ(6,5));
    q4=new question(4,champ(3,1),champ(3,2),champ(3,3),champ(3,4),champ(3,5));
    q5=new question(5,champ(4,1),champ(4,2),champ(4,3),champ(4,4),champ(4,5));
    q6=new question(6,champ(5,1),champ(5,2),champ(5,3),champ(5,4),champ(5,5));
    resultat =new QPushButton("Voir le résultat");
    grid= new QGridLayout ;
    grid->addWidget(q1,0,0);
       grid->addWidget(q2,0,1);
       grid->addWidget(q3,1,0);
          grid->addWidget(q4,1,1);
          grid->addWidget(q5,2,0);
             grid->addWidget(q6,2,1);
               grid->addWidget(resultat,3,0,1,2);
    this->setLayout(grid);
QObject::connect(resultat,SIGNAL(clicked()),this,SLOT(res()));



}
