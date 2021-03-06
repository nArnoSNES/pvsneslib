/*---------------------------------------------------------------------------------


	Simple check region code between console and cartrige
    Cartridge is currently in region 03 , which is a PAL region
	-- alekmaul


---------------------------------------------------------------------------------*/
#include <snes.h>

extern char snesfont;

unsigned short pad0;

//---------------------------------------------------------------------------------
int main(void) {
    // Initialize SNES 
	consoleInit();
    
    // Initialize text console with our font
	consoleInitText(0, 0, &snesfont);

	// Draw a wonderfull text :P
	consoleDrawText(10,6,"CHECK REGIONS");
	consoleDrawText(3,10,"BETWEEN SNES AND CARTRIDGE");

	// Now Put in 16 color mode and disable Bgs except current
	setMode(BG_MODE1,0);  bgSetDisable(1);  bgSetDisable(2);

	// Display screen
	setScreenOn();
	
    // Check the regions (1 if ok)
    if (consoleRegionIsOK()==1) {
        consoleDrawText(6,14,"OK, THE SAME REGION!");
    }
    else {
        consoleDrawText(4,14,"BAD, NOT THE SAME REGION!");
    }
    
	while(1) {
		WaitForVBlank();
	}
	return 0;
}
