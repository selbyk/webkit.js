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
#include "JSStyleMedia.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "StyleMedia.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSStyleMediaTableValues[] =
{
    { "type", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsStyleMediaType), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSStyleMediaTable = { 2, 1, JSStyleMediaTableValues, 0 };
/* Hash table for prototype */

static const HashTableValue JSStyleMediaPrototypeTableValues[] =
{
    { "matchMedium", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsStyleMediaPrototypeFunctionMatchMedium), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSStyleMediaPrototypeTable = { 2, 1, JSStyleMediaPrototypeTableValues, 0 };
const ClassInfo JSStyleMediaPrototype::s_info = { "StyleMediaPrototype", &Base::s_info, &JSStyleMediaPrototypeTable, 0, CREATE_METHOD_TABLE(JSStyleMediaPrototype) };

JSObject* JSStyleMediaPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSStyleMedia>(vm, globalObject);
}

bool JSStyleMediaPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSStyleMediaPrototype* thisObject = jsCast<JSStyleMediaPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSStyleMediaPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSStyleMedia::s_info = { "StyleMedia", &Base::s_info, &JSStyleMediaTable, 0 , CREATE_METHOD_TABLE(JSStyleMedia) };

JSStyleMedia::JSStyleMedia(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<StyleMedia> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSStyleMedia::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSStyleMedia::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSStyleMediaPrototype::create(vm, globalObject, JSStyleMediaPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSStyleMedia::destroy(JSC::JSCell* cell)
{
    JSStyleMedia* thisObject = static_cast<JSStyleMedia*>(cell);
    thisObject->JSStyleMedia::~JSStyleMedia();
}

JSStyleMedia::~JSStyleMedia()
{
    releaseImplIfNotNull();
}

bool JSStyleMedia::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSStyleMedia* thisObject = jsCast<JSStyleMedia*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSStyleMedia, Base>(exec, JSStyleMediaTable, thisObject, propertyName, slot);
}

EncodedJSValue jsStyleMediaType(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSStyleMedia* castedThis = jsDynamicCast<JSStyleMedia*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    StyleMedia& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue JSC_HOST_CALL jsStyleMediaPrototypeFunctionMatchMedium(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSStyleMedia* castedThis = jsDynamicCast<JSStyleMedia*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSStyleMedia::info());
    StyleMedia& impl = castedThis->impl();
    const String& mediaquery(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsBoolean(impl.matchMedium(mediaquery));
    return JSValue::encode(result);
}

static inline bool isObservable(JSStyleMedia* jsStyleMedia)
{
    if (jsStyleMedia->hasCustomProperties())
        return true;
    return false;
}

bool JSStyleMediaOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSStyleMedia* jsStyleMedia = jsCast<JSStyleMedia*>(handle.get().asCell());
    if (!isObservable(jsStyleMedia))
        return false;
    Frame* root = jsStyleMedia->impl().frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSStyleMediaOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSStyleMedia* jsStyleMedia = jsCast<JSStyleMedia*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsStyleMedia->impl(), jsStyleMedia);
    jsStyleMedia->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7StyleMedia@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore10StyleMediaE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, StyleMedia* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSStyleMedia>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7StyleMedia@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore10StyleMediaE[2];
#if COMPILER(CLANG)
    // If this fails StyleMedia does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(StyleMedia), StyleMedia_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // StyleMedia has subclasses. If StyleMedia has subclasses that get passed
    // to toJS() we currently require StyleMedia you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<StyleMedia>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSStyleMedia>(exec, globalObject, impl);
}

StyleMedia* toStyleMedia(JSC::JSValue value)
{
    return value.inherits(JSStyleMedia::info()) ? &jsCast<JSStyleMedia*>(value)->impl() : 0;
}

}
