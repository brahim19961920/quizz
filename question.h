#ifndef QUESTION_H
#define QUESTION_H
#include <QtWidgets>
#include <QPalette>
class question :public QWidget{

public :
    question(int num,QString s1,QString s2,QString s3,QString s4,QString s5);
    void verification();
private:
    int m_num;
    QString m_s1;

    QString m_s2;
    QString m_s3;
    QString m_s4;
    QString m_s5;

    QGroupBox *box;
    QVBoxLayout *layout;
    QRadioButton *b1;
    QRadioButton *b2;
    QRadioButton *b3;
    QFormLayout *form;
    QLabel *label;





};
#endif // QUESTION_H
