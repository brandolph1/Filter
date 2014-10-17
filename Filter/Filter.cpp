// Filter.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace System::IO;

int main(array<System::String ^> ^args)
{
	StreamReader^ in;

	if (args->Length > 0)
	{
		FileInfo^ flog = gcnew FileInfo(args[0]);
		in = flog->OpenText();
	}
	else
	{
		in = gcnew StreamReader(Console::In);
	}


    return 0;
}
