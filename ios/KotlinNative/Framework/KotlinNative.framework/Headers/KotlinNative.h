#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class YMKMap, KotlinNativeArrayWrapper<T>, KotlinNativeObservable<T>, KotlinNativeKotlinEnum<E>, KotlinNativeTiltButtonState, KotlinNativeAnimationType, YMKAnimation, KotlinNativeMYMKYMKAnimationType, KotlinNativeCameraPosition, KotlinNativeCameraUpdateSource, KotlinNativePoint, KotlinNativeLocation, YMKLocationManager, KotlinNativeAnimation, YMKMapKit, KotlinNativeKotlinThrowable, KotlinNativeKotlinAbstractCoroutineContextElement, KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher, KotlinNativeMYMKYMKCameraUpdateSource, YMKCameraPosition, YMKPoint, YMKLocation, KotlinNativeCompletable, KotlinNativeSingle<T>, KotlinNativeKotlinArray<T>, KotlinNativeKotlinx_coroutines_coreCancellationException, KotlinNativeKotlinException, KotlinNativeKotlinRuntimeException, KotlinNativeKotlinIllegalStateException, KotlinNativeKotlinx_coroutines_coreAtomicDesc, KotlinNativeKotlinx_coroutines_coreAtomicOp<__contravariant T>, KotlinNativeKotlinx_coroutines_coreOpDescriptor;

@protocol KotlinNativeMap, KotlinNativeKotlinx_coroutines_coreFlow, KotlinNativeKotlinComparable, KotlinNativeLocationListener, KotlinNativeLocationManager, KotlinNativeCameraListener, KotlinNativeCameraCallback, KotlinNativeMapKit, KotlinNativeCompletablePublisher, KotlinNativeSubscription, KotlinNativeCompletableSubscriber, KotlinNativeObservablePublisher, KotlinNativeObservableSubscriber, KotlinNativeSinglePublisher, KotlinNativeSingleSubscriber, KotlinNativeKotlinCoroutineContextKey, KotlinNativeKotlinCoroutineContextElement, KotlinNativeKotlinCoroutineContext, KotlinNativeKotlinContinuation, KotlinNativeKotlinContinuationInterceptor, KotlinNativeKotlinx_coroutines_coreRunnable, KotlinNativeKotlinx_coroutines_coreDisposableHandle, KotlinNativeKotlinx_coroutines_coreCancellableContinuation, KotlinNativeKotlinx_coroutines_coreDelay, KotlinNativeKotlinCEnum, KotlinNativeKotlinSuspendFunction0, KotlinNativeKotlinx_coroutines_coreJob, KotlinNativeKotlinSuspendFunction, KotlinNativeKotlinx_coroutines_coreChildHandle, KotlinNativeKotlinx_coroutines_coreChildJob, KotlinNativeKotlinSequence, KotlinNativeKotlinx_coroutines_coreSelectClause0, KotlinNativeKotlinIterator, KotlinNativeKotlinx_coroutines_coreParentJob, KotlinNativeKotlinx_coroutines_coreSelectInstance;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface KotlinNativeMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface KotlinNativeMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface KotlinNativeNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface KotlinNativeByte : KotlinNativeNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface KotlinNativeUByte : KotlinNativeNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface KotlinNativeShort : KotlinNativeNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface KotlinNativeUShort : KotlinNativeNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface KotlinNativeInt : KotlinNativeNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface KotlinNativeUInt : KotlinNativeNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface KotlinNativeLong : KotlinNativeNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface KotlinNativeULong : KotlinNativeNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface KotlinNativeFloat : KotlinNativeNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface KotlinNativeDouble : KotlinNativeNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface KotlinNativeBoolean : KotlinNativeNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayWrapper")))
@interface KotlinNativeArrayWrapper<T> : KotlinBase
- (instancetype)initWithValue:(NSArray<T> *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<T> *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("MainScreenModel")))
@protocol KotlinNativeMainScreenModel
@required
- (void)didDisappear __attribute__((swift_name("didDisappear()")));
- (void)onTapMyLocationButton __attribute__((swift_name("onTapMyLocationButton()")));
- (void)willAppearMap:(id<KotlinNativeMap>)map __attribute__((swift_name("willAppear(map:)")));
@property id<KotlinNativeKotlinx_coroutines_coreFlow> status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainScreenModelIos")))
@interface KotlinNativeMainScreenModelIos : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)didDisappear __attribute__((swift_name("didDisappear()")));
- (void)onTapMyLocationButton __attribute__((swift_name("onTapMyLocationButton()")));
- (void)willAppearMap:(YMKMap *)map __attribute__((swift_name("willAppear(map:)")));
@property KotlinNativeObservable<KotlinNativeArrayWrapper<NSString *> *> *status __attribute__((swift_name("status")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KotlinNativeKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KotlinNativeKotlinEnum<E> : KotlinBase <KotlinNativeKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TiltButtonState")))
@interface KotlinNativeTiltButtonState : KotlinNativeKotlinEnum<KotlinNativeTiltButtonState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) KotlinNativeTiltButtonState *flat __attribute__((swift_name("flat")));
@property (class, readonly) KotlinNativeTiltButtonState *perspective __attribute__((swift_name("perspective")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(KotlinNativeTiltButtonState *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Animation")))
@interface KotlinNativeAnimation : KotlinBase
- (instancetype)initWithType:(KotlinNativeAnimationType *)type duration:(float)duration __attribute__((swift_name("init(type:duration:)"))) __attribute__((objc_designated_initializer));
- (float)getDuration __attribute__((swift_name("getDuration()")));
- (KotlinNativeAnimationType *)getType __attribute__((swift_name("getType()")));
- (YMKAnimation *)toNative __attribute__((swift_name("toNative()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AnimationType")))
@interface KotlinNativeAnimationType : KotlinNativeKotlinEnum<KotlinNativeAnimationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) KotlinNativeAnimationType *smooth __attribute__((swift_name("smooth")));
@property (class, readonly) KotlinNativeAnimationType *linear __attribute__((swift_name("linear")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(KotlinNativeAnimationType *)other __attribute__((swift_name("compareTo(other:)")));
- (KotlinNativeMYMKYMKAnimationType *)toNative __attribute__((swift_name("toNative()")));
@end;

__attribute__((swift_name("CameraCallback")))
@protocol KotlinNativeCameraCallback
@required
- (void)onMoveFinishedVar1:(BOOL)var1 __attribute__((swift_name("onMoveFinished(var1:)")));
@end;

__attribute__((swift_name("CameraListener")))
@protocol KotlinNativeCameraListener
@required
- (void)onCameraPositionChangedMap:(id<KotlinNativeMap>)map cameraPosition:(KotlinNativeCameraPosition *)cameraPosition updateSource:(KotlinNativeCameraUpdateSource *)updateSource finished:(BOOL)finished __attribute__((swift_name("onCameraPositionChanged(map:cameraPosition:updateSource:finished:)")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("CameraListenerWrapper")))
@interface KotlinNativeCameraListenerWrapper : NSObject
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraPosition")))
@interface KotlinNativeCameraPosition : KotlinBase
- (instancetype)initWithTarget:(KotlinNativePoint *)target zoom:(float)zoom azimuth:(float)azimuth tilt:(float)tilt __attribute__((swift_name("init(target:zoom:azimuth:tilt:)"))) __attribute__((objc_designated_initializer));
- (float)getAzimuth __attribute__((swift_name("getAzimuth()")));
- (KotlinNativePoint *)getTarget __attribute__((swift_name("getTarget()")));
- (float)getTilt __attribute__((swift_name("getTilt()")));
- (float)getZoom __attribute__((swift_name("getZoom()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraUpdateSource")))
@interface KotlinNativeCameraUpdateSource : KotlinNativeKotlinEnum<KotlinNativeCameraUpdateSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) KotlinNativeCameraUpdateSource *gestures __attribute__((swift_name("gestures")));
@property (class, readonly) KotlinNativeCameraUpdateSource *application __attribute__((swift_name("application")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(KotlinNativeCameraUpdateSource *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface KotlinNativeLocation : KotlinBase
- (instancetype)initWithPosition:(KotlinNativePoint *)position __attribute__((swift_name("init(position:)"))) __attribute__((objc_designated_initializer));
- (KotlinNativePoint *)getPosition __attribute__((swift_name("getPosition()")));
@end;

__attribute__((swift_name("LocationListener")))
@protocol KotlinNativeLocationListener
@required
- (void)onLocationUpdatedLocation:(KotlinNativeLocation *)location __attribute__((swift_name("onLocationUpdated(location:)")));
@end;

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("LocationListenerWrapper")))
@interface KotlinNativeLocationListenerWrapper : NSObject
@end;

__attribute__((swift_name("LocationManager")))
@protocol KotlinNativeLocationManager
@required
- (void)requestSingleUpdateListener:(id<KotlinNativeLocationListener>)listener __attribute__((swift_name("requestSingleUpdate(listener:)")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)suspend __attribute__((swift_name("suspend()")));
- (void)unsubscribeListener:(id<KotlinNativeLocationListener>)listener __attribute__((swift_name("unsubscribe(listener:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationManagerWrapper")))
@interface KotlinNativeLocationManagerWrapper : KotlinBase <KotlinNativeLocationManager>
- (instancetype)initWithImpl:(YMKLocationManager *)impl __attribute__((swift_name("init(impl:)"))) __attribute__((objc_designated_initializer));
- (void)requestSingleUpdateListener:(id<KotlinNativeLocationListener>)listener __attribute__((swift_name("requestSingleUpdate(listener:)")));
- (void)resume __attribute__((swift_name("resume()")));
- (void)suspend __attribute__((swift_name("suspend()")));
- (void)unsubscribeListener:(id<KotlinNativeLocationListener>)listener __attribute__((swift_name("unsubscribe(listener:)")));
@end;

__attribute__((swift_name("Map")))
@protocol KotlinNativeMap
@required
- (void)addCameraListenerVar1:(id<KotlinNativeCameraListener>)var1 __attribute__((swift_name("addCameraListener(var1:)")));
- (KotlinNativeCameraPosition *)getCameraPosition __attribute__((swift_name("getCameraPosition()")));
- (void)moveCameraPosition:(KotlinNativeCameraPosition *)cameraPosition animation:(KotlinNativeAnimation *)animation callback:(id<KotlinNativeCameraCallback> _Nullable)callback __attribute__((swift_name("move(cameraPosition:animation:callback:)")));
- (void)removeCameraListenerVar1:(id<KotlinNativeCameraListener>)var1 __attribute__((swift_name("removeCameraListener(var1:)")));
@end;

__attribute__((swift_name("MapKit")))
@protocol KotlinNativeMapKit
@required
- (id<KotlinNativeLocationManager>)createLocationManager __attribute__((swift_name("createLocationManager()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapKitFactory")))
@interface KotlinNativeMapKitFactory : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapKitFactory __attribute__((swift_name("init()")));
- (id<KotlinNativeMapKit> _Nullable)instance __attribute__((swift_name("instance()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapKitWrapper")))
@interface KotlinNativeMapKitWrapper : KotlinBase <KotlinNativeMapKit>
- (instancetype)initWithImpl:(YMKMapKit *)impl __attribute__((swift_name("init(impl:)"))) __attribute__((objc_designated_initializer));
- (id<KotlinNativeLocationManager>)createLocationManager __attribute__((swift_name("createLocationManager()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapWrapper")))
@interface KotlinNativeMapWrapper : KotlinBase <KotlinNativeMap>
- (instancetype)initWithImpl:(YMKMap *)impl __attribute__((swift_name("init(impl:)"))) __attribute__((objc_designated_initializer));
- (void)addCameraListenerVar1:(id<KotlinNativeCameraListener>)listener __attribute__((swift_name("addCameraListener(var1:)")));
- (KotlinNativeCameraPosition *)getCameraPosition __attribute__((swift_name("getCameraPosition()")));
- (void)moveCameraPosition:(KotlinNativeCameraPosition *)cameraPosition animation:(KotlinNativeAnimation *)animation callback:(id<KotlinNativeCameraCallback> _Nullable)callback __attribute__((swift_name("move(cameraPosition:animation:callback:)")));
- (void)removeCameraListenerVar1:(id<KotlinNativeCameraListener>)listener __attribute__((swift_name("removeCameraListener(var1:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface KotlinNativePoint : KotlinBase
- (instancetype)initWithLat:(double)lat lon:(double)lon __attribute__((swift_name("init(lat:lon:)"))) __attribute__((objc_designated_initializer));
- (double)getLatitude __attribute__((swift_name("getLatitude()")));
- (double)getLongitude __attribute__((swift_name("getLongitude()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Completable")))
@interface KotlinNativeCompletable : KotlinBase
- (instancetype)initWithPublisher:(id<KotlinNativeCompletablePublisher>)publisher __attribute__((swift_name("init(publisher:)"))) __attribute__((objc_designated_initializer));
- (id<KotlinNativeSubscription>)subscribeSubscriber:(id<KotlinNativeCompletableSubscriber>)subscriber __attribute__((swift_name("subscribe(subscriber:)")));
@end;

__attribute__((swift_name("CompletableSubscriber")))
@protocol KotlinNativeCompletableSubscriber
@required
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorT:(KotlinNativeKotlinThrowable *)t __attribute__((swift_name("onError(t:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Completable.LambdaSubscriberImpl")))
@interface KotlinNativeCompletableLambdaSubscriberImpl : KotlinBase <KotlinNativeCompletableSubscriber>
- (instancetype)initWithOnErrorLambda:(void (^)(KotlinNativeKotlinThrowable *))onErrorLambda onCompleteLambda:(void (^)(void))onCompleteLambda __attribute__((swift_name("init(onErrorLambda:onCompleteLambda:)"))) __attribute__((objc_designated_initializer));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorT:(KotlinNativeKotlinThrowable *)t __attribute__((swift_name("onError(t:)")));
@end;

__attribute__((swift_name("CompletablePublisher")))
@protocol KotlinNativeCompletablePublisher
@required
- (id<KotlinNativeSubscription>)subscribeS:(id<KotlinNativeCompletableSubscriber>)s __attribute__((swift_name("subscribe(s:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeSubscription")))
@interface KotlinNativeCompositeSubscription : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addSubscription:(id<KotlinNativeSubscription>)subscription __attribute__((swift_name("add(subscription:)")));
- (void)clear __attribute__((swift_name("clear()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Observable")))
@interface KotlinNativeObservable<T> : KotlinBase
- (instancetype)initWithPublisher:(id<KotlinNativeObservablePublisher>)publisher __attribute__((swift_name("init(publisher:)"))) __attribute__((objc_designated_initializer));
- (id<KotlinNativeSubscription>)subscribeSubscriber:(id<KotlinNativeObservableSubscriber>)subscriber __attribute__((swift_name("subscribe(subscriber:)")));
@end;

__attribute__((swift_name("ObservableSubscriber")))
@protocol KotlinNativeObservableSubscriber
@required
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorT:(KotlinNativeKotlinThrowable *)t __attribute__((swift_name("onError(t:)")));
- (void)onNextT:(id _Nullable)t __attribute__((swift_name("onNext(t:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObservableLambdaSubscriberImpl")))
@interface KotlinNativeObservableLambdaSubscriberImpl<T> : KotlinBase <KotlinNativeObservableSubscriber>
- (instancetype)initWithOnNextLambda:(void (^)(T _Nullable))onNextLambda onErrorLambda:(void (^)(KotlinNativeKotlinThrowable *))onErrorLambda onCompleteLambda:(void (^)(void))onCompleteLambda __attribute__((swift_name("init(onNextLambda:onErrorLambda:onCompleteLambda:)"))) __attribute__((objc_designated_initializer));
- (void)onComplete __attribute__((swift_name("onComplete()")));
- (void)onErrorT:(KotlinNativeKotlinThrowable *)t __attribute__((swift_name("onError(t:)")));
- (void)onNextT:(T _Nullable)t __attribute__((swift_name("onNext(t:)")));
@end;

__attribute__((swift_name("ObservablePublisher")))
@protocol KotlinNativeObservablePublisher
@required
- (id<KotlinNativeSubscription>)subscribeS_:(id<KotlinNativeObservableSubscriber>)s __attribute__((swift_name("subscribe(s_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Single")))
@interface KotlinNativeSingle<T> : KotlinBase
- (instancetype)initWithPublisher:(id<KotlinNativeSinglePublisher>)publisher __attribute__((swift_name("init(publisher:)"))) __attribute__((objc_designated_initializer));
- (id<KotlinNativeSubscription>)subscribeSubscriber:(id<KotlinNativeSingleSubscriber>)subscriber __attribute__((swift_name("subscribe(subscriber:)")));
@end;

__attribute__((swift_name("SinglePublisher")))
@protocol KotlinNativeSinglePublisher
@required
- (id<KotlinNativeSubscription>)subscribeS__:(id<KotlinNativeSingleSubscriber>)s __attribute__((swift_name("subscribe(s__:)")));
@end;

__attribute__((swift_name("SingleSubscriber")))
@protocol KotlinNativeSingleSubscriber
@required
- (void)onErrorT:(KotlinNativeKotlinThrowable *)t __attribute__((swift_name("onError(t:)")));
- (void)onSuccessT:(id _Nullable)t __attribute__((swift_name("onSuccess(t:)")));
@end;

__attribute__((swift_name("Subscription")))
@protocol KotlinNativeSubscription
@required
- (void)cancel __attribute__((swift_name("cancel()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KotlinNativeKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KotlinNativeKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KotlinNativeKotlinCoroutineContextElement> _Nullable)getKey:(id<KotlinNativeKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KotlinNativeKotlinCoroutineContext>)minusKeyKey:(id<KotlinNativeKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KotlinNativeKotlinCoroutineContext>)plusContext:(id<KotlinNativeKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KotlinNativeKotlinCoroutineContextElement <KotlinNativeKotlinCoroutineContext>
@required
@property (readonly) id<KotlinNativeKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KotlinNativeKotlinAbstractCoroutineContextElement : KotlinBase <KotlinNativeKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KotlinNativeKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KotlinNativeKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KotlinNativeKotlinContinuationInterceptor <KotlinNativeKotlinCoroutineContextElement>
@required
- (id<KotlinNativeKotlinContinuation>)interceptContinuationContinuation:(id<KotlinNativeKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KotlinNativeKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher : KotlinNativeKotlinAbstractCoroutineContextElement <KotlinNativeKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KotlinNativeKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<KotlinNativeKotlinCoroutineContext>)context block:(id<KotlinNativeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KotlinNativeKotlinCoroutineContext>)context block:(id<KotlinNativeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KotlinNativeKotlinContinuation>)interceptContinuationContinuation:(id<KotlinNativeKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KotlinNativeKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher the left of `+`.")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDelay")))
@protocol KotlinNativeKotlinx_coroutines_coreDelay
@required
- (id<KotlinNativeKotlinx_coroutines_coreDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<KotlinNativeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("invokeOnTimeout(timeMillis:block:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<KotlinNativeKotlinx_coroutines_coreCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainDispatcher")))
@interface KotlinNativeMainDispatcher : KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher <KotlinNativeKotlinx_coroutines_coreDelay>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mainDispatcher __attribute__((swift_name("init()")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)dispatchContext:(id<KotlinNativeKotlinCoroutineContext>)context block:(id<KotlinNativeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (id<KotlinNativeKotlinx_coroutines_coreDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<KotlinNativeKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("invokeOnTimeout(timeMillis:block:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<KotlinNativeKotlinx_coroutines_coreCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((swift_name("KotlinCEnum")))
@protocol KotlinNativeKotlinCEnum
@required
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MYMKYMKCameraUpdateSource")))
@interface KotlinNativeMYMKYMKCameraUpdateSource : KotlinNativeKotlinEnum<KotlinNativeMYMKYMKCameraUpdateSource *> <KotlinNativeKotlinCEnum>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) KotlinNativeMYMKYMKCameraUpdateSource *ymkcameraupdatesourcegestures __attribute__((swift_name("ymkcameraupdatesourcegestures")));
@property (class, readonly) KotlinNativeMYMKYMKCameraUpdateSource *ymkcameraupdatesourceapplication __attribute__((swift_name("ymkcameraupdatesourceapplication")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(KotlinNativeMYMKYMKCameraUpdateSource *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) KotlinNativeULong *value __attribute__((swift_name("value")));
@end;

@interface KotlinNativeMYMKYMKCameraUpdateSource (Extensions)
- (KotlinNativeCameraUpdateSource *)toKotlin __attribute__((swift_name("toKotlin()")));
@end;

@interface KotlinNativeCameraPosition (Extensions)
- (YMKCameraPosition *)toNative __attribute__((swift_name("toNative()")));
@end;

@interface KotlinNativePoint (Extensions)
- (YMKPoint *)toNative __attribute__((swift_name("toNative()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraPositionKt")))
@interface KotlinNativeCameraPositionKt : KotlinBase
+ (KotlinNativeCameraPosition *)toKotlin:(YMKCameraPosition *)receiver __attribute__((swift_name("toKotlin(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocationKt")))
@interface KotlinNativeLocationKt : KotlinBase
+ (KotlinNativeLocation *)toKotlin_:(YMKLocation *)receiver __attribute__((swift_name("toKotlin(__:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointKt")))
@interface KotlinNativePointKt : KotlinBase
+ (KotlinNativePoint *)toKotlin__:(YMKPoint *)receiver __attribute__((swift_name("toKotlin(___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainScreenModelImplKt")))
@interface KotlinNativeMainScreenModelImplKt : KotlinBase
+ (float)roundToHundredths:(float)receiver __attribute__((swift_name("roundToHundredths(_:)")));
+ (float)roundToThousandths:(double)receiver __attribute__((swift_name("roundToThousandths(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletableKt")))
@interface KotlinNativeCompletableKt : KotlinBase
+ (KotlinNativeCompletable *)toCompletable:(id<KotlinNativeKotlinSuspendFunction0>)receiver __attribute__((swift_name("toCompletable(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObservableKt")))
@interface KotlinNativeObservableKt : KotlinBase
+ (KotlinNativeObservable<id> *)toObservable:(id<KotlinNativeKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("toObservable(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleKt")))
@interface KotlinNativeSingleKt : KotlinBase
+ (KotlinNativeSingle<id> *)toSingle:(id<KotlinNativeKotlinSuspendFunction0>)receiver __attribute__((swift_name("toSingle(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionKt")))
@interface KotlinNativeSubscriptionKt : KotlinBase
+ (id<KotlinNativeSubscription>)toSubscription:(id<KotlinNativeKotlinx_coroutines_coreJob>)receiver __attribute__((swift_name("toSubscription(_:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol KotlinNativeKotlinx_coroutines_coreFlow
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MYMKYMKAnimationType")))
@interface KotlinNativeMYMKYMKAnimationType : KotlinNativeKotlinEnum<KotlinNativeMYMKYMKAnimationType *> <KotlinNativeKotlinCEnum>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) KotlinNativeMYMKYMKAnimationType *ymkanimationtypesmooth __attribute__((swift_name("ymkanimationtypesmooth")));
@property (class, readonly) KotlinNativeMYMKYMKAnimationType *ymkanimationtypelinear __attribute__((swift_name("ymkanimationtypelinear")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(KotlinNativeMYMKYMKAnimationType *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) KotlinNativeULong *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KotlinNativeKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KotlinNativeKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KotlinNativeKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KotlinNativeKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KotlinNativeKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KotlinNativeKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KotlinNativeKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KotlinNativeKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellableContinuation")))
@protocol KotlinNativeKotlinx_coroutines_coreCancellableContinuation <KotlinNativeKotlinContinuation>
@required
- (BOOL)cancelCause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)invokeOnCancellationHandler:(void (^)(KotlinNativeKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^)(KotlinNativeKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeWithExceptionException:(KotlinNativeKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
- (void)resumeUndispatched:(KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));
- (void)resumeUndispatchedWithException:(KotlinNativeKotlinx_coroutines_coreCoroutineDispatcher *)receiver exception:(KotlinNativeKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol KotlinNativeKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol KotlinNativeKotlinSuspendFunction0 <KotlinNativeKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KotlinNativeKotlinx_coroutines_coreJob <KotlinNativeKotlinCoroutineContextElement>
@required
- (id<KotlinNativeKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KotlinNativeKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(KotlinNativeKotlinx_coroutines_coreCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (KotlinNativeKotlinx_coroutines_coreCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KotlinNativeKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KotlinNativeKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<KotlinNativeKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KotlinNativeKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<KotlinNativeKotlinx_coroutines_coreJob>)plusOther_:(id<KotlinNativeKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KotlinNativeKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KotlinNativeKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KotlinNativeKotlinArray<T> : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KotlinNativeInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KotlinNativeKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KotlinNativeKotlinx_coroutines_coreChildHandle <KotlinNativeKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(KotlinNativeKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KotlinNativeKotlinx_coroutines_coreChildJob <KotlinNativeKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<KotlinNativeKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KotlinNativeKotlinException : KotlinNativeKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KotlinNativeKotlinRuntimeException : KotlinNativeKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KotlinNativeKotlinIllegalStateException : KotlinNativeKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellationException")))
@interface KotlinNativeKotlinx_coroutines_coreCancellationException : KotlinNativeKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KotlinNativeKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol KotlinNativeKotlinSequence
@required
- (id<KotlinNativeKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KotlinNativeKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<KotlinNativeKotlinx_coroutines_coreSelectInstance>)select block:(id<KotlinNativeKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KotlinNativeKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KotlinNativeKotlinx_coroutines_coreParentJob <KotlinNativeKotlinx_coroutines_coreJob>
@required
- (KotlinNativeKotlinx_coroutines_coreCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KotlinNativeKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<KotlinNativeKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(KotlinNativeKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(KotlinNativeKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<KotlinNativeKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface KotlinNativeKotlinx_coroutines_coreAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KotlinNativeKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(KotlinNativeKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface KotlinNativeKotlinx_coroutines_coreOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface KotlinNativeKotlinx_coroutines_coreAtomicOp<__contravariant T> : KotlinNativeKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
