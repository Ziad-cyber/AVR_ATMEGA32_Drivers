#include "std_macros.h"

uint8_t eeprom_read (uint16_t  address){
		while(READBIT(EECR, EEWE) == 1){}
			EEAR = address;
			SETBIT(EECR,EERE);
			
			return EEDR;
}

#define  EEARR *( (uint16_t *) 0x1E)
void eeprom_write (uint16_t  address, uint8_t data){
	while(READBIT(EECR, EEWE) == 1){}
		EEAR = address;
		EEDR = data;
		SETBIT(EECR, EEMWE);
		SETBIT(EECR, EEWE);
		
}