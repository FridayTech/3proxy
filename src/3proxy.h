#pragma once

#ifdef __cplusplus
extern "C"
{
#endif
    /// \brief Start 3Proxy for traffic shaping.
    /// \param logDir Directory of output 3Proxy log.
    /// \param proxyIp Ip of the 3Proxy. Proxy port is 3128.
    int startProxy(const char* logDir, const char* proxyIp);

    /// \brief Stop 3Proxy for traffic shaping.
    void stopProxy();

    /// \brief Set 3Proxy bandwidth limit (in bps).
    /// \param bandlimit Bandwidth limit of 3Proxy (in bps).
    void setLimitBandwidth(int bandlimit);

    /// \brief Remove 3Proxy bandwidth limitation.
    void removeBandwidthLimitation();

    /// \brief Set 3Proxy log format.
    ///     Please refer the format to /external/3Proxy/doc/html/howtoe.html#LOGFORMAT.
    ///     For error code reference, please refer to /external/3Proxy/doc/html/howtoe.html#ERRORS.
    ///     If log format is not set, log format will use 3Proxy LOGDEFAULT format ("G%y%m%d%H%M%S.%. %p %E %U %C:%c %R:%r %O %I %h %T").
    /// \param logFormat 3Proxy log format.
    void setLogFormat(const char* logFormat);

    /// \brief Reload 3Proxy for traffic shaping. Use this if there are configuration changes (bandwidth limit and/or log format) for 3Proxy.
    void reloadProxy();

#ifdef __cplusplus
} //end extern "C"
#endif
