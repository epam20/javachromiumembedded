/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cef_CefBrowser_N */

#ifndef _Included_org_cef_CefBrowser_N
#define _Included_org_cef_CefBrowser_N
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_Close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1Close
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_GoBack
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1GoBack
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_GoForward
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1GoForward
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_GetIdentifier
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_cef_CefBrowser_1N_N_1GetIdentifier
  (JNIEnv *, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_LoadURL
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1LoadURL
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_WasResized
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1WasResized
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_Invalidate
 * Signature: (Ljava/awt/Rectangle;)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1Invalidate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_SendKeyEvent
 * Signature: (Ljava/awt/event/KeyEvent;)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1SendKeyEvent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_SendMouseEvent
 * Signature: (Ljava/awt/event/MouseEvent;)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1SendMouseEvent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_SendMouseWheelEvent
 * Signature: (Ljava/awt/event/MouseWheelEvent;)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1SendMouseWheelEvent
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cef_CefBrowser_N
 * Method:    N_SetFocus
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_cef_CefBrowser_1N_N_1SetFocus
  (JNIEnv *, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
