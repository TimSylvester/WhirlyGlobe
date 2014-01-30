#import <jni.h>
#import "handle.h"
#import "com_mousebirdconsulting_maply_SphericalMercatorCoordSystem.h"
#import "WhirlyGlobe.h"

using namespace WhirlyKit;

JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_SphericalMercatorCoordSystem_initialise
  (JNIEnv *env, jobject obj)
{
	try
	{
		SphericalMercatorCoordSystem *coordSystem = new SphericalMercatorCoordSystem();
		setHandle(env,obj,coordSystem);
	}
	catch (...)
	{
		__android_log_print(ANDROID_LOG_VERBOSE, "Maply", "Crash in SphericalMercatorCoordSystem::initialise()");
	}
}
