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

#include "JSSVGAnimationElement.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGElement.h"
#include "SVGAnimationElement.h"
#include "SVGElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGStringList.h"
#include "SVGStringList.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAnimationElementTableValues[] =
{
    { "targetElement", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementTargetElement), (intptr_t)0 },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementExternalResourcesRequired), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "requiredFeatures", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementRequiredFeatures), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "requiredExtensions", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementRequiredExtensions), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "systemLanguage", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementSystemLanguage), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimationElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimationElementTable = { 17, 15, JSSVGAnimationElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAnimationElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimationElementConstructorTable = { 1, 0, JSSVGAnimationElementConstructorTableValues, 0 };
const ClassInfo JSSVGAnimationElementConstructor::s_info = { "SVGAnimationElementConstructor", &Base::s_info, &JSSVGAnimationElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAnimationElementConstructor) };

JSSVGAnimationElementConstructor::JSSVGAnimationElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimationElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAnimationElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAnimationElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimationElementConstructor, JSDOMWrapper>(exec, JSSVGAnimationElementConstructorTable, jsCast<JSSVGAnimationElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimationElementPrototypeTableValues[] =
{
    { "getStartTime", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionGetStartTime), (intptr_t)0 },
    { "getCurrentTime", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionGetCurrentTime), (intptr_t)0 },
    { "getSimpleDuration", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionGetSimpleDuration), (intptr_t)0 },
    { "beginElement", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionBeginElement), (intptr_t)0 },
    { "beginElementAt", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionBeginElementAt), (intptr_t)0 },
    { "endElement", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionEndElement), (intptr_t)0 },
    { "endElementAt", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionEndElementAt), (intptr_t)0 },
#if ENABLE(SVG)
    { "hasExtension", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGAnimationElementPrototypeFunctionHasExtension), (intptr_t)0 },
#endif
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimationElementPrototypeTable = { 17, 15, JSSVGAnimationElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimationElementPrototype::s_info = { "SVGAnimationElementPrototype", &Base::s_info, &JSSVGAnimationElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnimationElementPrototype) };

JSObject* JSSVGAnimationElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimationElement>(vm, globalObject);
}

bool JSSVGAnimationElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimationElementPrototype* thisObject = jsCast<JSSVGAnimationElementPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSSVGAnimationElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGAnimationElement::s_info = { "SVGAnimationElement", &Base::s_info, &JSSVGAnimationElementTable, 0 , CREATE_METHOD_TABLE(JSSVGAnimationElement) };

JSSVGAnimationElement::JSSVGAnimationElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimationElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGAnimationElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGAnimationElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAnimationElementPrototype::create(vm, globalObject, JSSVGAnimationElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGAnimationElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimationElement* thisObject = jsCast<JSSVGAnimationElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGAnimationElement, Base>(exec, JSSVGAnimationElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGAnimationElementTargetElement(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGAnimationElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.targetElement()));
    return JSValue::encode(result);
}


#if ENABLE(SVG)
EncodedJSValue jsSVGAnimationElementExternalResourcesRequired(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGAnimationElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGAnimationElementRequiredFeatures(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGAnimationElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl.requiredFeatures())));
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGAnimationElementRequiredExtensions(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGAnimationElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl.requiredExtensions())));
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGAnimationElementSystemLanguage(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGAnimationElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(SVGStaticListPropertyTearOff<SVGStringList>::create(impl, impl.systemLanguage())));
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsSVGAnimationElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGAnimationElement* domObject = jsDynamicCast<JSSVGAnimationElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGAnimationElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGAnimationElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimationElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetStartTime(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();

    JSC::JSValue result = jsNumber(impl.getStartTime());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetCurrentTime(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();

    JSC::JSValue result = jsNumber(impl.getCurrentTime());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionGetSimpleDuration(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();
    ExceptionCode ec = 0;

    JSC::JSValue result = jsNumber(impl.getSimpleDuration(ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionBeginElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();
    impl.beginElement();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionBeginElementAt(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();
    float offset(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.beginElementAt(offset);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionEndElement(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();
    impl.endElement();
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionEndElementAt(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();
    float offset(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.endElementAt(offset);
    return JSValue::encode(jsUndefined());
}

#if ENABLE(SVG)
EncodedJSValue JSC_HOST_CALL jsSVGAnimationElementPrototypeFunctionHasExtension(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGAnimationElement* castedThis = jsDynamicCast<JSSVGAnimationElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGAnimationElement::info());
    SVGAnimationElement& impl = castedThis->impl();
    const String& extension(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.hasExtension(extension));
    return JSValue::encode(result);
}

#endif


}

#endif // ENABLE(SVG)
