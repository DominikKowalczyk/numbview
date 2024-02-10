#pragma once

#include <Fusion360API.h>
#include <Windows.h>
#include "commandmanager.h"
#include "configmanager.h"
#include "viewswitchlistener.h"
#include "userinterface.h"
#include "globalexceptionhandler.h"
#include "localizationmanager.h"

class AddInBase : public Fusion360::AddInBase {
public:
    void Initialize() override;
    void Shutdown() override;

    // Additional methods exposed by the add-in
    void TriggerViewSwitch(int viewIndex);
    ConfigManager& GetConfigManager();
    LocalizationManager& GetLocalizationManager();

    // Event handler for the keyDown event.
    class KeyDownEventHandler : public adsk::core::KeyboardEventHandler
    {
    public:
        void notify(const adsk::core::Ptr<adsk::core::KeyboardEventArgs>& eventArgs) override
        {
            // Check if the key pressed is a numpad key
            int keyCode = eventArgs->keyCode();
            if (keyCode >= VK_NUMPAD0 && keyCode <= VK_NUMPAD9) {
                // Call the method to handle the numpad key press
                viewSwitchListener.OnNumPadKeyPressed(keyCode);
            }
        }
    };

private:
    CommandManager commandManager;
    ConfigManager configManager;
    ViewSwitchListener viewSwitchListener;
    UserInterface userInterface;
    GlobalExceptionHandler globalExceptionHandler;
    LocalizationManager localizationManager;
};