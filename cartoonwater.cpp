#include "cartoonwater.h"
#include "ui_cartoonwater.h"

cartoonWater::cartoonWater(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cartoonWater)
{
    ui->setupUi(this);
    left.number = 20;
    right.number = 20;
    editMethod = 0;
}

cartoonWater::~cartoonWater()
{
    delete ui;
}

void cartoonWater::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == QT::Leftbutton)
    {
        if(editMethod == 1) left.number.append(event->pos());
        if(editMethod == 2)
    }
}

void cartoonWater::on_bdN_editingFinished()
{
    left.number = ui->bdN->text().toInt();
    right.number = ui->bdN->text().toInt();
}

void cartoonWater::on_leftB_clicked()
{
    ui->rightB->setEnabled(true);
    editMethod = 1;
    left.point.clear();
    ui->leftB->setDisabled(true);
}


void cartoonWater::on_rightB_clicked()
{
    ui->leftB->setEnabled(true);
    editMethod = 2;
    right.point.clear();
    ui->rightB->setDisabled(true);
}
