#include "ConsoleMenuFactory.h"
#include "ConsoleMainMenu.h"
// #include "OtherMenu.h" è ò.ï.

namespace Interface {

    std::unique_ptr<IConsoleInterface> ConsoleMenuFactory::createMenu(MenuType type, ConsoleInterfaceManager& mgr) {
        switch (type) {
        case MenuType::Main:
            return std::make_unique<ConsoleMainMenu>(mgr);
            // case MenuType::Settings:
            //     return std::make_unique<SettingsMenu>(mgr);
            // ...
        default:
            return nullptr;
        }
    }

}