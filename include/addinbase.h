#pragma once

#include <Fusion360API.h>
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

private:
    CommandManager commandManager;
    ConfigManager configManager;
    ViewSwitchListener viewSwitchListener;
    UserInterface userInterface;
    GlobalExceptionHandler globalExceptionHandler;
    LocalizationManager localizationManager;
};