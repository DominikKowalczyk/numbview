#pragma once

class GlobalExceptionHandler {
public:
    static void Initialize();
    static void LogException(const std::exception& e);
};
