#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

#define SERIAL_PORT "COM3" // Update this with the correct serial port for your Arduino

int main() {
    HANDLE serial_port = CreateFile(SERIAL_PORT, GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
    if (serial_port == INVALID_HANDLE_VALUE) {
        printf("Error opening serial port. Make sure the port is correct and not in use.\n");
        return 1;
    }

    DCB dcbSerialParams = {0};
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    if (!GetCommState(serial_port, &dcbSerialParams)) {
        printf("Error getting serial port state.\n");
        CloseHandle(serial_port);
        return 1;
    }

    dcbSerialParams.BaudRate = CBR_9600;
    dcbSerialParams.ByteSize = 8;
    dcbSerialParams.StopBits = ONESTOPBIT;
    dcbSerialParams.Parity = NOPARITY;

    if (!SetCommState(serial_port, &dcbSerialParams)) {
        printf("Error setting serial port parameters.\n");
        CloseHandle(serial_port);
        return 1;
    }

    COMMTIMEOUTS timeouts = {0};
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    if (!SetCommTimeouts(serial_port, &timeouts)) {
        printf("Error setting serial port timeouts.\n");
        CloseHandle(serial_port);
        return 1;
    }

    while (1) {
        // Read data from the Arduino
        char rx_buffer[256];
        DWORD bytes_read;
        if (!ReadFile(serial_port, &rx_buffer, sizeof(rx_buffer), &bytes_read, NULL)) {
            printf("Error reading from serial port.\n");
            CloseHandle(serial_port);
            return 1;
        }
        if (bytes_read > 0) {
            rx_buffer[bytes_read] = '\0'; // Null-terminate the string
            printf("C Program received: %s\n", rx_buffer); // Print the received data
        }

        // Send data to the Arduino
        char tx_buffer[1] = {'A'}; // Data to send (replace 'A' with the desired character)
        DWORD bytes_written;
        if (!WriteFile(serial_port, &tx_buffer, sizeof(tx_buffer), &bytes_written, NULL)) {
            printf("Error writing to serial port.\n");
            CloseHandle(serial_port);
            return 1;
        }
        printf("C Program sent: %c\n", tx_buffer[0]); // Print the sent character

        Sleep(1000); // Wait for 1 second before sending/receiving the next data
    }

    CloseHandle(serial_port); // Close serial port
    return 0;
}
