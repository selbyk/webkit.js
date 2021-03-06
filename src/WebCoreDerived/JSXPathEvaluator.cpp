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
#include "JSXPathEvaluator.h"

#include "ExceptionCode.h"
#include "JSCustomXPathNSResolver.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSXPathExpression.h"
#include "JSXPathNSResolver.h"
#include "JSXPathResult.h"
#include "XPathEvaluator.h"
#include "XPathExpression.h"
#include "XPathNSResolver.h"
#include "XPathResult.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSXPathEvaluatorTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathEvaluatorConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXPathEvaluatorTable = { 2, 1, JSXPathEvaluatorTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSXPathEvaluatorConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXPathEvaluatorConstructorTable = { 1, 0, JSXPathEvaluatorConstructorTableValues, 0 };
EncodedJSValue JSC_HOST_CALL JSXPathEvaluatorConstructor::constructJSXPathEvaluator(ExecState* exec)
{
    JSXPathEvaluatorConstructor* castedThis = jsCast<JSXPathEvaluatorConstructor*>(exec->callee());
    RefPtr<XPathEvaluator> object = XPathEvaluator::create();
    return JSValue::encode(asObject(toJS(exec, castedThis->globalObject(), object.get())));
}

const ClassInfo JSXPathEvaluatorConstructor::s_info = { "XPathEvaluatorConstructor", &Base::s_info, &JSXPathEvaluatorConstructorTable, 0, CREATE_METHOD_TABLE(JSXPathEvaluatorConstructor) };

JSXPathEvaluatorConstructor::JSXPathEvaluatorConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSXPathEvaluatorConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSXPathEvaluatorPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSXPathEvaluatorConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathEvaluatorConstructor, JSDOMWrapper>(exec, JSXPathEvaluatorConstructorTable, jsCast<JSXPathEvaluatorConstructor*>(object), propertyName, slot);
}

ConstructType JSXPathEvaluatorConstructor::getConstructData(JSCell*, ConstructData& constructData)
{
    constructData.native.function = constructJSXPathEvaluator;
    return ConstructTypeHost;
}

/* Hash table for prototype */

static const HashTableValue JSXPathEvaluatorPrototypeTableValues[] =
{
    { "createExpression", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionCreateExpression), (intptr_t)0 },
    { "createNSResolver", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionCreateNSResolver), (intptr_t)0 },
    { "evaluate", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsXPathEvaluatorPrototypeFunctionEvaluate), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSXPathEvaluatorPrototypeTable = { 8, 7, JSXPathEvaluatorPrototypeTableValues, 0 };
const ClassInfo JSXPathEvaluatorPrototype::s_info = { "XPathEvaluatorPrototype", &Base::s_info, &JSXPathEvaluatorPrototypeTable, 0, CREATE_METHOD_TABLE(JSXPathEvaluatorPrototype) };

JSObject* JSXPathEvaluatorPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathEvaluator>(vm, globalObject);
}

bool JSXPathEvaluatorPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXPathEvaluatorPrototype* thisObject = jsCast<JSXPathEvaluatorPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSXPathEvaluatorPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSXPathEvaluator::s_info = { "XPathEvaluator", &Base::s_info, &JSXPathEvaluatorTable, 0 , CREATE_METHOD_TABLE(JSXPathEvaluator) };

JSXPathEvaluator::JSXPathEvaluator(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathEvaluator> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSXPathEvaluator::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSXPathEvaluator::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSXPathEvaluatorPrototype::create(vm, globalObject, JSXPathEvaluatorPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSXPathEvaluator::destroy(JSC::JSCell* cell)
{
    JSXPathEvaluator* thisObject = static_cast<JSXPathEvaluator*>(cell);
    thisObject->JSXPathEvaluator::~JSXPathEvaluator();
}

JSXPathEvaluator::~JSXPathEvaluator()
{
    releaseImplIfNotNull();
}

bool JSXPathEvaluator::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSXPathEvaluator* thisObject = jsCast<JSXPathEvaluator*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSXPathEvaluator, Base>(exec, JSXPathEvaluatorTable, thisObject, propertyName, slot);
}

EncodedJSValue jsXPathEvaluatorConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSXPathEvaluator* domObject = jsDynamicCast<JSXPathEvaluator*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSXPathEvaluator::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSXPathEvaluator::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXPathEvaluatorConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateExpression(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSXPathEvaluator* castedThis = jsDynamicCast<JSXPathEvaluator*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathEvaluator::info());
    XPathEvaluator& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& expression(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<XPathNSResolver> customResolver;
    XPathNSResolver* resolver = toXPathNSResolver(exec->argument(1));
    if (!resolver) {
        customResolver = JSCustomXPathNSResolver::create(exec, exec->argument(1));
        if (exec->hadException())
            return JSValue::encode(jsUndefined());
        resolver = customResolver.get();
    }

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createExpression(expression, resolver, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionCreateNSResolver(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSXPathEvaluator* castedThis = jsDynamicCast<JSXPathEvaluator*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathEvaluator::info());
    XPathEvaluator& impl = castedThis->impl();
    Node* nodeResolver(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.createNSResolver(nodeResolver)));
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsXPathEvaluatorPrototypeFunctionEvaluate(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSXPathEvaluator* castedThis = jsDynamicCast<JSXPathEvaluator*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSXPathEvaluator::info());
    XPathEvaluator& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& expression(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    Node* contextNode(toNode(exec->argument(1)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    RefPtr<XPathNSResolver> customResolver;
    XPathNSResolver* resolver = toXPathNSResolver(exec->argument(2));
    if (!resolver) {
        customResolver = JSCustomXPathNSResolver::create(exec, exec->argument(2));
        if (exec->hadException())
            return JSValue::encode(jsUndefined());
        resolver = customResolver.get();
    }
    uint16_t type(toUInt16(exec, exec->argument(3), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    XPathResult* inResult(toXPathResult(exec->argument(4)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.evaluate(expression, contextNode, resolver, type, inResult, ec)));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

bool JSXPathEvaluatorOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSXPathEvaluatorOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSXPathEvaluator* jsXPathEvaluator = jsCast<JSXPathEvaluator*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsXPathEvaluator->impl(), jsXPathEvaluator);
    jsXPathEvaluator->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XPathEvaluator* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSXPathEvaluator>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to XPathEvaluator.
    COMPILE_ASSERT(!__is_polymorphic(XPathEvaluator), XPathEvaluator_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<XPathEvaluator>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSXPathEvaluator>(exec, globalObject, impl);
}

XPathEvaluator* toXPathEvaluator(JSC::JSValue value)
{
    return value.inherits(JSXPathEvaluator::info()) ? &jsCast<JSXPathEvaluator*>(value)->impl() : 0;
}

}
