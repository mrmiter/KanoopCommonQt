#ifndef JSONHELPER_H
#define JSONHELPER_H
#include <QString>
#include <QJsonArray>
#include <QJsonObject>

class JsonHelper
{
public:
    static bool tryGetString(const QJsonObject& object, const QString& key, QString& value);
    static bool tryGetObject(const QJsonObject& object, const QString& key, QJsonObject& value);
    static bool tryGetArray(const QJsonObject& object, const QString& key, QJsonArray& value);
    static bool tryGetInt32(const QJsonObject& object, const QString& key, qint32& value);
    static bool tryGetUInt32(const QJsonObject& object, const QString& key, quint32& value);
    static bool tryGetDouble(const QJsonObject& object, const QString& key, qreal& value);
    static bool tryGetBool(const QJsonObject& object, const QString& key, bool& value);
};

#endif // JSONHELPER_H