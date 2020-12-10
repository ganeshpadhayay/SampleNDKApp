//
// Created by B0218868 on 10/12/20.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jobjectArray JNICALL
Java_com_example_samplendkapp_TestNDK_getAPIKey(JNIEnv *env, jobject /* this */) {
    jobjectArray ret;
    
    int i;

    char *data[5] = {"A", "B", "C", "D", "E"};

    ret = (jobjectArray) env->NewObjectArray(5, env->FindClass("java/lang/String"),
                                             env->NewStringUTF(""));

    for (i = 0; i < 5; i++) env->SetObjectArrayElement(ret, i, env->NewStringUTF(data[i]));

    return (ret);
}