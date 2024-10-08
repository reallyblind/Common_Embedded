/*
 * File      : beep.cpp
 * beep driver application
 * COPYRIGHT (C) 2020, zc
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-5-4      zc           the first version
 */

/**
 * @addtogroup IMX6ULL
 */
/*@{*/

#include "beep.h"

/**************************************************************************
* Local Macro Definition
***************************************************************************/

/**************************************************************************
* Local Type Definition
***************************************************************************/

/**************************************************************************
* Local static Variable Declaration
***************************************************************************/

/**************************************************************************
* Global Variable Declaration
***************************************************************************/

/**************************************************************************
* Local Function Declaration
***************************************************************************/

/**************************************************************************
* Local Function
***************************************************************************/

/**************************************************************************
* Function
***************************************************************************/
/**
 * beep开关转换函数
 * 
 * @param nBeepStatus 设置蜂鸣器的开关状态
 *  
 * @return NULL
 */
void BeepStatusConvert(uint8_t nBeepStatus)
{
    int nFd;
    uint8_t nVal;

    DRIVER_DEBUG("beep write:%d\n", nBeepStatus);
    nFd = open(BEEP_DEVICE, O_RDWR | O_NDELAY);
    if(nFd != -1)
    {
        nVal = nBeepStatus;
        write(nFd, &nVal, 1);  //将数据写入LED
        close(nFd);
    }
}