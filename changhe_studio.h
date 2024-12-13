#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_changhe_studio.h"

class changhe_studio : public QMainWindow
{
    Q_OBJECT

public:
    changhe_studio(QWidget *parent = nullptr);
    ~changhe_studio();

private:
    Ui::changhe_studioClass ui;
};
