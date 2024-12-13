#include "changhe_studio.h"

#include "ToolWindowManager.h"

changhe_studio::changhe_studio(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.tool_window_manager->addToolWindow(new QWidget(this), ToolWindowManager::LastUsedArea);
}

changhe_studio::~changhe_studio()
{}
