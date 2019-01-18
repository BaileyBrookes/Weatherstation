/*
    BLE Modem Driver
    Reads the Data being recived by kUartTxComplete
*/

#include <stdlib.h>
#include "fsl_misc_utilities.h"
#include "fsl_device_registers.h"
#include "fsl_i2c_master_driver.h"
#include "fsl_spi_master_driver.h"
#include "fsl_rtc_driver.h"
#include "fsl_clock_manager.h"
#include "fsl_power_manager.h"
#include "fsl_mcglite_hal.h"
#include "fsl_port_hal.h"
#include "gpio_pins.h"
#include "SEGGER_RTT.h"
#include "warp.h"
//#include "fsl_uart_hal.h"
//#include "fsl_uart_edma_driver.h"
#include "fsl_uart_driver.h"

void initBLEModem()
{
    uart_user_config_t uartConfig;
    uartConfig.baudRate = 38400;
    uartConfig.bitCountPerChar = kUart8BitsPerChar;
    uartConfig.parityMode = kUartParityDisabled;
    uartConfig.stopBitCount = kUartOneStopBit;

    uint32_t uartInstance = 0;
    uart_state_t uartState; // user provides memory for the driver state structure
    UART_DRV_Init(uartInstance, &uartConfig, &uartState);
}

    /*uint8_t sourceBuff[26] ={0}; // sourceBuff can be filled out with desired data
    uint8_t readBuffer[10] = {0}; // readBuffer gets filled with UART_DRV_ReceiveData function
    uint32_t byteCount = sizeof(sourceBuff);
    uint32_t rxRemainingSize = sizeof(readBuffer);
    // for each use there, set timeout as "1"
    // uartState is the run-time state. Pass in memory for this
    // declared previously in the initialization chapter
    UART_DRV_SendDataBlocking(uartInstance, sourceBuff, byteCount, 1); // function won’t return until transmit is complete
    UART_DRV_ReceiveDataBlocking(uartInstance, readBuffer, 1, timeoutValue);*/
