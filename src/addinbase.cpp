#include "addinbase.h"

void AddInBase::Initialize() {
    
    RegisterKeyPressEventHandler(OnKeyPress);
    void AddInBase::OnKeyPress(int keyCode) {
    // Check if the key pressed is a numpad key
    if (keyCode >= VK_NUMPAD0 && keyCode <= VK_NUMPAD9) {
        // Call the method to handle the numpad key press
        viewSwitchListener.OnNumPadKeyPressed(keyCode);
    }
}
}

void AddInBase::Shutdown() {
    // Shutdown code here
}
