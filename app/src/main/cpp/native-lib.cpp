//
// Created by bpradhan on 15-04-2019.
//

#include<jni.h>
#include<string>
extern "C" JNIEXPORT jstring JNICALL Java_com_example_myapplication_MainActivity_get(JNIEnv *env,jobject){
std::string hello = "Hello from c++";
return env->NewStringUTF(hello.c_str());
}
//This file is not part of the project.Please include it in the appropriate build file(build,CMakeLists.txt or Android.mk etc)

