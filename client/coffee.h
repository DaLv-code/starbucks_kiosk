#ifndef COFFEE_H
#define COFFEE_H

#include <QDialog>

namespace Ui {
class coffee;
}

class coffee : public QDialog
{
    Q_OBJECT

public:
    explicit coffee(int sock, QWidget *parent = nullptr);
    ~coffee();

private:
    Ui::coffee *ui;
};

#endif // COFFEE_H
