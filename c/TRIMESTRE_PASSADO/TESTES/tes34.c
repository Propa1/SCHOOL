#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <winsock2.h>
#include <windows.h>
#include <iphlpapi.h>

#define DEFAULT_TIMEOUT 1000
#define DEFAULT_DATA_SIZE 32

bool ping(const char* ipAddress) {
    HANDLE icmpHandle = IcmpCreateFile();
    if (icmpHandle == INVALID_HANDLE_VALUE) {
        printf("Failed to create ICMP handle\n");
        return false;
    }

    char sendData[DEFAULT_DATA_SIZE] = "Ping";
    LPVOID replyBuffer = malloc(sizeof(ICMP_ECHO_REPLY) + sizeof(sendData));
    if (replyBuffer == NULL) {
        printf("Failed to allocate memory for reply buffer\n");
        IcmpCloseHandle(icmpHandle);
        return false;
    }

    DWORD replySize = sizeof(ICMP_ECHO_REPLY) + sizeof(sendData);
    DWORD result = IcmpSendEcho(icmpHandle, inet_addr(ipAddress), sendData, sizeof(sendData), NULL, replyBuffer, replySize, DEFAULT_TIMEOUT);
    if (result == 0) {
        printf("Failed to send ICMP echo request\n");
        free(replyBuffer);
        IcmpCloseHandle(icmpHandle);
        return false;
    }

    PICMP_ECHO_REPLY reply = (PICMP_ECHO_REPLY)replyBuffer;
    if (reply->Status == IP_SUCCESS) {
        printf("Ping successful\n");
    } else {
        printf("Ping failed with error: %ld\n", reply->Status);
    }

    free(replyBuffer);
    IcmpCloseHandle(icmpHandle);
    return true;
}

int main() {
    const char* ipAddress = "127.0.0.1"; // Replace with the IP address you want to ping
    if (ping(ipAddress)) {
        printf("Ping to %s successful\n", ipAddress);
    } else {
        printf("Ping to %s failed\n", ipAddress);
    }

    return 0;
}
