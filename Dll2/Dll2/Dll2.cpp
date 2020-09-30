// Dll2.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Dll2.h"


// This is an example of an exported function.
DLL2_API void global_exported(void)
{
    cout << "global_exported" << endl;
    cout << "printing from exported function." << endl;
    return;
}

void global_nonexported(void)
{
    cout << "global_nonexported" << endl;
    cout << "printing from nonexported function." << endl;
    return;
}

// This is the constructor of a class that has been exported.
template_exported_class::template_exported_class()
{
    return;
}

void template_exported_class::exported_class_func_1()
{
    cout << "exported_class_func_1" << endl;
    cout << "exported class" << endl;
    return;
}

void template_exported_class::exported_class_func_2()
{
    cout << "exported_class_func_2" << endl;
    cout << "exported class" << endl;
    return;
}

/***********************************************/


// This is the constructor of a class that has been exported.
template_nonexported_class::template_nonexported_class()
{
    return;
}

void template_nonexported_class::nonexported_class_func_1()
{
    cout << "class_1_func_1" << endl;
    cout << "non exported class" << endl;
    return;
}

void template_nonexported_class::nonexported_class_func_2()
{
    cout << "class_1_func_2" << endl;
    cout << "non exported class" << endl;
    return;
}
