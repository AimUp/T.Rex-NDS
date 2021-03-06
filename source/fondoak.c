/*---------------------------------------------------------------------------------
Kode hau garatu da dovotoren "Simple sprite demo" adibidean eta Jaeden Ameronen beste
adibide batean oinarrituta.
---------------------------------------------------------------------------------*/

#include <nds.h> 		//nds-rako garatuta dagoen liburutegia
#include <stdio.h>		//c-ko liburutegi estandarra sarrera eta irteerako funtzioak definitzen dituena
#include <stdlib.h>		//c-ko liburutegi estandarra memoria erreserbak eta zenbaki konbertsioak egiteko
#include <unistd.h>		//Sistema eragileen arteko konpatibilitatea ziurtatzeko liburutegia

/* Fondo desberdinak erakutsi nahi izango baditugu, hemen fondo bakoitzaren burukoa (.h fitxategia) gehitu behar da. Buruko horiek
automatikoki sortzen dira, konpilatzerako garaian, baina horretarako gogoratu behar da */

#include "fondoak.h"
#include "grafikoak.h"
#include "PartidaFondoa.h"
#include "HasieraFondoa.h"
#include "BukaeraFondoa.h"

/* irudiak memorian kopiatzeko DMA kanala aukeratu (3.a) */
static const int DMA_CHANNEL = 3;

/* Pantailaratu nahi den grafiko bakoitzerako horrelako prozedura bat idatzi behar da */

void erakutsiPartidaFondoa() {
	dmaCopyHalfWords(DMA_CHANNEL,
                     PartidaFondoaBitmap, /* Automatikoki sortzen den aldagaia */
                     (uint16 *)BG_BMP_RAM(0), /* Fondo nagusiaren helbidea */
                     PartidaFondoaBitmapLen); /* Luzera (bytetan) automatikoki sortzen den aldagaia */
}

void erakutsiHasieraFondoa() {
	dmaCopyHalfWords(DMA_CHANNEL,
                     HasieraFondoaBitmap, /* Automatikoki sortzen den aldagaia */
                     (uint16 *)BG_BMP_RAM(0), /* Fondo nagusiaren helbidea */
                     HasieraFondoaBitmapLen); /* Luzera (bytetan) automatikoki sortzen den aldagaia */
}

void erakutsiBukaeraFondoa() {
	dmaCopyHalfWords(DMA_CHANNEL,
                     BukaeraFondoaBitmap, /* Automatikoki sortzen den aldagaia */
                     (uint16 *)BG_BMP_RAM(0), /* Fondo nagusiaren helbidea */
                     BukaeraFondoaBitmapLen); /* Luzera (bytetan) automatikoki sortzen den aldagaia */
}