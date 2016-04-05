#include "telegramqmlinitializer.h"

#include "telegramengine.h"
#include "telegramapp.h"
#include "telegramauthenticate.h"
#include "telegramdialoglistmodel.h"
#include "telegrammessagelistmodel.h"
#include "telegramprofilemanagermodel.h"
#include "telegrampeerdetails.h"
#include "telegramhost.h"
#include "telegramenums.h"
#include "telegramimageelement.h"
#include "telegramnotificationhandler.h"

#include <telegram/objects/qmltools.h>
#include <qqml.h>

void TelegramQmlInitializer::init(const char *uri)
{
    qtelegramRegisterQmlTypes("TelegramQml", 2, 0);
    qRegisterMetaType< QList<qint32> >("QList<qint32>");

    qmlRegisterUncreatableType<TelegramEnums>("TelegramQml", 2, 0, "Enums", "It's just enums");

    qmlRegisterType<TelegramEngine>("TelegramQml", 2, 0, "Engine");
    qmlRegisterType<TelegramApp>("TelegramQml", 2, 0, "App");
    qmlRegisterType<TelegramAuthenticate>("TelegramQml", 2, 0, "Authenticate");
    qmlRegisterType<TelegramDialogListModel>("TelegramQml", 2, 0, "DialogListModel");
    qmlRegisterType<TelegramMessageListModel>("TelegramQml", 2, 0, "MessageListModel");
    qmlRegisterType<TelegramProfileManagerModel>("TelegramQml", 2, 0, "ProfileManagerModel");
    qmlRegisterType<TelegramPeerDetails>("TelegramQml", 2, 0, "PeerDetails");
    qmlRegisterType<TelegramNotificationHandler>("TelegramQml", 2, 0, "NotificationHandler");
    qmlRegisterType<TelegramHost>("TelegramQml", 2, 0, "Host");
    qmlRegisterType<TelegramImageElement>("TelegramQml", 2, 0, "Image");

    initializeTypes(uri);
}

void TelegramQmlInitializer::initializeTypes(const char *uri) {
    Q_UNUSED(uri)
}

