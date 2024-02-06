#pragma once

#include <vector>
#include <memory>
#include "viewswitchcommand.h"

class CommandManager {
public:
    void RegisterCommands();
    void ExecuteCommand(int numPadKey);
private:
    std::vector<std::unique_ptr<ViewSwitchCommand>> commands;
};
