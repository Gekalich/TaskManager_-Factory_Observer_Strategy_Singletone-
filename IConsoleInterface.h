
/*				  ��������� ��� ���������� �����������                  */

//	��������������, ��� � ������ ������, ����� draw() ������������ ��� ������ � �����,
//	� show() ��� ��������� ��� ������ �� �����. � ����� ������ ������, ����� �� ��������������
//  ������� � ��������� � GUI, �� ������ ��� �� �������, ������ � ����� ������� ����.
// 
//	��������� ���������� ������ ����������� ��� ���������� ���� �������������, ������� ������� ������ ���

/////////////////////////////////////////////////////////////


#pragma once
#include "stdafx.h"
#include "IInterface.h"

namespace Interface
{
	class IConsoleInterface : public IInterface
	{
	public:
		virtual void draw() = 0; //������ �������� ��������� � ���������
		virtual void input() = 0; //������ �� ����
		virtual void show() const = 0; //������������ �� ������

		virtual ~IConsoleInterface() = default;
	};

}
