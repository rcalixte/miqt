#ifndef GEN_QNETWORKACCESSMANAGER_H
#define GEN_QNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractNetworkCache;
class QAuthenticator;
class QByteArray;
class QHstsPolicy;
class QHttpMultiPart;
class QIODevice;
class QMetaObject;
class QNetworkAccessManager;
class QNetworkCookieJar;
class QNetworkProxy;
class QNetworkProxyFactory;
class QNetworkReply;
class QNetworkRequest;
class QObject;
class QSslConfiguration;
class QSslError;
class QSslPreSharedKeyAuthenticator;
#else
typedef struct QAbstractNetworkCache QAbstractNetworkCache;
typedef struct QAuthenticator QAuthenticator;
typedef struct QByteArray QByteArray;
typedef struct QHstsPolicy QHstsPolicy;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QNetworkAccessManager QNetworkAccessManager;
typedef struct QNetworkCookieJar QNetworkCookieJar;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QNetworkProxyFactory QNetworkProxyFactory;
typedef struct QNetworkReply QNetworkReply;
typedef struct QNetworkRequest QNetworkRequest;
typedef struct QObject QObject;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
#endif

QNetworkAccessManager* QNetworkAccessManager_new();
QNetworkAccessManager* QNetworkAccessManager_new2(QObject* parent);
QMetaObject* QNetworkAccessManager_MetaObject(const QNetworkAccessManager* self);
void* QNetworkAccessManager_Metacast(QNetworkAccessManager* self, const char* param1);
struct miqt_string QNetworkAccessManager_Tr(const char* s);
struct miqt_array QNetworkAccessManager_SupportedSchemes(const QNetworkAccessManager* self);
void QNetworkAccessManager_ClearAccessCache(QNetworkAccessManager* self);
void QNetworkAccessManager_ClearConnectionCache(QNetworkAccessManager* self);
QNetworkProxy* QNetworkAccessManager_Proxy(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetProxy(QNetworkAccessManager* self, QNetworkProxy* proxy);
QNetworkProxyFactory* QNetworkAccessManager_ProxyFactory(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetProxyFactory(QNetworkAccessManager* self, QNetworkProxyFactory* factory);
QAbstractNetworkCache* QNetworkAccessManager_Cache(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetCache(QNetworkAccessManager* self, QAbstractNetworkCache* cache);
QNetworkCookieJar* QNetworkAccessManager_CookieJar(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetCookieJar(QNetworkAccessManager* self, QNetworkCookieJar* cookieJar);
void QNetworkAccessManager_SetStrictTransportSecurityEnabled(QNetworkAccessManager* self, bool enabled);
bool QNetworkAccessManager_IsStrictTransportSecurityEnabled(const QNetworkAccessManager* self);
void QNetworkAccessManager_EnableStrictTransportSecurityStore(QNetworkAccessManager* self, bool enabled);
bool QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(const QNetworkAccessManager* self);
void QNetworkAccessManager_AddStrictTransportSecurityHosts(QNetworkAccessManager* self, struct miqt_array /* of QHstsPolicy* */ knownHosts);
struct miqt_array QNetworkAccessManager_StrictTransportSecurityHosts(const QNetworkAccessManager* self);
QNetworkReply* QNetworkAccessManager_Head(QNetworkAccessManager* self, QNetworkRequest* request);
QNetworkReply* QNetworkAccessManager_Get(QNetworkAccessManager* self, QNetworkRequest* request);
QNetworkReply* QNetworkAccessManager_Post(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data);
QNetworkReply* QNetworkAccessManager_Post2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string data);
QNetworkReply* QNetworkAccessManager_Put(QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data);
QNetworkReply* QNetworkAccessManager_Put2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string data);
QNetworkReply* QNetworkAccessManager_DeleteResource(QNetworkAccessManager* self, QNetworkRequest* request);
QNetworkReply* QNetworkAccessManager_SendCustomRequest(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb);
QNetworkReply* QNetworkAccessManager_SendCustomRequest2(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, struct miqt_string data);
QNetworkReply* QNetworkAccessManager_Post3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart);
QNetworkReply* QNetworkAccessManager_Put3(QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart);
QNetworkReply* QNetworkAccessManager_SendCustomRequest3(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, QHttpMultiPart* multiPart);
void QNetworkAccessManager_ConnectToHostEncrypted(QNetworkAccessManager* self, struct miqt_string hostName);
void QNetworkAccessManager_ConnectToHostEncrypted2(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration, struct miqt_string peerName);
void QNetworkAccessManager_ConnectToHost(QNetworkAccessManager* self, struct miqt_string hostName);
void QNetworkAccessManager_SetRedirectPolicy(QNetworkAccessManager* self, int policy);
int QNetworkAccessManager_RedirectPolicy(const QNetworkAccessManager* self);
bool QNetworkAccessManager_AutoDeleteReplies(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetAutoDeleteReplies(QNetworkAccessManager* self, bool autoDelete);
int QNetworkAccessManager_TransferTimeout(const QNetworkAccessManager* self);
void QNetworkAccessManager_SetTransferTimeout(QNetworkAccessManager* self);
void QNetworkAccessManager_ProxyAuthenticationRequired(QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator);
void QNetworkAccessManager_connect_ProxyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_AuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator);
void QNetworkAccessManager_connect_AuthenticationRequired(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_Finished(QNetworkAccessManager* self, QNetworkReply* reply);
void QNetworkAccessManager_connect_Finished(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_Encrypted(QNetworkAccessManager* self, QNetworkReply* reply);
void QNetworkAccessManager_connect_Encrypted(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_SslErrors(QNetworkAccessManager* self, QNetworkReply* reply, struct miqt_array /* of QSslError* */ errors);
void QNetworkAccessManager_connect_SslErrors(QNetworkAccessManager* self, intptr_t slot);
void QNetworkAccessManager_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator);
void QNetworkAccessManager_connect_PreSharedKeyAuthenticationRequired(QNetworkAccessManager* self, intptr_t slot);
struct miqt_string QNetworkAccessManager_Tr2(const char* s, const char* c);
struct miqt_string QNetworkAccessManager_Tr3(const char* s, const char* c, int n);
void QNetworkAccessManager_EnableStrictTransportSecurityStore2(QNetworkAccessManager* self, bool enabled, struct miqt_string storeDir);
QNetworkReply* QNetworkAccessManager_SendCustomRequest32(QNetworkAccessManager* self, QNetworkRequest* request, struct miqt_string verb, QIODevice* data);
void QNetworkAccessManager_ConnectToHostEncrypted22(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port);
void QNetworkAccessManager_ConnectToHostEncrypted3(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port, QSslConfiguration* sslConfiguration);
void QNetworkAccessManager_ConnectToHost2(QNetworkAccessManager* self, struct miqt_string hostName, uint16_t port);
void QNetworkAccessManager_SetTransferTimeout1(QNetworkAccessManager* self, int timeout);
void QNetworkAccessManager_Delete(QNetworkAccessManager* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif