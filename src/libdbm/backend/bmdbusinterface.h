/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -v -c BMDBusInterface -p bmdbusinterface.h:bmdbusinterface.cpp com.deepin.bootmaker.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef BMDBUSINTERFACE_H
#define BMDBUSINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.bootmaker
 */
class BMDBusInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    {
        return "com.deepin.bootmaker";
    }

public:
    BMDBusInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~BMDBusInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> DeviceList()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("DeviceList"), argumentList);
    }

    inline QDBusPendingReply<bool> Install(const QString &image, const QString &device, const QString &partition, bool formatDevice)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(image) << QVariant::fromValue(device) << QVariant::fromValue(partition) << QVariant::fromValue(formatDevice);
        return asyncCallWithArgumentList(QStringLiteral("Install"), argumentList);
    }

    inline QDBusPendingReply<bool> CheckFile(const QString &filepath)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(filepath);
        return asyncCallWithArgumentList(QStringLiteral("CheckFile"), argumentList);
    }

    inline QDBusPendingReply<> Reboot()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Reboot"), argumentList);
    }

    inline QDBusPendingReply<> Start()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Start"), argumentList);
    }

    inline QDBusPendingReply<> Stop()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Stop"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void DeviceListChanged(const QString &deviceListJson);
    void Finished(int errcode, const QString &description);
    void ReportProgress(int current, int total, const QString &title, const QString &description);
    void ReportProgress1(int current, int total, const QString &title, const QString &description);
    //    void CheckFileResult(bool result);
};

namespace com {
namespace deepin {
typedef ::BMDBusInterface bootmaker;
}
}
#endif
