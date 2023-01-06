#ifndef FM_LISTADODEESTORDENADOXNOTA_H
#define FM_LISTADODEESTORDENADOXNOTA_H

#include <QDialog>

namespace Ui {
class fm_listadodeestordenadoxnota;
}

class fm_listadodeestordenadoxnota : public QDialog
{
    Q_OBJECT

public:
    explicit fm_listadodeestordenadoxnota(QWidget *parent = 0);
    ~fm_listadodeestordenadoxnota();

private:
    Ui::fm_listadodeestordenadoxnota *ui;
};

#endif // FM_LISTADODEESTORDENADOXNOTA_H
