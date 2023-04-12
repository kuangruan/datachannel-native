// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from libdc.djinni

package com.cdnbye.libdc;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;

public final class IceServer {


    /*package*/ final String mUrl;

    /*package*/ final String mHostname;

    /*package*/ final short mPort;

    /*package*/ final IceServerType mType;

    /*package*/ final String mUsername;

    /*package*/ final String mPassword;

    /*package*/ final IceServerRelayType mRelayType;

    public IceServer(
            @Nullable String url,
            @NonNull String hostname,
            short port,
            @NonNull IceServerType type,
            @NonNull String username,
            @NonNull String password,
            @NonNull IceServerRelayType relayType) {
        this.mUrl = url;
        this.mHostname = hostname;
        this.mPort = port;
        this.mType = type;
        this.mUsername = username;
        this.mPassword = password;
        this.mRelayType = relayType;
    }

    @Nullable
    public String getUrl() {
        return mUrl;
    }

    @NonNull
    public String getHostname() {
        return mHostname;
    }

    public short getPort() {
        return mPort;
    }

    @NonNull
    public IceServerType getType() {
        return mType;
    }

    @NonNull
    public String getUsername() {
        return mUsername;
    }

    @NonNull
    public String getPassword() {
        return mPassword;
    }

    @NonNull
    public IceServerRelayType getRelayType() {
        return mRelayType;
    }

    @Override
    public String toString() {
        return "IceServer{" +
                "mUrl=" + mUrl +
                "," + "mHostname=" + mHostname +
                "," + "mPort=" + mPort +
                "," + "mType=" + mType +
                "," + "mUsername=" + mUsername +
                "," + "mPassword=" + mPassword +
                "," + "mRelayType=" + mRelayType +
        "}";
    }

}
