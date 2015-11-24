#ifndef CARTOONWATER_H
#define CARTOONWATER_H

#include <QWidget>
#include "edge.h"

namespace Ui {
class cartoonWater;
}

class cartoonWater : public QWidget
{
    Q_OBJECT

public:
    explicit cartoonWater(QWidget *parent = 0);
    ~cartoonWater();

protected:
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private slots:
    void on_bdN_editingFinished();

    void on_leftB_clicked();

    void on_rightB_clicked();

private:
    Ui::cartoonWater *ui;
    Edge left;
    Edge right;
    int editMethod;
};

#endif // CARTOONWATER_H
