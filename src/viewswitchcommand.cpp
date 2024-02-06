// ViewSwitchCommand.cpp
#include "viewswitchcommand.h"
#include "addinbase.h" // Include the AddInBase header if needed

void ViewSwitchCommand::Execute() {
    // Access the active document
    auto app = adsk::core::Application::get();
    auto doc = app.activeDocument;

    // Access the active viewport and its camera
    auto viewport = doc.activeViewport;
    auto camera = viewport.camera;

    // Set the view orientation of the camera based on the viewIndex
    switch (viewIndex) {
        case   1: // Bottom-left view
            camera.viewOrientation = adsk::core::IsoBottomLeftViewOrientation;
            break;
        case   2: // Bottom view
            camera.viewOrientation = adsk::core::BottomViewOrientation;
            break;
        case   3: // Bottom-right view
            camera.viewOrientation = adsk::core::IsoBottomRightViewOrientation;
            break;
        case   4: // Left view
            camera.viewOrientation = adsk::core::LeftViewOrientation;
            break;
        case   5: // Front view
            camera.viewOrientation = adsk::core::FrontViewOrientation;
            break;
        case   6: // Right view
            camera.viewOrientation = adsk::core::RightViewOrientation;
            break;
        case   7: // Top-left view
            camera.viewOrientation = adsk::core::IsoTopLeftViewOrientation;
            break;
        case   8: // Top view
            camera.viewOrientation = adsk::core::TopViewOrientation;
            break;
        case   9: // Top-right view
            camera.viewOrientation = adsk::core::IsoTopRightViewOrientation;
            break;
        // Add cases for other views as needed
        default:
            // Handle the case where no command is associated with the viewIndex
            // This could involve logging an error or displaying a message to the user
            break;
    }

    // Refresh the viewport to apply the changes
    viewport.refresh();