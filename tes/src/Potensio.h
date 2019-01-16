/*
 * Potensio.h
 *
 *  Created on: 15 Jan 2019
 *      Author: Fotonika
 */

#ifndef SRC_POTENSIO_H_
#define SRC_POTENSIO_H_


#include "xsysmon.h"

typedef struct _typePotentio
{
	u32 value;
	float deg;
	u8 dataOK;
	u8 dataValid;
} typePotentio;

#endif /* SRC_POTENSIO_H_ */
