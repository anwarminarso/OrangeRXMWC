#ifndef OPENLRS_CONFIG_H_
#define OPENLRS_CONFIG_H_

//####### RX BOARD TYPE #######
// 1 = Rx v1 Board
// 2 = Rx v2 Board
#define RX_BOARD_TYPE 2

//###### SERIAL PPM Type #######
// Plug a jumper between Ch1 and CH3 for switching your Rx to SerialPPM mode
// =Serial PPM Types=
// 0 is classic SerialPPM, disables parallel outputs and uses CH8 for serial PPM output.
// 1 is Mixed PPM, uses CH4 for serial PPM output and last 4 channels (CH5,CH6,CH7,CH8) works normally as ParallelPPM mode.
// 2 Standard SerialPPM on Pin9 (v2RX)
#define SERIAL_PPM_TYPE 0

//######### Band Select ##########
// 0 = 433Mhz
// 1 = 459Mhz
#define BAND 0

//######### TRANSMISSION VARIABLES ##########
#define CARRIER_FREQUENCY 435000  //  startup frequency

//####### Freq Hopping #######
// 1 = Enabled  0 = Disabled
#define FREQUENCY_HOPPING 0

//###### HOPPING CHANNELS #######
#define CHNO 4
static unsigned char hop_list[CHNO] = {21,25,54,0};

//###### RF DEVICE ID HEADERS #######
// Change this 4 byte values for isolating your transmission, RF module accepts only data with same header
static unsigned char RF_Header[4] = {'A','N','W','R'};

//###### SERIAL PORT SPEED #######
#define SERIAL_BAUD_RATE 115200 //115.200 baud serial port speed


#endif