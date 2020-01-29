#include "question.h"

void question::verification()
{QPalette p;

    if(b1->text()==m_s5){

p.setColor(QPalette::Button,QColor(140,250,140));
b1->setAutoFillBackground(true);
b1->setPalette(p);
    }
    if(b2->text()==m_s5){

p.setColor(QPalette::Button,QColor(140,250,140));
b2->setAutoFillBackground(true);
b2->setPalette(p);
    }
    if(b3->text()==m_s5){

p.setColor(QPalette::Button,QColor(140,250,140));
b3->setAutoFillBackground(true);
b3->setPalette(p);
    }
if(b1->isChecked()){
    if (b1->text() !=m_s5)
    {p.setColor(QPalette::Button,QColor(225,60,1));
        b1->setAutoFillBackground(true);
        b1->setPalette(p);
}

}

if(b2->isChecked()){
    if (b2->text() !=m_s5)
    {p.setColor(QPalette::Button,QColor(225,60,1));
        b2->setAutoFillBackground(true);
        b2->setPalette(p);
}}


if(b3->isChecked()){
    if (b3->text() !=m_s5)
    {p.setColor(QPalette::Button,QColor(225,60,1));
        b3->setAutoFillBackground(true);
        b3->setPalette(p);
}}

}

question::question(int num,QString s1,QString s2,QString s3,QString s4,QString s5):QWidget()
{    m_num=num;
     m_s1=s1;
     m_s2=s2;
     m_s3=s3;
     m_s4=s5;
     m_s5=s5;

     b1=new QRadioButton(s2);

     b2=new QRadioButton(s3);
     b3=new QRadioButton(s4);

    form =new QFormLayout;
    form->addRow(b1);
    form->addRow(b2);
    form->addRow(b3);
    QString ch("Question "+QString::number(num)+"\n");
    label=new QLabel(ch);
    ch=s1;
    box=new QGroupBox(ch);
    box->setLayout(form);
    layout=new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(box);
    this->setLayout(layout);


}
