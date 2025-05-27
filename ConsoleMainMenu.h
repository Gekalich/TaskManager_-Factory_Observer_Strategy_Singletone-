

#pragma once
#include "stdafx.h"
#include "IConsoleInterface.h"

namespace Interface
{
    class ConsoleInterfaceManager; // forward declaration

	class ConsoleMainMenu : public IConsoleInterface
	{
	private:
        ConsoleInterfaceManager& manager;

    public:
        explicit ConsoleMainMenu(ConsoleInterfaceManager& mgr) : manager(mgr) {}

        void draw() override {
            // ����������
        }
        void input() override;
        void show() const {
            // ����������
        }
		~ConsoleMainMenu() = default;
	};

}