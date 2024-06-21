#include "commandinfo.h"

static SCommandInfo SCommand[CMD_LIST_SIZE];

//ָ���ʽ
//cmd(1Byte) 0x01 ���ڲ�״̬ 0x02 д�ڲ�״̬ 0x03 �ϴ�ָ�� 0x04 �ϴ�����
//reg(2Byte)
//size(2Byte)
//reg_value(size byte)
static uint8_t led_on_cmd[] = {
    0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x01
};
static uint8_t led_off_cmd[] = {
    0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00
};
static uint8_t beep_on_cmd[] = {
    0x02, 0x00, 0x00, 0x00, 0x03, 0x05, 0x00, 0x02
};
static uint8_t beep_off_cmd[] = {
    0x02, 0x00, 0x00, 0x00, 0x03, 0x05, 0x00, 0x00
};
static uint8_t dev_reboot_cmd[] = {
    0x02, 0x00, 0x00, 0x00, 0x01, 0x09
};

static uint8_t *pSCommandListBuffer[CMD_LIST_SIZE] =
{
    led_on_cmd,
    led_off_cmd,
    beep_on_cmd,
    beep_off_cmd,
    dev_reboot_cmd,
};

static uint16_t nSCommandListSize[CMD_LIST_SIZE] =
{
    sizeof(led_on_cmd),
    sizeof(led_off_cmd),
    sizeof(beep_on_cmd),
    sizeof(beep_off_cmd),
    sizeof(dev_reboot_cmd),
};

//ָ�����г�ʼ��
void CommandInfoInit(void)
{
    for(int index=0; index<CMD_LIST_SIZE; index++)
    {
        SCommand[index].m_pbuffer = pSCommandListBuffer[index];
        SCommand[index].m_nSize = nSCommandListSize[index];
    }
}

//��ȡָ��ָ��
SCommandInfo *GetCommandPtr(uint16_t index)
{
    if(index < CMD_LIST_SIZE)
        return &SCommand[index];
    else
        return nullptr;
}

