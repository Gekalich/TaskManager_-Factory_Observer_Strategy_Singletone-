В основе лежит паттерн MVC









enum class MenuType { Main, Settings, Pause, Help };

class IMenu {
public:
    virtual void draw() = 0;
    virtual void input() = 0;
    virtual ~IMenu() = default;
};

class MainMenu : public IMenu {
    void draw() override { /*...*/ }
    void input() override { /*...*/ }
};

class SettingsMenu : public IMenu {
    void draw() override { /*...*/ }
    void input() override { /*...*/ }
};

class MenuFactory {
public:
    static std::unique_ptr<IMenu> createMenu(MenuType type) {
        switch(type) {
            case MenuType::Main:     return std::make_unique<MainMenu>();
            case MenuType::Settings: return std::make_unique<SettingsMenu>();
            // другие меню...
            default: return nullptr;
        }
    }
};

class InterfaceManager {
private:
    std::unique_ptr<IMenu> currentMenu;

public:
    void openMenu(MenuType type) {
        currentMenu = MenuFactory::createMenu(type);
    }

    void draw() {
        if(currentMenu) currentMenu->draw();
    }

    void input() {
        if(currentMenu) currentMenu->input();
    }
};
