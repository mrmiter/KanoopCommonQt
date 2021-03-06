#ifndef FILEUTIL_H
#define FILEUTIL_H

#include <QByteArray>
#include <QString>



class FileUtil
{
public:
    static QString getMD5String(const QString& filename);
    static QByteArray getMD5Bytes(const QString& filename);
};

#endif // FILEUTIL_H
