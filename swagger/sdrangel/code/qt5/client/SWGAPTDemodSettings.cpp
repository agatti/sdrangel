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


#include "SWGAPTDemodSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAPTDemodSettings::SWGAPTDemodSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAPTDemodSettings::SWGAPTDemodSettings() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0;
    m_fm_deviation_isSet = false;
    crop_noise = 0;
    m_crop_noise_isSet = false;
    denoise = 0;
    m_denoise_isSet = false;
    linear_equalise = 0;
    m_linear_equalise_isSet = false;
    histogram_equalise = 0;
    m_histogram_equalise_isSet = false;
    precipitation_overlay = 0;
    m_precipitation_overlay_isSet = false;
    flip = 0;
    m_flip_isSet = false;
    channels = 0;
    m_channels_isSet = false;
    decode_enabled = 0;
    m_decode_enabled_isSet = false;
    auto_save = 0;
    m_auto_save_isSet = false;
    auto_save_path = nullptr;
    m_auto_save_path_isSet = false;
    auto_save_min_scan_lines = 0;
    m_auto_save_min_scan_lines_isSet = false;
    save_combined = 0;
    m_save_combined_isSet = false;
    save_separate = 0;
    m_save_separate_isSet = false;
    save_projection = 0;
    m_save_projection_isSet = false;
    scanlines_per_image_update = 0;
    m_scanlines_per_image_update_isSet = false;
    transparency_threshold = 0;
    m_transparency_threshold_isSet = false;
    opacity_threshold = 0;
    m_opacity_threshold_isSet = false;
    palettes = nullptr;
    m_palettes_isSet = false;
    palette = 0;
    m_palette_isSet = false;
    horizontal_pixels_per_degree = 0;
    m_horizontal_pixels_per_degree_isSet = false;
    vertical_pixels_per_degree = 0;
    m_vertical_pixels_per_degree_isSet = false;
    sat_time_offset = 0.0f;
    m_sat_time_offset_isSet = false;
    sat_yaw = 0.0f;
    m_sat_yaw_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = nullptr;
    m_title_isSet = false;
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

SWGAPTDemodSettings::~SWGAPTDemodSettings() {
    this->cleanup();
}

void
SWGAPTDemodSettings::init() {
    input_frequency_offset = 0L;
    m_input_frequency_offset_isSet = false;
    rf_bandwidth = 0.0f;
    m_rf_bandwidth_isSet = false;
    fm_deviation = 0;
    m_fm_deviation_isSet = false;
    crop_noise = 0;
    m_crop_noise_isSet = false;
    denoise = 0;
    m_denoise_isSet = false;
    linear_equalise = 0;
    m_linear_equalise_isSet = false;
    histogram_equalise = 0;
    m_histogram_equalise_isSet = false;
    precipitation_overlay = 0;
    m_precipitation_overlay_isSet = false;
    flip = 0;
    m_flip_isSet = false;
    channels = 0;
    m_channels_isSet = false;
    decode_enabled = 0;
    m_decode_enabled_isSet = false;
    auto_save = 0;
    m_auto_save_isSet = false;
    auto_save_path = new QString("");
    m_auto_save_path_isSet = false;
    auto_save_min_scan_lines = 0;
    m_auto_save_min_scan_lines_isSet = false;
    save_combined = 0;
    m_save_combined_isSet = false;
    save_separate = 0;
    m_save_separate_isSet = false;
    save_projection = 0;
    m_save_projection_isSet = false;
    scanlines_per_image_update = 0;
    m_scanlines_per_image_update_isSet = false;
    transparency_threshold = 0;
    m_transparency_threshold_isSet = false;
    opacity_threshold = 0;
    m_opacity_threshold_isSet = false;
    palettes = new QString("");
    m_palettes_isSet = false;
    palette = 0;
    m_palette_isSet = false;
    horizontal_pixels_per_degree = 0;
    m_horizontal_pixels_per_degree_isSet = false;
    vertical_pixels_per_degree = 0;
    m_vertical_pixels_per_degree_isSet = false;
    sat_time_offset = 0.0f;
    m_sat_time_offset_isSet = false;
    sat_yaw = 0.0f;
    m_sat_yaw_isSet = false;
    rgb_color = 0;
    m_rgb_color_isSet = false;
    title = new QString("");
    m_title_isSet = false;
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
SWGAPTDemodSettings::cleanup() {












    if(auto_save_path != nullptr) { 
        delete auto_save_path;
    }







    if(palettes != nullptr) { 
        delete palettes;
    }






    if(title != nullptr) { 
        delete title;
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

SWGAPTDemodSettings*
SWGAPTDemodSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAPTDemodSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&input_frequency_offset, pJson["inputFrequencyOffset"], "qint64", "");
    
    ::SWGSDRangel::setValue(&rf_bandwidth, pJson["rfBandwidth"], "float", "");
    
    ::SWGSDRangel::setValue(&fm_deviation, pJson["fmDeviation"], "qint32", "");
    
    ::SWGSDRangel::setValue(&crop_noise, pJson["cropNoise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&denoise, pJson["denoise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&linear_equalise, pJson["linearEqualise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&histogram_equalise, pJson["histogramEqualise"], "qint32", "");
    
    ::SWGSDRangel::setValue(&precipitation_overlay, pJson["precipitationOverlay"], "qint32", "");
    
    ::SWGSDRangel::setValue(&flip, pJson["flip"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channels, pJson["channels"], "qint32", "");
    
    ::SWGSDRangel::setValue(&decode_enabled, pJson["decodeEnabled"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_save, pJson["autoSave"], "qint32", "");
    
    ::SWGSDRangel::setValue(&auto_save_path, pJson["autoSavePath"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&auto_save_min_scan_lines, pJson["autoSaveMinScanLines"], "qint32", "");
    
    ::SWGSDRangel::setValue(&save_combined, pJson["saveCombined"], "qint32", "");
    
    ::SWGSDRangel::setValue(&save_separate, pJson["saveSeparate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&save_projection, pJson["saveProjection"], "qint32", "");
    
    ::SWGSDRangel::setValue(&scanlines_per_image_update, pJson["scanlinesPerImageUpdate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transparency_threshold, pJson["transparencyThreshold"], "qint32", "");
    
    ::SWGSDRangel::setValue(&opacity_threshold, pJson["opacityThreshold"], "qint32", "");
    
    ::SWGSDRangel::setValue(&palettes, pJson["palettes"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&palette, pJson["palette"], "qint32", "");
    
    ::SWGSDRangel::setValue(&horizontal_pixels_per_degree, pJson["horizontalPixelsPerDegree"], "qint32", "");
    
    ::SWGSDRangel::setValue(&vertical_pixels_per_degree, pJson["verticalPixelsPerDegree"], "qint32", "");
    
    ::SWGSDRangel::setValue(&sat_time_offset, pJson["satTimeOffset"], "float", "");
    
    ::SWGSDRangel::setValue(&sat_yaw, pJson["satYaw"], "float", "");
    
    ::SWGSDRangel::setValue(&rgb_color, pJson["rgbColor"], "qint32", "");
    
    ::SWGSDRangel::setValue(&title, pJson["title"], "QString", "QString");
    
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
SWGAPTDemodSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAPTDemodSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_input_frequency_offset_isSet){
        obj->insert("inputFrequencyOffset", QJsonValue(input_frequency_offset));
    }
    if(m_rf_bandwidth_isSet){
        obj->insert("rfBandwidth", QJsonValue(rf_bandwidth));
    }
    if(m_fm_deviation_isSet){
        obj->insert("fmDeviation", QJsonValue(fm_deviation));
    }
    if(m_crop_noise_isSet){
        obj->insert("cropNoise", QJsonValue(crop_noise));
    }
    if(m_denoise_isSet){
        obj->insert("denoise", QJsonValue(denoise));
    }
    if(m_linear_equalise_isSet){
        obj->insert("linearEqualise", QJsonValue(linear_equalise));
    }
    if(m_histogram_equalise_isSet){
        obj->insert("histogramEqualise", QJsonValue(histogram_equalise));
    }
    if(m_precipitation_overlay_isSet){
        obj->insert("precipitationOverlay", QJsonValue(precipitation_overlay));
    }
    if(m_flip_isSet){
        obj->insert("flip", QJsonValue(flip));
    }
    if(m_channels_isSet){
        obj->insert("channels", QJsonValue(channels));
    }
    if(m_decode_enabled_isSet){
        obj->insert("decodeEnabled", QJsonValue(decode_enabled));
    }
    if(m_auto_save_isSet){
        obj->insert("autoSave", QJsonValue(auto_save));
    }
    if(auto_save_path != nullptr && *auto_save_path != QString("")){
        toJsonValue(QString("autoSavePath"), auto_save_path, obj, QString("QString"));
    }
    if(m_auto_save_min_scan_lines_isSet){
        obj->insert("autoSaveMinScanLines", QJsonValue(auto_save_min_scan_lines));
    }
    if(m_save_combined_isSet){
        obj->insert("saveCombined", QJsonValue(save_combined));
    }
    if(m_save_separate_isSet){
        obj->insert("saveSeparate", QJsonValue(save_separate));
    }
    if(m_save_projection_isSet){
        obj->insert("saveProjection", QJsonValue(save_projection));
    }
    if(m_scanlines_per_image_update_isSet){
        obj->insert("scanlinesPerImageUpdate", QJsonValue(scanlines_per_image_update));
    }
    if(m_transparency_threshold_isSet){
        obj->insert("transparencyThreshold", QJsonValue(transparency_threshold));
    }
    if(m_opacity_threshold_isSet){
        obj->insert("opacityThreshold", QJsonValue(opacity_threshold));
    }
    if(palettes != nullptr && *palettes != QString("")){
        toJsonValue(QString("palettes"), palettes, obj, QString("QString"));
    }
    if(m_palette_isSet){
        obj->insert("palette", QJsonValue(palette));
    }
    if(m_horizontal_pixels_per_degree_isSet){
        obj->insert("horizontalPixelsPerDegree", QJsonValue(horizontal_pixels_per_degree));
    }
    if(m_vertical_pixels_per_degree_isSet){
        obj->insert("verticalPixelsPerDegree", QJsonValue(vertical_pixels_per_degree));
    }
    if(m_sat_time_offset_isSet){
        obj->insert("satTimeOffset", QJsonValue(sat_time_offset));
    }
    if(m_sat_yaw_isSet){
        obj->insert("satYaw", QJsonValue(sat_yaw));
    }
    if(m_rgb_color_isSet){
        obj->insert("rgbColor", QJsonValue(rgb_color));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
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

qint64
SWGAPTDemodSettings::getInputFrequencyOffset() {
    return input_frequency_offset;
}
void
SWGAPTDemodSettings::setInputFrequencyOffset(qint64 input_frequency_offset) {
    this->input_frequency_offset = input_frequency_offset;
    this->m_input_frequency_offset_isSet = true;
}

float
SWGAPTDemodSettings::getRfBandwidth() {
    return rf_bandwidth;
}
void
SWGAPTDemodSettings::setRfBandwidth(float rf_bandwidth) {
    this->rf_bandwidth = rf_bandwidth;
    this->m_rf_bandwidth_isSet = true;
}

qint32
SWGAPTDemodSettings::getFmDeviation() {
    return fm_deviation;
}
void
SWGAPTDemodSettings::setFmDeviation(qint32 fm_deviation) {
    this->fm_deviation = fm_deviation;
    this->m_fm_deviation_isSet = true;
}

qint32
SWGAPTDemodSettings::getCropNoise() {
    return crop_noise;
}
void
SWGAPTDemodSettings::setCropNoise(qint32 crop_noise) {
    this->crop_noise = crop_noise;
    this->m_crop_noise_isSet = true;
}

qint32
SWGAPTDemodSettings::getDenoise() {
    return denoise;
}
void
SWGAPTDemodSettings::setDenoise(qint32 denoise) {
    this->denoise = denoise;
    this->m_denoise_isSet = true;
}

qint32
SWGAPTDemodSettings::getLinearEqualise() {
    return linear_equalise;
}
void
SWGAPTDemodSettings::setLinearEqualise(qint32 linear_equalise) {
    this->linear_equalise = linear_equalise;
    this->m_linear_equalise_isSet = true;
}

qint32
SWGAPTDemodSettings::getHistogramEqualise() {
    return histogram_equalise;
}
void
SWGAPTDemodSettings::setHistogramEqualise(qint32 histogram_equalise) {
    this->histogram_equalise = histogram_equalise;
    this->m_histogram_equalise_isSet = true;
}

qint32
SWGAPTDemodSettings::getPrecipitationOverlay() {
    return precipitation_overlay;
}
void
SWGAPTDemodSettings::setPrecipitationOverlay(qint32 precipitation_overlay) {
    this->precipitation_overlay = precipitation_overlay;
    this->m_precipitation_overlay_isSet = true;
}

qint32
SWGAPTDemodSettings::getFlip() {
    return flip;
}
void
SWGAPTDemodSettings::setFlip(qint32 flip) {
    this->flip = flip;
    this->m_flip_isSet = true;
}

qint32
SWGAPTDemodSettings::getChannels() {
    return channels;
}
void
SWGAPTDemodSettings::setChannels(qint32 channels) {
    this->channels = channels;
    this->m_channels_isSet = true;
}

qint32
SWGAPTDemodSettings::getDecodeEnabled() {
    return decode_enabled;
}
void
SWGAPTDemodSettings::setDecodeEnabled(qint32 decode_enabled) {
    this->decode_enabled = decode_enabled;
    this->m_decode_enabled_isSet = true;
}

qint32
SWGAPTDemodSettings::getAutoSave() {
    return auto_save;
}
void
SWGAPTDemodSettings::setAutoSave(qint32 auto_save) {
    this->auto_save = auto_save;
    this->m_auto_save_isSet = true;
}

QString*
SWGAPTDemodSettings::getAutoSavePath() {
    return auto_save_path;
}
void
SWGAPTDemodSettings::setAutoSavePath(QString* auto_save_path) {
    this->auto_save_path = auto_save_path;
    this->m_auto_save_path_isSet = true;
}

qint32
SWGAPTDemodSettings::getAutoSaveMinScanLines() {
    return auto_save_min_scan_lines;
}
void
SWGAPTDemodSettings::setAutoSaveMinScanLines(qint32 auto_save_min_scan_lines) {
    this->auto_save_min_scan_lines = auto_save_min_scan_lines;
    this->m_auto_save_min_scan_lines_isSet = true;
}

qint32
SWGAPTDemodSettings::getSaveCombined() {
    return save_combined;
}
void
SWGAPTDemodSettings::setSaveCombined(qint32 save_combined) {
    this->save_combined = save_combined;
    this->m_save_combined_isSet = true;
}

qint32
SWGAPTDemodSettings::getSaveSeparate() {
    return save_separate;
}
void
SWGAPTDemodSettings::setSaveSeparate(qint32 save_separate) {
    this->save_separate = save_separate;
    this->m_save_separate_isSet = true;
}

qint32
SWGAPTDemodSettings::getSaveProjection() {
    return save_projection;
}
void
SWGAPTDemodSettings::setSaveProjection(qint32 save_projection) {
    this->save_projection = save_projection;
    this->m_save_projection_isSet = true;
}

qint32
SWGAPTDemodSettings::getScanlinesPerImageUpdate() {
    return scanlines_per_image_update;
}
void
SWGAPTDemodSettings::setScanlinesPerImageUpdate(qint32 scanlines_per_image_update) {
    this->scanlines_per_image_update = scanlines_per_image_update;
    this->m_scanlines_per_image_update_isSet = true;
}

qint32
SWGAPTDemodSettings::getTransparencyThreshold() {
    return transparency_threshold;
}
void
SWGAPTDemodSettings::setTransparencyThreshold(qint32 transparency_threshold) {
    this->transparency_threshold = transparency_threshold;
    this->m_transparency_threshold_isSet = true;
}

qint32
SWGAPTDemodSettings::getOpacityThreshold() {
    return opacity_threshold;
}
void
SWGAPTDemodSettings::setOpacityThreshold(qint32 opacity_threshold) {
    this->opacity_threshold = opacity_threshold;
    this->m_opacity_threshold_isSet = true;
}

QString*
SWGAPTDemodSettings::getPalettes() {
    return palettes;
}
void
SWGAPTDemodSettings::setPalettes(QString* palettes) {
    this->palettes = palettes;
    this->m_palettes_isSet = true;
}

qint32
SWGAPTDemodSettings::getPalette() {
    return palette;
}
void
SWGAPTDemodSettings::setPalette(qint32 palette) {
    this->palette = palette;
    this->m_palette_isSet = true;
}

qint32
SWGAPTDemodSettings::getHorizontalPixelsPerDegree() {
    return horizontal_pixels_per_degree;
}
void
SWGAPTDemodSettings::setHorizontalPixelsPerDegree(qint32 horizontal_pixels_per_degree) {
    this->horizontal_pixels_per_degree = horizontal_pixels_per_degree;
    this->m_horizontal_pixels_per_degree_isSet = true;
}

qint32
SWGAPTDemodSettings::getVerticalPixelsPerDegree() {
    return vertical_pixels_per_degree;
}
void
SWGAPTDemodSettings::setVerticalPixelsPerDegree(qint32 vertical_pixels_per_degree) {
    this->vertical_pixels_per_degree = vertical_pixels_per_degree;
    this->m_vertical_pixels_per_degree_isSet = true;
}

float
SWGAPTDemodSettings::getSatTimeOffset() {
    return sat_time_offset;
}
void
SWGAPTDemodSettings::setSatTimeOffset(float sat_time_offset) {
    this->sat_time_offset = sat_time_offset;
    this->m_sat_time_offset_isSet = true;
}

float
SWGAPTDemodSettings::getSatYaw() {
    return sat_yaw;
}
void
SWGAPTDemodSettings::setSatYaw(float sat_yaw) {
    this->sat_yaw = sat_yaw;
    this->m_sat_yaw_isSet = true;
}

qint32
SWGAPTDemodSettings::getRgbColor() {
    return rgb_color;
}
void
SWGAPTDemodSettings::setRgbColor(qint32 rgb_color) {
    this->rgb_color = rgb_color;
    this->m_rgb_color_isSet = true;
}

QString*
SWGAPTDemodSettings::getTitle() {
    return title;
}
void
SWGAPTDemodSettings::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

qint32
SWGAPTDemodSettings::getStreamIndex() {
    return stream_index;
}
void
SWGAPTDemodSettings::setStreamIndex(qint32 stream_index) {
    this->stream_index = stream_index;
    this->m_stream_index_isSet = true;
}

qint32
SWGAPTDemodSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGAPTDemodSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGAPTDemodSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGAPTDemodSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGAPTDemodSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGAPTDemodSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGAPTDemodSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGAPTDemodSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}

qint32
SWGAPTDemodSettings::getReverseApiChannelIndex() {
    return reverse_api_channel_index;
}
void
SWGAPTDemodSettings::setReverseApiChannelIndex(qint32 reverse_api_channel_index) {
    this->reverse_api_channel_index = reverse_api_channel_index;
    this->m_reverse_api_channel_index_isSet = true;
}

SWGChannelMarker*
SWGAPTDemodSettings::getChannelMarker() {
    return channel_marker;
}
void
SWGAPTDemodSettings::setChannelMarker(SWGChannelMarker* channel_marker) {
    this->channel_marker = channel_marker;
    this->m_channel_marker_isSet = true;
}

SWGRollupState*
SWGAPTDemodSettings::getRollupState() {
    return rollup_state;
}
void
SWGAPTDemodSettings::setRollupState(SWGRollupState* rollup_state) {
    this->rollup_state = rollup_state;
    this->m_rollup_state_isSet = true;
}


bool
SWGAPTDemodSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_input_frequency_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rf_bandwidth_isSet){
            isObjectUpdated = true; break;
        }
        if(m_fm_deviation_isSet){
            isObjectUpdated = true; break;
        }
        if(m_crop_noise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_denoise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_linear_equalise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_histogram_equalise_isSet){
            isObjectUpdated = true; break;
        }
        if(m_precipitation_overlay_isSet){
            isObjectUpdated = true; break;
        }
        if(m_flip_isSet){
            isObjectUpdated = true; break;
        }
        if(m_channels_isSet){
            isObjectUpdated = true; break;
        }
        if(m_decode_enabled_isSet){
            isObjectUpdated = true; break;
        }
        if(m_auto_save_isSet){
            isObjectUpdated = true; break;
        }
        if(auto_save_path && *auto_save_path != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_auto_save_min_scan_lines_isSet){
            isObjectUpdated = true; break;
        }
        if(m_save_combined_isSet){
            isObjectUpdated = true; break;
        }
        if(m_save_separate_isSet){
            isObjectUpdated = true; break;
        }
        if(m_save_projection_isSet){
            isObjectUpdated = true; break;
        }
        if(m_scanlines_per_image_update_isSet){
            isObjectUpdated = true; break;
        }
        if(m_transparency_threshold_isSet){
            isObjectUpdated = true; break;
        }
        if(m_opacity_threshold_isSet){
            isObjectUpdated = true; break;
        }
        if(palettes && *palettes != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_palette_isSet){
            isObjectUpdated = true; break;
        }
        if(m_horizontal_pixels_per_degree_isSet){
            isObjectUpdated = true; break;
        }
        if(m_vertical_pixels_per_degree_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sat_time_offset_isSet){
            isObjectUpdated = true; break;
        }
        if(m_sat_yaw_isSet){
            isObjectUpdated = true; break;
        }
        if(m_rgb_color_isSet){
            isObjectUpdated = true; break;
        }
        if(title && *title != QString("")){
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

