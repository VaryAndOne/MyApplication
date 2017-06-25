#include<jni.h>
#include<string.h>

jstring Java_com_example_administrator_myapplication_MainActivity_helloWorld(JNIEnv* env,jobject obj){

     return (*env)->NewStringUTF(env,"wonderful");

}