
#pragma once
#include "stdafx.h"
#include "IConsoleInterface.h"
#include "ConsoleInterfaceBuffer.h"
#include "ConsoleMenuFactory.h"



namespace Interface
{
	class ConsoleInterfaceManager : public IConsoleInterface
	{


	private:

        ConsoleInterfaceBuffer<std::string> stringBuffer;  // Буфер для строк

		std::unique_ptr<IConsoleInterface> currentMenu;

	public:
		
		// Запись в строковый буфер
		void writeToStringBuffer(const std::string& value)	{ stringBuffer.write(value); }

		// Чтение из строкового буфера
		const std::string& readFromStringBuffer() { return stringBuffer.read(); }

        void openMenu(MenuType type) {
            currentMenu = ConsoleMenuFactory::createMenu(type, *this);
        }

        void draw() override {
            if (currentMenu) currentMenu->draw();
        }
        void input() override {
            if (currentMenu) currentMenu->input();
        }
        void show() const {
            if (currentMenu) currentMenu->show();
        }
	};

}