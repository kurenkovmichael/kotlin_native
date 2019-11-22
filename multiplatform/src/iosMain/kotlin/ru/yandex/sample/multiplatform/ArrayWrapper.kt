package ru.yandex.sample.multiplatform

/**
 * Useful to bypass type erasure when NSArray is used as generics parameter.
 *
 * ```
 * interface Observable<T>: NSObject
 * @end
 * @interface ArrayWrapper<T> : NSObject
 * @property(nonnull, strong) NSArray<T> *array;
 * @end
 * @interface Containter : NSObject
 * @property(nonnull, strong) Observable<NSArray<NSValue *> *> *observable1;
 * @property(nonnull, strong) Observable<ArrayWrapper<NSValue *> *> *observable2;
 * @end
 * ```
 *
 * ```
 * // in Swift
 * let container = Containter()
 * let observable1 = container.observable1 // Observable<NSArray>
 * let observable2 = container.observable2 // Observable<ArrayWrapper<NSValue>>
 * ```
 */
class ArrayWrapper<T : Any>(val value: List<T>)
