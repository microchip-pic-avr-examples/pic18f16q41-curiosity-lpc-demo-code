
/**
 * WWDT Generated Driver API Header File
 * 
 * @file wwdt.h
 * 
 * @defgroup  wwdt WWDT
 * 
 * @brief This is the generated header file for the WWDT driver.
 *
 * @version WWDT Driver Version 2.0.0
*/

/*
� [2021] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef WATCHDOG_H
#define WATCHDOG_H

 /**
   Section: Included Files
 */

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>

#define WDTCWS  7
#define WDTCCS  16
#define WDTCPS  24



/**
 * @ingroup wwdt
 * @brief  Initializes the WWDT to the default states configured in the MCC GUI.
 * @param none
 * @return none
 * 
 */
void WWDT_Initialize(void);

/**
 * @ingroup wwdt
 * @brief  Enable the WWDT by setting the SEN bit
 * @param none
 * @return none
 * 
 */
void WWDT_SoftEnable(void);

/**
 * @ingroup wwdt
 * @brief  Disable the WWDT by clearing the SEN bit.
 * @param none
 * @return none
 * 
 */
void WWDT_SoftDisable(void);

/**
 * @ingroup wwdt
 * @brief   Disable the interrupt, arm the WWDT by reading back the WDTCON0 register
 *          clear the WWDT and enable the interrupt.
 * @param none
 * @return none
 */
void WWDT_TimerClear(void);

/**
 * @ingroup wwdt
 * @brief  Returns the status of whether the WWDT reset has occurred or not.
 * @param none
 * @retval 0 - WWDT reset has occurred.
 * @retval 1 - WWDT reset has not occurred. 
 */
bool WWDT_TimeOutStatusGet(void);

/**
 * @ingroup wwdt
 * @brief  Returns the status of, whether the WWDT window violation 
 *         reset has occurred or not.
 * @param none
 * @retval 0 - WWDT window violation reset has occurred.
 * @retval 1 - WWDT window violation reset has not occurred.
 */
bool WWDT_WindowViolationStatusGet(void);  

#endif	/* WATCHDOG_H */
/**
 End of File
*/