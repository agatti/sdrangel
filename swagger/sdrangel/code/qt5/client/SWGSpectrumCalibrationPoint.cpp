/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 7.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSpectrumCalibrationPoint.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGSpectrumCalibrationPoint::SWGSpectrumCalibrationPoint(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSpectrumCalibrationPoint::SWGSpectrumCalibrationPoint() {
    frequency = 0L;
    m_frequency_isSet = false;
    power_relative_reference = 0.0f;
    m_power_relative_reference_isSet = false;
    power_absolute_reference = 0.0f;
    m_power_absolute_reference_isSet = false;
}

SWGSpectrumCalibrationPoint::~SWGSpectrumCalibrationPoint() {
    this->cleanup();
}

void
SWGSpectrumCalibrationPoint::init() {
    frequency = 0L;
    m_frequency_isSet = false;
    power_relative_reference = 0.0f;
    m_power_relative_reference_isSet = false;
    power_absolute_reference = 0.0f;
    m_power_absolute_reference_isSet = false;
}

void
SWGSpectrumCalibrationPoint::cleanup() {



}

SWGSpectrumCalibrationPoint*
SWGSpectrumCalibrationPoint::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSpectrumCalibrationPoint::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&frequency, pJson["frequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&power_relative_reference, pJson["powerRelativeReference"], "float", "");
    
    ::SWGSDRangel::setValue(&power_absolute_reference, pJson["powerAbsoluteReference"], "float", "");
    
}

QString
SWGSpectrumCalibrationPoint::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGSpectrumCalibrationPoint::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_frequency_isSet){
        obj->insert("frequency", QJsonValue(frequency));
    }
    if(m_power_relative_reference_isSet){
        obj->insert("powerRelativeReference", QJsonValue(power_relative_reference));
    }
    if(m_power_absolute_reference_isSet){
        obj->insert("powerAbsoluteReference", QJsonValue(power_absolute_reference));
    }

    return obj;
}

qint64
SWGSpectrumCalibrationPoint::getFrequency() {
    return frequency;
}
void
SWGSpectrumCalibrationPoint::setFrequency(qint64 frequency) {
    this->frequency = frequency;
    this->m_frequency_isSet = true;
}

float
SWGSpectrumCalibrationPoint::getPowerRelativeReference() {
    return power_relative_reference;
}
void
SWGSpectrumCalibrationPoint::setPowerRelativeReference(float power_relative_reference) {
    this->power_relative_reference = power_relative_reference;
    this->m_power_relative_reference_isSet = true;
}

float
SWGSpectrumCalibrationPoint::getPowerAbsoluteReference() {
    return power_absolute_reference;
}
void
SWGSpectrumCalibrationPoint::setPowerAbsoluteReference(float power_absolute_reference) {
    this->power_absolute_reference = power_absolute_reference;
    this->m_power_absolute_reference_isSet = true;
}


bool
SWGSpectrumCalibrationPoint::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_power_relative_reference_isSet){
            isObjectUpdated = true; break;
        }
        if(m_power_absolute_reference_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

