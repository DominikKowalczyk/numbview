// CommandManager.cpp
#include "commandmanager.h"
#include <algorithm> // For std::find_if

void CommandManager::RegisterCommands() {
    // Register commands for switching to views   1 through   9
    for (int i =   1; i <=   9; ++i) {
        commands.push_back(std::make_unique<ViewSwitchCommand>(i));
    }
}

void CommandManager::ExecuteCommand(int numPadKey) {
    // Find the command associated with the numPadKey
    auto commandIter = std::find_if(commands.begin(), commands.end(), [numPadKey](const auto& commandPtr) {
        return commandPtr->GetAssociatedKey() == numPadKey;
    });

    // If the command is found, execute it
    if (commandIter != commands.end()) {
        (*commandIter)->Execute();
    } else {
        // Handle the case where no command is associated with the numPadKey
        // This could involve logging an error or displaying a message to the user
    }
}