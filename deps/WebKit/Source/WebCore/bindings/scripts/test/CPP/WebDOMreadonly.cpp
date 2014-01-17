/*
 * This file is part of the WebKit open source project.
 * This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "WebDOMreadonly.h"

#include "WebExceptionHandler.h"
#include "readonly.h"
#include <wtf/GetPtr.h>
#include <wtf/RefPtr.h>

struct WebDOMreadonly::WebDOMreadonlyPrivate {
    WebDOMreadonlyPrivate(WebCore::readonly* object = 0)
        : impl(object)
    {
    }

    RefPtr<WebCore::readonly> impl;
};

WebDOMreadonly::WebDOMreadonly()
    : WebDOMObject()
    , m_impl(0)
{
}

WebDOMreadonly::WebDOMreadonly(WebCore::readonly* impl)
    : WebDOMObject()
    , m_impl(new WebDOMreadonlyPrivate(impl))
{
}

WebDOMreadonly::WebDOMreadonly(const WebDOMreadonly& copy)
    : WebDOMObject()
{
    m_impl = copy.impl() ? new WebDOMreadonlyPrivate(copy.impl()) : 0;
}

WebDOMreadonly& WebDOMreadonly::operator=(const WebDOMreadonly& copy)
{
    delete m_impl;
    m_impl = copy.impl() ? new WebDOMreadonlyPrivate(copy.impl()) : 0;
    return *this;
}

WebCore::readonly* WebDOMreadonly::impl() const
{
    return m_impl ? WTF::getPtr(m_impl->impl) : 0;
}

WebDOMreadonly::~WebDOMreadonly()
{
    delete m_impl;
    m_impl = 0;
}

WebCore::readonly* toWebCore(const WebDOMreadonly& wrapper)
{
    return wrapper.impl();
}

WebDOMreadonly toWebKit(WebCore::readonly* value)
{
    return WebDOMreadonly(value);
}