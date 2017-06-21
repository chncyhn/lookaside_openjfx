/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef WebKitDOMTestCustomNamedGetter_h
#define WebKitDOMTestCustomNamedGetter_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_TEST_CUSTOM_NAMED_GETTER            (webkit_dom_test_custom_named_getter_get_type())
#define WEBKIT_DOM_TEST_CUSTOM_NAMED_GETTER(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_TEST_CUSTOM_NAMED_GETTER, WebKitDOMTestCustomNamedGetter))
#define WEBKIT_DOM_TEST_CUSTOM_NAMED_GETTER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_TEST_CUSTOM_NAMED_GETTER, WebKitDOMTestCustomNamedGetterClass)
#define WEBKIT_DOM_IS_TEST_CUSTOM_NAMED_GETTER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_TEST_CUSTOM_NAMED_GETTER))
#define WEBKIT_DOM_IS_TEST_CUSTOM_NAMED_GETTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_TEST_CUSTOM_NAMED_GETTER))
#define WEBKIT_DOM_TEST_CUSTOM_NAMED_GETTER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_TEST_CUSTOM_NAMED_GETTER, WebKitDOMTestCustomNamedGetterClass))

struct _WebKitDOMTestCustomNamedGetter {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMTestCustomNamedGetterClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_test_custom_named_getter_get_type(void);

/**
 * webkit_dom_test_custom_named_getter_another_function:
 * @self: A #WebKitDOMTestCustomNamedGetter
 * @str: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_test_custom_named_getter_another_function(WebKitDOMTestCustomNamedGetter* self, const gchar* str);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMTestCustomNamedGetter_h */
