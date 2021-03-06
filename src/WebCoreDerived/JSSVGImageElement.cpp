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

#include "JSSVGImageElement.h"

#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "SVGImageElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGImageElementTableValues[] =
{
    { "x", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementX), (intptr_t)0 },
    { "y", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementY), (intptr_t)0 },
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementWidth), (intptr_t)0 },
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementHeight), (intptr_t)0 },
    { "preserveAspectRatio", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementPreserveAspectRatio), (intptr_t)0 },
#if ENABLE(SVG)
    { "externalResourcesRequired", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementExternalResourcesRequired), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "href", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementHref), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGImageElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGImageElementTable = { 18, 15, JSSVGImageElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGImageElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGImageElementConstructorTable = { 1, 0, JSSVGImageElementConstructorTableValues, 0 };
const ClassInfo JSSVGImageElementConstructor::s_info = { "SVGImageElementConstructor", &Base::s_info, &JSSVGImageElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGImageElementConstructor) };

JSSVGImageElementConstructor::JSSVGImageElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGImageElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGImageElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGImageElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGImageElementConstructor, JSDOMWrapper>(exec, JSSVGImageElementConstructorTable, jsCast<JSSVGImageElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGImageElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGImageElementPrototypeTable = { 1, 0, JSSVGImageElementPrototypeTableValues, 0 };
const ClassInfo JSSVGImageElementPrototype::s_info = { "SVGImageElementPrototype", &Base::s_info, &JSSVGImageElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGImageElementPrototype) };

JSObject* JSSVGImageElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGImageElement>(vm, globalObject);
}

const ClassInfo JSSVGImageElement::s_info = { "SVGImageElement", &Base::s_info, &JSSVGImageElementTable, 0 , CREATE_METHOD_TABLE(JSSVGImageElement) };

JSSVGImageElement::JSSVGImageElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGImageElement> impl)
    : JSSVGGraphicsElement(structure, globalObject, impl)
{
}

void JSSVGImageElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGImageElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGImageElementPrototype::create(vm, globalObject, JSSVGImageElementPrototype::createStructure(vm, globalObject, JSSVGGraphicsElementPrototype::self(vm, globalObject)));
}

bool JSSVGImageElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGImageElement* thisObject = jsCast<JSSVGImageElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGImageElement, Base>(exec, JSSVGImageElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGImageElementX(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGImageElementY(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGImageElementWidth(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGImageElementHeight(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGImageElementPreserveAspectRatio(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedPreserveAspectRatio> obj = impl.preserveAspectRatioAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


#if ENABLE(SVG)
EncodedJSValue jsSVGImageElementExternalResourcesRequired(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedBoolean> obj = impl.externalResourcesRequiredAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGImageElementHref(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGImageElement* castedThis = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGImageElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.hrefAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsSVGImageElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGImageElement* domObject = jsDynamicCast<JSSVGImageElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGImageElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGImageElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGImageElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)
