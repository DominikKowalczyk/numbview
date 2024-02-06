#pragma once

#include "commandmanager.h"

class ViewSwitchListener {
public:
    explicit ViewSwitchListener(CommandManager& commandManager);
    void OnNumPadKeyPressed(int numPadKey);
private:
    CommandManager& commandManager;
};
