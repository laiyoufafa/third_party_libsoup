/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/
/* Generated data (by glib-mkenums) */

#ifndef __SOUP_ENUM_TYPES_H__
#define __SOUP_ENUM_TYPES_H__

#include <glib-object.h>
#include <libsoup/soup-version.h>
#define GLIB_MKENUMS_EXTERN _SOUP_EXTERN

G_BEGIN_DECLS

/* enumerations from "soup-address.h" */
GLIB_MKENUMS_EXTERN GType soup_address_family_get_type (void);
#define SOUP_TYPE_ADDRESS_FAMILY (soup_address_family_get_type ())

/* enumerations from "soup-cache.h" */
GLIB_MKENUMS_EXTERN GType soup_cacheability_get_type (void);
#define SOUP_TYPE_CACHEABILITY (soup_cacheability_get_type ())
GLIB_MKENUMS_EXTERN GType soup_cache_response_get_type (void);
#define SOUP_TYPE_CACHE_RESPONSE (soup_cache_response_get_type ())
GLIB_MKENUMS_EXTERN GType soup_cache_type_get_type (void);
#define SOUP_TYPE_CACHE_TYPE (soup_cache_type_get_type ())

/* enumerations from "soup-cookie.h" */
GLIB_MKENUMS_EXTERN GType soup_same_site_policy_get_type (void);
#define SOUP_TYPE_SAME_SITE_POLICY (soup_same_site_policy_get_type ())

/* enumerations from "soup-cookie-jar.h" */
GLIB_MKENUMS_EXTERN GType soup_cookie_jar_accept_policy_get_type (void);
#define SOUP_TYPE_COOKIE_JAR_ACCEPT_POLICY (soup_cookie_jar_accept_policy_get_type ())

/* enumerations from "soup-date.h" */
GLIB_MKENUMS_EXTERN GType soup_date_format_get_type (void);
#define SOUP_TYPE_DATE_FORMAT (soup_date_format_get_type ())

/* enumerations from "soup-logger.h" */
GLIB_MKENUMS_EXTERN GType soup_logger_log_level_get_type (void);
#define SOUP_TYPE_LOGGER_LOG_LEVEL (soup_logger_log_level_get_type ())

/* enumerations from "soup-message.h" */
GLIB_MKENUMS_EXTERN GType soup_http_version_get_type (void);
#define SOUP_TYPE_HTTP_VERSION (soup_http_version_get_type ())
GLIB_MKENUMS_EXTERN GType soup_message_flags_get_type (void);
#define SOUP_TYPE_MESSAGE_FLAGS (soup_message_flags_get_type ())
GLIB_MKENUMS_EXTERN GType soup_message_priority_get_type (void);
#define SOUP_TYPE_MESSAGE_PRIORITY (soup_message_priority_get_type ())

/* enumerations from "soup-message-body.h" */
GLIB_MKENUMS_EXTERN GType soup_memory_use_get_type (void);
#define SOUP_TYPE_MEMORY_USE (soup_memory_use_get_type ())

/* enumerations from "soup-message-headers.h" */
GLIB_MKENUMS_EXTERN GType soup_message_headers_type_get_type (void);
#define SOUP_TYPE_MESSAGE_HEADERS_TYPE (soup_message_headers_type_get_type ())
GLIB_MKENUMS_EXTERN GType soup_encoding_get_type (void);
#define SOUP_TYPE_ENCODING (soup_encoding_get_type ())
GLIB_MKENUMS_EXTERN GType soup_expectation_get_type (void);
#define SOUP_TYPE_EXPECTATION (soup_expectation_get_type ())

/* enumerations from "soup-misc.h" */
GLIB_MKENUMS_EXTERN GType soup_connection_state_get_type (void);
#define SOUP_TYPE_CONNECTION_STATE (soup_connection_state_get_type ())

/* enumerations from "soup-requester.h" */
GLIB_MKENUMS_EXTERN GType soup_requester_error_get_type (void);
#define SOUP_TYPE_REQUESTER_ERROR (soup_requester_error_get_type ())

/* enumerations from "soup-server.h" */
GLIB_MKENUMS_EXTERN GType soup_server_listen_options_get_type (void);
#define SOUP_TYPE_SERVER_LISTEN_OPTIONS (soup_server_listen_options_get_type ())

/* enumerations from "soup-session.h" */
GLIB_MKENUMS_EXTERN GType soup_request_error_get_type (void);
#define SOUP_TYPE_REQUEST_ERROR (soup_request_error_get_type ())

/* enumerations from "soup-socket.h" */
GLIB_MKENUMS_EXTERN GType soup_socket_io_status_get_type (void);
#define SOUP_TYPE_SOCKET_IO_STATUS (soup_socket_io_status_get_type ())

/* enumerations from "soup-status.h" */
GLIB_MKENUMS_EXTERN GType soup_status_get_type (void);
#define SOUP_TYPE_STATUS (soup_status_get_type ())
GLIB_MKENUMS_EXTERN GType soup_known_status_code_get_type (void);
#define SOUP_TYPE_KNOWN_STATUS_CODE (soup_known_status_code_get_type ())

/* enumerations from "soup-tld.h" */
GLIB_MKENUMS_EXTERN GType soup_tld_error_get_type (void);
#define SOUP_TYPE_TLD_ERROR (soup_tld_error_get_type ())

/* enumerations from "soup-websocket.h" */
GLIB_MKENUMS_EXTERN GType soup_websocket_error_get_type (void);
#define SOUP_TYPE_WEBSOCKET_ERROR (soup_websocket_error_get_type ())
GLIB_MKENUMS_EXTERN GType soup_websocket_connection_type_get_type (void);
#define SOUP_TYPE_WEBSOCKET_CONNECTION_TYPE (soup_websocket_connection_type_get_type ())
GLIB_MKENUMS_EXTERN GType soup_websocket_data_type_get_type (void);
#define SOUP_TYPE_WEBSOCKET_DATA_TYPE (soup_websocket_data_type_get_type ())
GLIB_MKENUMS_EXTERN GType soup_websocket_close_code_get_type (void);
#define SOUP_TYPE_WEBSOCKET_CLOSE_CODE (soup_websocket_close_code_get_type ())
GLIB_MKENUMS_EXTERN GType soup_websocket_state_get_type (void);
#define SOUP_TYPE_WEBSOCKET_STATE (soup_websocket_state_get_type ())

/* enumerations from "soup-xmlrpc.h" */
GLIB_MKENUMS_EXTERN GType soup_xmlrpc_error_get_type (void);
#define SOUP_TYPE_XMLRPC_ERROR (soup_xmlrpc_error_get_type ())
GLIB_MKENUMS_EXTERN GType soup_xmlrpc_fault_get_type (void);
#define SOUP_TYPE_XMLRPC_FAULT (soup_xmlrpc_fault_get_type ())
G_END_DECLS

#endif /* __SOUP_ENUM_TYPES_H__ */

/* Generated data ends here */

