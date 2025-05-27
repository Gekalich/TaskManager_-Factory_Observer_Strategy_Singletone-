
#pragma once
#include "stdafx.h"

namespace Interface
{
	template <typename T>
	class ConsoleInterfaceBuffer
	{
	private:
		T data;
	public:

		void write(const T& value)	{data = value;}

		const T& read()	{return data;}
	};


}