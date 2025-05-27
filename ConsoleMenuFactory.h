#pragma once
#include <memory>
#include "IConsoleInterface.h"

namespace Interface {

    enum class MenuType { Main, Settings, Pause, Help };

    class ConsoleInterfaceManager; // forward declaration

    class ConsoleMenuFactory {
    public:
        static std::unique_ptr<IConsoleInterface> createMenu(MenuType type, ConsoleInterfaceManager& mgr);
    };

}