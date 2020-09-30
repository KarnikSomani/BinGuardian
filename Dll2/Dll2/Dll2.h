// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DLL2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DLL2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLL2_EXPORTS
#define DLL2_API __declspec(dllexport)
#else
#define DLL2_API __declspec(dllimport)
#endif

#include <iostream>

using namespace std;

//global functions.
DLL2_API void global_exported(void);
void global_nonexported(void);

//unexported class
class template_nonexported_class {
	template_nonexported_class();
public:
	// TODO: add your methods here.
	void nonexported_class_func_1(void);
	virtual void nonexported_class_func_2(void);
};

// This class is exported from the dll
class DLL2_API template_exported_class {
	template_exported_class();
private :
	void exported_class_func_1(void);
public:
	virtual void exported_class_func_2(void);

};
