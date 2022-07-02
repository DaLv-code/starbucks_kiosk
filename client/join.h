#ifndef JOIN_H
#define JOIN_H

#include <QDialog>

namespace Ui {
class join;
}

class join : public QDialog
{
    Q_OBJECT

public:
    explicit join(QWidget *parent = nullptr);
    ~join();

private:
    Ui::join *ui;
};

#endif // JOIN_H
