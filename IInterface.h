

/*				  ��������� ��� �����������                  */

//	�����, ����� ������������� ����� �������� ��� �������������� � �������������
//	��� ������ ��� ������ ���������. � ����� ��� ������ ���������� ����� �� 
//	����������� ����������.


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
