/*
 * @Author: zzw
 * @email: huanling.zhang@tuya.com
 * @LastEditors: zzw
 * @file name: tuya_voice_prompt.h
 * @Description: 语音播报功能实现(WTN6系列语音芯片， 一线串口通讯)
 * @Copyright: HANGZHOU TUYA INFORMATION TECHNOLOGY CO.,LTD
 * @Company: http://www.tuya.com
 * @Date: 2021-04-22
 * @LastEditTime: 2021-05-25
 *
 */

#ifndef TUYA_VOICE_PROMPT_H_
#define TUYA_VOICE_PROMPT_H_

#include "tuya_ble_common.h"
#include "tuya_ble_log.h"
#include "gpio_8258.h"

#define	WTN6_DATA_PIN	GPIO_PA1	
#define WTN6_BUSY_PIN	GPIO_PA0	

void voice_playing( uint8_t sb_data);
void voice_prompt_init(void);

#endif
