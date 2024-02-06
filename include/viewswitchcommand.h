#pragma once

#include "addinbase.h"

class ViewSwitchCommand : public Fusion360::Command {
public:
    explicit ViewSwitchCommand(int viewIndex);
    void Execute() override;
private:
    int viewIndex;
};
