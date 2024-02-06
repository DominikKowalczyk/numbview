#pragma once

#include <Fusion360API.h>

class AddInBase : public Fusion360::AddInBase {
public:
    void Initialize() override;
    void Shutdown() override;
};
