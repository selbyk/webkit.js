/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGLengthList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGLength.h"
#include "SVGLength.h"
#include "SVGLengthList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGLengthListTableValues[] =
{
    { "numberOfItems", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthListNumberOfItems), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGLengthListConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGLengthListTable = { 4, 3, JSSVGLengthListTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGLengthListConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGLengthListConstructorTable = { 1, 0, JSSVGLengthListConstructorTableValues, 0 };
const ClassInfo JSSVGLengthListConstructor::s_info = { "SVGLengthListConstructor", &Base::s_info, &JSSVGLengthListConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGLengthListConstructor) };

JSSVGLengthListConstructor::JSSVGLengthListConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGLengthListConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGLengthListPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGLengthListConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLengthListConstructor, JSDOMWrapper>(exec, JSSVGLengthListConstructorTable, jsCast<JSSVGLengthListConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGLengthListPrototypeTableValues[] =
{
    { "clear", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionClear), (intptr_t)0 },
    { "initialize", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionInitialize), (intptr_t)1 },
    { "getItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionGetItem), (intptr_t)1 },
    { "insertItemBefore", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionInsertItemBefore), (intptr_t)2 },
    { "replaceItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionReplaceItem), (intptr_t)2 },
    { "removeItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionRemoveItem), (intptr_t)1 },
    { "appendItem", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGLengthListPrototypeFunctionAppendItem), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGLengthListPrototypeTable = { 18, 15, JSSVGLengthListPrototypeTableValues, 0 };
const ClassInfo JSSVGLengthListPrototype::s_info = { "SVGLengthListPrototype", &Base::s_info, &JSSVGLengthListPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGLengthListPrototype) };

JSObject* JSSVGLengthListPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGLengthList>(vm, globalObject);
}

bool JSSVGLengthListPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGLengthListPrototype* thisObject = jsCast<JSSVGLengthListPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSSVGLengthListPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGLengthList::s_info = { "SVGLengthList", &Base::s_info, &JSSVGLengthListTable, 0 , CREATE_METHOD_TABLE(JSSVGLengthList) };

JSSVGLengthList::JSSVGLengthList(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGListPropertyTearOff<SVGLengthList> > impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGLengthList::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGLengthList::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGLengthListPrototype::create(vm, globalObject, JSSVGLengthListPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSSVGLengthList::destroy(JSC::JSCell* cell)
{
    JSSVGLengthList* thisObject = static_cast<JSSVGLengthList*>(cell);
    thisObject->JSSVGLengthList::~JSSVGLengthList();
}

JSSVGLengthList::~JSSVGLengthList()
{
    releaseImplIfNotNull();
}

bool JSSVGLengthList::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGLengthList* thisObject = jsCast<JSSVGLengthList*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGLengthList, Base>(exec, JSSVGLengthListTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGLengthListNumberOfItems(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    JSValue result =  jsNumber(castedThis->impl().numberOfItems());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGLengthListConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGLengthList* domObject = jsDynamicCast<JSSVGLengthList*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGLengthList::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGLengthList::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGLengthListConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionClear(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    ExceptionCode ec = 0;
    impl.clear(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionInitialize(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSSVGLength::info()))
        return throwVMTypeError(exec);
    SVGPropertyTearOff<SVGLength>* item(toSVGLength(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.initialize(item, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionGetItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.getItem(index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionInsertItemBefore(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSSVGLength::info()))
        return throwVMTypeError(exec);
    SVGPropertyTearOff<SVGLength>* item(toSVGLength(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned index(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.insertItemBefore(item, index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionReplaceItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    if (exec->argumentCount() < 2)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSSVGLength::info()))
        return throwVMTypeError(exec);
    SVGPropertyTearOff<SVGLength>* item(toSVGLength(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    unsigned index(toUInt32(exec, exec->argument(1), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.replaceItem(item, index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionRemoveItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    unsigned index(toUInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.removeItem(index, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGLengthListPrototypeFunctionAppendItem(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGLengthList* castedThis = jsDynamicCast<JSSVGLengthList*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGLengthList::info());
    SVGListPropertyTearOff<SVGLengthList> & impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    ExceptionCode ec = 0;
    if (exec->argumentCount() > 0 && !exec->argument(0).isUndefinedOrNull() && !exec->argument(0).inherits(JSSVGLength::info()))
        return throwVMTypeError(exec);
    SVGPropertyTearOff<SVGLength>* item(toSVGLength(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.appendItem(item, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

bool JSSVGLengthListOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGLengthListOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGLengthList* jsSVGLengthList = jsCast<JSSVGLengthList*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGLengthList->impl(), jsSVGLengthList);
    jsSVGLengthList->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGListPropertyTearOff<SVGLengthList> * impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGLengthList>(exec, impl))
        return result;
    ReportMemoryCost<SVGListPropertyTearOff<SVGLengthList> >::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSVGLengthList>(exec, globalObject, impl);
}

SVGListPropertyTearOff<SVGLengthList> * toSVGLengthList(JSC::JSValue value)
{
    return value.inherits(JSSVGLengthList::info()) ? &jsCast<JSSVGLengthList*>(value)->impl() : 0;
}

}

#endif // ENABLE(SVG)
