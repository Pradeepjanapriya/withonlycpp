#define WINVER 0x0500
#include <Windows.h>
#include <pdh.h>
#include "tchar.h"

#include <array>
#include <iostream>
#include <string>
#include <stdexcept>

#include "stdlib.h"
#include <jni.h>

#include <memory>
#include <functional>

using std::string;
using std::function;
using std::unique_ptr;
using std::shared_ptr;
using std::cout;
using std::endl;

using namespace std;


#include "HelloWorld.h"

JNIEXPORT void JNICALL Java_HelloWorld_print(JNIEnv *, jobject)
{
//printf("Hello World!\n");


 cout << "I AM FROM VOID METHOD." << endl;

return;
}