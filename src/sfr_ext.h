#ifndef __SFR_EXT_H_
#define __SFR_EXT_H_

sfr SFR_CMD     = 0xB9;
sfr SFR_DATA    = 0xBA;
sfr SFR_ADDRL   = 0xBB;
sfr SFR_ADDRH   = 0xBC;
sfr SFR_BUSY    = 0xBD;
sfr DBG_PIN0    = 0xFB;

void WriteReg(uint8_t page, uint8_t addr, uint8_t dat);
uint8_t ReadReg(uint8_t page, uint8_t addr);

void Write936x(uint16_t addr, uint8_t dat);
uint8_t Read936x(uint16_t addr);

/*
void OSD_Mark_wr(uint16_t addr, uint8_t dat);
void OSD_Map_wr(uint16_t addr, uint8_t dat);
void OSD_CH_wr(uint16_t addr, uint8_t dat);
*/
void DP_tx(uint8_t dat);

#endif
