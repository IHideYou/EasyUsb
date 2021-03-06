/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fixed_usb_UsbDeviceConnection */

#ifndef _Included_com_fixed_usb_UsbDeviceConnection
#define _Included_com_fixed_usb_UsbDeviceConnection
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_open
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1open
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1close
  (JNIEnv *, jobject);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_get_fd
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1get_1fd
  (JNIEnv *, jobject);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_get_desc
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1get_1desc
  (JNIEnv *, jobject);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_claim_interface
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1claim_1interface
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_release_interface
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1release_1interface
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_control_request
 * Signature: (IIII[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1control_1request
  (JNIEnv *, jobject, jint, jint, jint, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_bulk_request
 * Signature: (I[BIII)I
 */
JNIEXPORT jint JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1bulk_1request
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_request_wait
 * Signature: ()Lcom/fixed/usb/UsbRequest;
 */
JNIEXPORT jobject JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1request_1wait
  (JNIEnv *, jobject);

/*
 * Class:     com_fixed_usb_UsbDeviceConnection
 * Method:    native_get_serial
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_fixed_usb_UsbDeviceConnection_native_1get_1serial
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
