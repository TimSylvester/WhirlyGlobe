/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebirdconsulting_maply_QuadPagingLayer */

#ifndef _Included_com_mousebirdconsulting_maply_QuadPagingLayer
#define _Included_com_mousebirdconsulting_maply_QuadPagingLayer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    geoBoundsForTileNative
 * Signature: (IIILcom/mousebirdconsulting/maply/Point2d;Lcom/mousebirdconsulting/maply/Point2d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_geoBoundsForTileNative
  (JNIEnv *, jobject, jint, jint, jint, jobject, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    initialise
 * Signature: (Lcom/mousebirdconsulting/maply/CoordSystem;Lcom/mousebirdconsulting/maply/QuadPagingLayer/PagingInterface;)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_initialise
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_dispose
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeStartLayer
 * Signature: (Lcom/mousebirdconsulting/maply/MapScene;Lcom/mousebirdconsulting/maply/MaplyRenderer;Lcom/mousebirdconsulting/maply/Point2d;Lcom/mousebirdconsulting/maply/Point2d;II)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeStartLayer
  (JNIEnv *, jobject, jobject, jobject, jobject, jobject, jint, jint);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeShutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeShutdown
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeViewUpdate
 * Signature: (Lcom/mousebirdconsulting/maply/ViewState;)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeViewUpdate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeEvalStep
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeEvalStep
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeRefresh
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeRefresh
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeTileDidLoad
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeTileDidLoad
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_mousebirdconsulting_maply_QuadPagingLayer
 * Method:    nativeTileDidNotLoad
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_QuadPagingLayer_nativeTileDidNotLoad
  (JNIEnv *, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
