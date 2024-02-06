#include "viewswitchlistener.h"

ViewSwitchListener::ViewSwitchListener(CommandManager& commandManager) : commandManager(commandManager) {}

void ViewSwitchListener::OnNumPadKeyPressed(int numPadKey) {
    // Code to handle numPadKey press
      if (!(GetKeyState(VK_NUMLOCK) &   1)) {
        // If NumLock is off, execute the corresponding command
        commandManager.ExecuteCommand(numPadKey);
    }
}
}
