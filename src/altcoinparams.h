/*
definitions below is now params for altcoin EMCoin .
this file will be overwrite through some script to switch to other altcoins
definitions below has replaced params in :
chainparams.cpp,
consensus/consensus.h
main.cpp
util.h
*/
#ifndef BITCOIN_ALTCOINPARAMS_H
#define BITCOIN_ALTCOINPARAMS_H
/*
common
*/
const static char* TIME_STAMP =  "The 11 successive rise in the end of China's stock market at 2018-01-15";
const static char* PUBLIC_KEY = "04678afdb0fe5548271967f1a67130b7105cd6a828e03909a67962e0ea1f61deb649f6bc3f4cef38c4f35504e51ec112de5c384df7ba0b8d578a4c702b6bf11d5f";

/*
Main Net
*/

/*chainparams.cpp*/
const static int HALVING_INTERVAL =  500000;//bitcoin is 210000
const static int POW_TARGET_TIMESPAN = 2 * 24 * 60 * 60; //2 * 60 * 4000;
const static int POW_TARGET_SPACING = 2 * 60;
const static bool POW_ALLOW_MIN_DIFFICULTY_BLOCKS = false;
const static int MESSAGE_START_0 = 0x90;
const static int MESSAGE_START_1 = 0x0d;
const static int MESSAGE_START_2 = 0x24;
const static int MESSAGE_START_3 = 0x44;
const static int DEFAULT_PORT = 30059;

const static int NTIME =  1516021200;
const static int NNOUNCE = 250233604;
const static int NBITS = 0x1d0fffff;
const static int NREWORD = 100;
const static char* HASH_GENESIS_BLOCK = "0x0000000356dfe3280f3d085e22e0fda0183598521609a7869e59b3e07ca42425";
const static char* HASH_MERKLE_ROOT = "0xba819786018c69b0b215f6a8cb37bfbedf1065f0a63977db8319ae0aa79be988";
/*DNSSEEDS*/
//const static char*DNSSEEDS1= "120.92.35.170";
//const static char*DNSSEEDS2="120.92.35.170";

const static int nPUBKEY_ADDRESS = 33;//45;
const static int nSCRIPT_ADDRESS = 55;
const static int nSECRET_KEY = 65;
const static bool MINING_REQUIRES_PEERS = false;
const static char* POW_LIMIT = "0x0000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff";
/*TODO: CHECKPOINTS*/

/*consensus/consensus.h*/
const static int ALT_COINBASE_MATURITY = 20;//100;
const static int  ALT_MAX_MONEY = 100000000;//bitcoin is 21000000

/*main.cpp*/
const static int REWORD_OF_MINING = 100;//18750

/*util.h*/
// directory name  named after the altcoin
const static char* DATA_FILE_NAME =  "emcoin";
const static char* DATA_FILE_NAME_UNIX =  ".emcoin";

/*TODO:qt default data path*/

const static int RPC_PORT =  30058;

/*clientversion.cpp*/
const static char* CLIENTNAME = "emcoin";


const static  char* ALT_NET_TRANSPORT1="emcoin";
/*bitcoind.cpp*/
const static  char* ALT_NET_TRANSPORT2="emcoin:";
const static  char* ALT_NET_TRANSPORT3="emcoin://";

/*util.cpp*/
const char * const ALT_BITCOIN_CONF_FILENAME = "emcoin.conf";
const char * const ALT_BITCOIN_PID_FILENAME = "emcoind.pid";

#endif // BITCOIN_ALTCOINPARAMS_H
