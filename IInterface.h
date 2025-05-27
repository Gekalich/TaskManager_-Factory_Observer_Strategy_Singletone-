

/*				  Интерфейс для интерфейсов                  */

//	Нужен, чтобы реализовывать любой желаемый вид взаимодействия с пользователем
//	без ущерба для логики программы. А также для лёгкого применения любой из 
//	последующих реализаций.


/////////////////////////////////////////////////////////////

#pragma once
#include "stdafx.h"

namespace Interface
{ 
	class IInterface
	{
	public:
		virtual void draw() = 0;
		virtual void input() = 0;
		virtual void show() const = 0;

		virtual ~IInterface() = default;
	};

}
