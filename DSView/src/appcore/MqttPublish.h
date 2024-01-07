#pragma once
#include <QString>
#include <QMqttClient>

class MqttPublish : public QMqttClient
{
  Q_OBJECT
public:
  static constexpr auto hostName = "localhost";
  explicit MqttPublish(QObject *parent = nullptr);
  ~MqttPublish();
  void publish(QString path, QString msg);
};
