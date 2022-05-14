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


#include "SWGDATVDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDATVDemodSettings::SWGDATVDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDATVDemodSettings::SWGDATVDemodSettings() {
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
    rf_bandwidth = 0;
    m_rf_bandwidth_isSet = false;
    center_frequency = 0;
    m_center_frequency_isSet = false;
    standard = 0;
    m_standard_isSet = false;
    modulation = 0;
    m_modulation_isSet = false;
    fec = 0;
    m_fec_isSet = false;
    soft_ldpc = 0;
    m_soft_ldpc_isSet = false;
    soft_ldpc_tool_path = nullptr;
    m_soft_ldpc_tool_path_isSet = false;
    soft_ldpc_max_trials = 0;
    m_soft_ldpc_max_trials_isSet = false;
    max_bitflips = 0;
    m_max_bitflips_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    audio_device_name = nullptr;
    m_audio_device_name_isSet = false;
    symbol_rate = 0;
    m_symbol_rate_isSet = false;
    notch_filters = 0;
    m_notch_filters_isSet = false;
    allow_drift = 0;
    m_allow_drift_isSet = false;
    fast_lock = 0;
    m_fast_lock_isSet = false;
    filter = 0;
    m_filter_isSet = false;
    hard_metric = 0;
    m_hard_metric_isSet = false;
    roll_off = 0.0f;
    m_roll_off_isSet = false;
    viterbi = 0;
    m_viterbi_isSet = false;
    excursion = 0;
    m_excursion_isSet = false;
    audio_volume = 0;
    m_audio_volume_isSet = false;
    video_mute = 0;
    m_video_mute_isSet = false;
    udp_ts_address = nullptr;
    m_udp_ts_address_isSet = false;
    udp_ts_port = 0;
    m_udp_ts_port_isSet = false;
    udp_ts = 0;
    m_udp_ts_isSet = false;
    player_enable = 0;
    m_player_enable_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    channel_marker = nullptr;
    m_channel_marker_isSet = false;
    rollup_state = nullptr;
    m_rollup_state_isSet = false;
}

SWGDATVDemodSettings::~SWGDATVDemodSettings() {
    this->cleanup();
}

void
SWGDATVDemodSettings::init() {
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    rf_bandwidth = 0;
    m_rf_bandwidth_isSet = false;
    center_frequency = 0;
    m_center_frequency_isSet = false;
    standard = 0;
    m_standard_isSet = false;
    modulation = 0;
    m_modulation_isSet = false;
    fec = 0;
    m_fec_isSet = false;
    soft_ldpc = 0;
    m_soft_ldpc_isSet = false;
    soft_ldpc_tool_path = new QString("");
    m_soft_ldpc_tool_path_isSet = false;
    soft_ldpc_max_trials = 0;
    m_soft_ldpc_max_trials_isSet = false;
    max_bitflips = 0;
    m_max_bitflips_isSet = false;
    audio_mute = 0;
    m_audio_mute_isSet = false;
    audio_device_name = new QString("");
    m_audio_device_name_isSet = false;
    symbol_rate = 0;
    m_symbol_rate_isSet = false;
    notch_filters = 0;
    m_notch_filters_isSet = false;
    allow_drift = 0;
    m_allow_drift_isSet = false;
    fast_lock = 0;
    m_fast_lock_isSet = false;
    filter = 0;
    m_filter_isSet = false;
    hard_metric = 0;
    m_hard_metric_isSet = false;
    roll_off = 0.0f;
    m_roll_off_isSet = false;
    viterbi = 0;
    m_viterbi_isSet = false;
    excursion = 0;
    m_excursion_isSet = false;
    audio_volume = 0;
    m_audio_volume_isSet = false;
    video_mute = 0;
    m_video_mute_isSet = false;
    udp_ts_address = new QString("");
    m_udp_ts_address_isSet = false;
    udp_ts_port = 0;
    m_udp_ts_port_isSet = false;
    udp_ts = 0;
    m_udp_ts_isSet = false;
    player_enable = 0;
    m_player_enable_isSet = false;
    stream_index = 0;
    m_stream_index_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
    reverse_api_channel_index = 0;
    m_reverse_api_channel_index_isSet = false;
    channel_marker = new SWGChannelMarker();
    m_channel_marker_isSet = false;
    rollup_state = new SWGRollupState();
    m_rollup_state_isSet = false;
}

void
SWGDATVDemodSettings::cleanup() {

    if(title != nullptr) { 
        delete title;
    }






    if(soft_ldpc_tool_path != nullptr) { 
        delete soft_ldpc_tool_path;
    }



    if(audio_device_name != nullptr) { 
        delete audio_device_name;
    }











    if(udp_ts_address != nullptr) { 
        delete udp_ts_address;
    }





    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }



    if(channel_marker != nullptr) { 
        delete channel_marker;
    }
    if(rollup_state != nullptr) { 
        delete rollup_state;
    }
}

SWGDATVDemodSettings*
SWGDATVDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDATVDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "qint32", "");
    
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint32", "");
    
    ::SWGSDRangel::setValue(&standard, pJson["standard"], "qint32", "");
    
    ::SWGSDRangel::setValue(&modulation, pJson["modulation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fec, pJson["fec"], "qint32", "");
    
    ::SWGSDRangel::setValue(&soft_ldpc, pJson["softLDPC"], "qint32", "");
    
    ::SWGSDRangel::setValue(&soft_ldpc_tool_path, pJson["softLDPCToolPath"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&soft_ldpc_max_trials, pJson["softLDPCMaxTrials"], "qint32", "");
    
    ::SWGSDRangel::setValue(&max_bitflips, pJson["maxBitflips"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_mute, pJson["audioMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_device_name, pJson["audioDeviceName"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&symbol_rate, pJson["symbolRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&notch_filters, pJson["notchFilters"], "qint32", "");
    
    ::SWGSDRangel::setValue(&allow_drift, pJson["allowDrift"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fast_lock, pJson["fastLock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&filter, pJson["filter"], "qint32", "");
    
    ::SWGSDRangel::setValue(&hard_metric, pJson["hardMetric"], "qint32", "");
    
    ::SWGSDRangel::setValue(&roll_off, pJson["rollOff"], "float", "");
    
    ::SWGSDRangel::setValue(&viterbi, pJson["viterbi"], "qint32", "");
    
    ::SWGSDRangel::setValue(&excursion, pJson["excursion"], "qint32", "");
    
    ::SWGSDRangel::setValue(&audio_volume, pJson["audioVolume"], "qint32", "");
    
    ::SWGSDRangel::setValue(&video_mute, pJson["videoMute"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_ts_address, pJson["udpTSAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&udp_ts_port, pJson["udpTSPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&udp_ts, pJson["udpTS"], "qint32", "");
    
    ::SWGSDRangel::setValue(&player_enable, pJson["playerEnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&stream_index, pJson["streamIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_channel_index, pJson["reverseAPIChannelIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channel_marker, pJson["channelMarker"], "SWGChannelMarker", "SWGChannelMarker");
    
    ::SWGSDRangel::setValue(&rollup_state, pJson["rollupState"], "SWGRollupState", "SWGRollupState");
    
}

QString
SWGDATVDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDATVDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_standard_isSet){
        obj->insert("standard", QJsonValue(standard));
    }
    if(m_modulation_isSet){
        obj->insert("modulation", QJsonValue(modulation));
    }
    if(m_fec_isSet){
        obj->insert("fec", QJsonValue(fec));
    }
    if(m_soft_ldpc_isSet){
        obj->insert("softLDPC", QJsonValue(soft_ldpc));
    }
    if(soft_ldpc_tool_path != nullptr && *soft_ldpc_tool_path != QString("")){
        toJsonValue(QString("softLDPCToolPath"), soft_ldpc_tool_path, obj, QString("QString"));
    }
    if(m_soft_ldpc_max_trials_isSet){
        obj->insert("softLDPCMaxTrials", QJsonValue(soft_ldpc_max_trials));
    }
    if(m_max_bitflips_isSet){
        obj->insert("maxBitflips", QJsonValue(max_bitflips));
    }
    if(m_audio_mute_isSet){
        obj->insert("audioMute", QJsonValue(audio_mute));
    }
    if(audio_device_name != nullptr && *audio_device_name != QString("")){
        toJsonValue(QString("audioDeviceName"), audio_device_name, obj, QString("QString"));
    }
    if(m_symbol_rate_isSet){
        obj->insert("symbolRate", QJsonValue(symbol_rate));
    }
    if(m_notch_filters_isSet){
        obj->insert("notchFilters", QJsonValue(notch_filters));
    }
    if(m_allow_drift_isSet){
        obj->insert("allowDrift", QJsonValue(allow_drift));
    }
    if(m_fast_lock_isSet){
        obj->insert("fastLock", QJsonValue(fast_lock));
    }
    if(m_filter_isSet){
        obj->insert("filter", QJsonValue(filter));
    }
    if(m_hard_metric_isSet){
        obj->insert("hardMetric", QJsonValue(hard_metric));
    }
    if(m_roll_off_isSet){
        obj->insert("rollOff", QJsonValue(roll_off));
    }
    if(m_viterbi_isSet){
        obj->insert("viterbi", QJsonValue(viterbi));
    }
    if(m_excursion_isSet){
        obj->insert("excursion", QJsonValue(excursion));
    }
    if(m_audio_volume_isSet){
        obj->insert("audioVolume", QJsonValue(audio_volume));
    }
    if(m_video_mute_isSet){
        obj->insert("videoMute", QJsonValue(video_mute));
    }
    if(udp_ts_address != nullptr && *udp_ts_address != QString("")){
        toJsonValue(QString("udpTSAddress"), udp_ts_address, obj, QString("QString"));
    }
    if(m_udp_ts_port_isSet){
        obj->insert("udpTSPort", QJsonValue(udp_ts_port));
    }
    if(m_udp_ts_isSet){
        obj->insert("udpTS", QJsonValue(udp_ts));
    }
    if(m_player_enable_isSet){
        obj->insert("playerEnable", QJsonValue(player_enable));
    }
    if(m_stream_index_isSet){
        obj->insert("streamIndex", QJsonValue(stream_index));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }
    if(m_reverse_api_channel_index_isSet){
        obj->insert("reverseAPIChannelIndex", QJsonValue(reverse_api_channel_index));
    }
    if((channel_marker != nullptr) && (channel_marker->isSet())){
        toJsonValue(QString("channelMarker"), channel_marker, obj, QString("SWGChannelMarker"));
    }
    if((rollup_state != nullptr) && (rollup_state->isSet())){
        toJsonValue(QString("rollupState"), rollup_state, obj, QString("SWGRollupState"));
    }

    return obj;
}

qint32
SWGDATVDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGDATVDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGDATVDemodSettings::getTitle() {
    return title;
}
void
SWGDATVDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGDATVDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGDATVDemodSettings::setRfBandwidth(qint32 rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

qint32
SWGDATVDemodSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGDATVDemodSettings::setCenterFrequency(qint32 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGDATVDemodSettings::getStandard() {
    return standard;
}
void
SWGDATVDemodSettings::setStandard(qint32 standard) {
    this->standard = standard;
    this->m_standard_isSet = true;
}

qint32
SWGDATVDemodSettings::getModulation() {
    return modulation;
}
void
SWGDATVDemodSettings::setModulation(qint32 modulation) {
    this->modulation = modulation;
    this->m_modulation_isSet = true;
}

qint32
SWGDATVDemodSettings::getFec() {
    return fec;
}
void
SWGDATVDemodSettings::setFec(qint32 fec) {
    this->fec = fec;
    this->m_fec_isSet = true;
}

qint32
SWGDATVDemodSettings::getSoftLdpc() {
    return soft_ldpc;
}
void
SWGDATVDemodSettings::setSoftLdpc(qint32 soft_ldpc) {
    this->soft_ldpc = soft_ldpc;
    this->m_soft_ldpc_isSet = true;
}

QString*
SWGDATVDemodSettings::getSoftLdpcToolPath() {
    return soft_ldpc_tool_path;
}
void
SWGDATVDemodSettings::setSoftLdpcToolPath(QString* soft_ldpc_tool_path) {
    this->soft_ldpc_tool_path = soft_ldpc_tool_path;
    this->m_soft_ldpc_tool_path_isSet = true;
}

qint32
SWGDATVDemodSettings::getSoftLdpcMaxTrials() {
    return soft_ldpc_max_trials;
}
void
SWGDATVDemodSettings::setSoftLdpcMaxTrials(qint32 soft_ldpc_max_trials) {
    this->soft_ldpc_max_trials = soft_ldpc_max_trials;
    this->m_soft_ldpc_max_trials_isSet = true;
}

qint32
SWGDATVDemodSettings::getMaxBitflips() {
    return max_bitflips;
}
void
SWGDATVDemodSettings::setMaxBitflips(qint32 max_bitflips) {
    this->max_bitflips = max_bitflips;
    this->m_max_bitflips_isSet = true;
}

qint32
SWGDATVDemodSettings::getAudioMute() {
    return audio_mute;
}
void
SWGDATVDemodSettings::setAudioMute(qint32 audio_mute) {
    this->audio_mute = audio_mute;
    this->m_audio_mute_isSet = true;
}

QString*
SWGDATVDemodSettings::getAudioDeviceName() {
    return audio_device_name;
}
void
SWGDATVDemodSettings::setAudioDeviceName(QString* audio_device_name) {
    this->audio_device_name = audio_device_name;
    this->m_audio_device_name_isSet = true;
}

qint32
SWGDATVDemodSettings::getSymbolRate() {
    return symbol_rate;
}
void
SWGDATVDemodSettings::setSymbolRate(qint32 symbol_rate) {
    this->symbol_rate = symbol_rate;
    this->m_symbol_rate_isSet = true;
}

qint32
SWGDATVDemodSettings::getNotchFilters() {
    return notch_filters;
}
void
SWGDATVDemodSettings::setNotchFilters(qint32 notch_filters) {
    this->notch_filters = notch_filters;
    this->m_notch_filters_isSet = true;
}

qint32
SWGDATVDemodSettings::getAllowDrift() {
    return allow_drift;
}
void
SWGDATVDemodSettings::setAllowDrift(qint32 allow_drift) {
    this->allow_drift = allow_drift;
    this->m_allow_drift_isSet = true;
}

qint32
SWGDATVDemodSettings::getFastLock() {
    return fast_lock;
}
void
SWGDATVDemodSettings::setFastLock(qint32 fast_lock) {
    this->fast_lock = fast_lock;
    this->m_fast_lock_isSet = true;
}

qint32
SWGDATVDemodSettings::getFilter() {
    return filter;
}
void
SWGDATVDemodSettings::setFilter(qint32 filter) {
    this->filter = filter;
    this->m_filter_isSet = true;
}

qint32
SWGDATVDemodSettings::getHardMetric() {
    return hard_metric;
}
void
SWGDATVDemodSettings::setHardMetric(qint32 hard_metric) {
    this->hard_metric = hard_metric;
    this->m_hard_metric_isSet = true;
}

float
SWGDATVDemodSettings::getRollOff() {
    return roll_off;
}
void
SWGDATVDemodSettings::setRollOff(float roll_off) {
    this->roll_off = roll_off;
    this->m_roll_off_isSet = true;
}

qint32
SWGDATVDemodSettings::getViterbi() {
    return viterbi;
}
void
SWGDATVDemodSettings::setViterbi(qint32 viterbi) {
    this->viterbi = viterbi;
    this->m_viterbi_isSet = true;
}

qint32
SWGDATVDemodSettings::getExcursion() {
    return excursion;
}
void
SWGDATVDemodSettings::setExcursion(qint32 excursion) {
    this->excursion = excursion;
    this->m_excursion_isSet = true;
}

qint32
SWGDATVDemodSettings::getAudioVolume() {
    return audio_volume;
}
void
SWGDATVDemodSettings::setAudioVolume(qint32 audio_volume) {
    this->audio_volume = audio_volume;
    this->m_audio_volume_isSet = true;
}

qint32
SWGDATVDemodSettings::getVideoMute() {
    return video_mute;
}
void
SWGDATVDemodSettings::setVideoMute(qint32 video_mute) {
    this->video_mute = video_mute;
    this->m_video_mute_isSet = true;
}

QString*
SWGDATVDemodSettings::getUdpTsAddress() {
    return udp_ts_address;
}
void
SWGDATVDemodSettings::setUdpTsAddress(QString* udp_ts_address) {
    this->udp_ts_address = udp_ts_address;
    this->m_udp_ts_address_isSet = true;
}

qint32
SWGDATVDemodSettings::getUdpTsPort() {
    return udp_ts_port;
}
void
SWGDATVDemodSettings::setUdpTsPort(qint32 udp_ts_port) {
    this->udp_ts_port = udp_ts_port;
    this->m_udp_ts_port_isSet = true;
}

qint32
SWGDATVDemodSettings::getUdpTs() {
    return udp_ts;
}
void
SWGDATVDemodSettings::setUdpTs(qint32 udp_ts) {
    this->udp_ts = udp_ts;
    this->m_udp_ts_isSet = true;
}

qint32
SWGDATVDemodSettings::getPlayerEnable() {
    return player_enable;
}
void
SWGDATVDemodSettings::setPlayerEnable(qint32 player_enable) {
    this->player_enable = player_enable;
    this->m_player_enable_isSet = true;
}

qint32
SWGDATVDemodSettings::getStreamIndex() {
    return stream_index;
}
void
SWGDATVDemodSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGDATVDemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGDATVDemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGDATVDemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGDATVDemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGDATVDemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGDATVDemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGDATVDemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGDATVDemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGDATVDemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGDATVDemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGChannelMarker*
SWGDATVDemodSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGDATVDemodSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}

SWGRollupState*
SWGDATVDemodSettings::getRollupState() {
    return rollup_state;
}
void
SWGDATVDemodSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGDATVDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_center_frequency_isSet){
            isObjectUpdated = true; break;
        }
        if(m_standard_isSet){
            isObjectUpdated = true; break;
        }
        if(m_modulation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fec_isSet){
            isObjectUpdated = true; break;
        }
        if(m_soft_ldpc_isSet){
            isObjectUpdated = true; break;
        }
        if(soft_ldpc_tool_path && *soft_ldpc_tool_path != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_soft_ldpc_max_trials_isSet){
            isObjectUpdated = true; break;
        }
        if(m_max_bitflips_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(audio_device_name && *audio_device_name != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_symbol_rate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_notch_filters_isSet){
            isObjectUpdated = true; break;
        }
        if(m_allow_drift_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fast_lock_isSet){
            isObjectUpdated = true; break;
        }
        if(m_filter_isSet){
            isObjectUpdated = true; break;
        }
        if(m_hard_metric_isSet){
            isObjectUpdated = true; break;
        }
        if(m_roll_off_isSet){
            isObjectUpdated = true; break;
        }
        if(m_viterbi_isSet){
            isObjectUpdated = true; break;
        }
        if(m_excursion_isSet){
            isObjectUpdated = true; break;
        }
        if(m_audio_volume_isSet){
            isObjectUpdated = true; break;
        }
        if(m_video_mute_isSet){
            isObjectUpdated = true; break;
        }
        if(udp_ts_address && *udp_ts_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_udp_ts_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_udp_ts_isSet){
            isObjectUpdated = true; break;
        }
        if(m_player_enable_isSet){
            isObjectUpdated = true; break;
        }
        if(m_stream_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_use_reverse_api_isSet){
            isObjectUpdated = true; break;
        }
        if(reverse_api_address && *reverse_api_address != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_port_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_device_index_isSet){
            isObjectUpdated = true; break;
        }
        if(m_reverse_api_channel_index_isSet){
            isObjectUpdated = true; break;
        }
        if(channel_marker && channel_marker->isSet()){
            isObjectUpdated = true; break;
        }
        if(rollup_state && rollup_state->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

