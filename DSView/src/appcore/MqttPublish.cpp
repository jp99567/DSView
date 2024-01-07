#include "MqttPublish.h"
#include <QDebug>

MqttPublish::MqttPublish(QObject *parent):QMqttClient(parent)
{
  qDebug() << "MqttPublish::MqttPublish";
}

MqttPublish::~MqttPublish()
{
}

void MqttPublish::publish(QString path, QString msg)
{
  QMqttClient::publish(QMqttTopicName(path), msg.toUtf8(), 0, false);
}
