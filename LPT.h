#ifndef LPT_H
#define LPT_H

#define IO_MCU_LPT_STROBE INPUT
#define IO_MCU_LPT_STROBE OUTPUT
#define IO_MCU_LPT_D0 OUTPUT
#define IO_MCU_LPT_D1 OUTPUT
#define IO_MCU_LPT_D2 OUTPUT
#define IO_MCU_LPT_D3 OUTPUT
#define IO_MCU_LPT_D4 OUTPUT
#define IO_MCU_LPT_D5 OUTPUT
#define IO_MCU_LPT_D6 OUTPUT
#define IO_MCU_LPT_D7 OUTPUT
#define IO_MCU_LPT_ACK INPUT
#define IO_MCU_LPT_BUSY INPUT
#define IO_MCU_LPT_PaperOut INPUT
#define IO_MCU_LPT_SELECT INPUT
#define IO_MCU_LPT_LineFeed INPUT
#define IO_MCU_LPT_LineFeed OUTPUT
#define IO_MCU_LPT_ERROR INPUT
#define IO_MCU_LPT_RESET INPUT
#define IO_MCU_LPT_RESET OUTPUT
#define IO_MCU_LPT_SelectPrinter INPUT
#define IO_MCU_LPT_SelectPrinter OUTPUT

uint8_t PROCESS_STROBE;
uint8_t PROCESS_D0;
uint8_t PROCESS_D1;
uint8_t PROCESS_D2;
uint8_t PROCESS_D3;
uint8_t PROCESS_D4;
uint8_t PROCESS_D5;
uint8_t PROCESS_D6;
uint8_t PROCESS_D7;
uint8_t PROCESS_ACK;
uint8_t PROCESS_BUSY;
uint8_t PROCESS_PaperOut;
uint8_t PROCESS_SELECT;
uint8_t PROCESS_LineFeed;
uint8_t PROCESS_ERROR;
uint8_t PROCESS_RESET;
uint8_t PROCESS_SelectPrinter;

class LPT
{
  public:
  LPT(int STROBE, int D0, int D1, int D2, int D3, int D4, int D5, int D6, int D7, int ACK, int BUSY, int PaperOut, int SELECT, int LineFeed, int ERROR, int RESET, int SelectPrinter){
PROCESS_STROBE = STROBE;
PROCESS_D0 = D0;
PROCESS_D1 = D1;
PROCESS_D2 = D2;
PROCESS_D3 = D3;
PROCESS_D4 = D4;
PROCESS_D5 = D5;
PROCESS_D6 = D6;
PROCESS_D7 = D7;
PROCESS_ACK = ACK;
PROCESS_BUSY = BUSY;
PROCESS_PaperOut = PaperOut;
PROCESS_SELECT = SELECT;
PROCESS_LineFeed = LineFeed;
PROCESS_ERROR = ERROR;
PROCESS_RESET = RESET;
PROCESS_SelectPrinter = SelectPrinter;

pinMode(STROBE, IO_MCU_LPT_STROBE); //
pinMode(D0, IO_MCU_LPT_D0); //
pinMode(D1, IO_MCU_LPT_D1); //
pinMode(D2, IO_MCU_LPT_D2); //
pinMode(D3, IO_MCU_LPT_D3); //
pinMode(D4, IO_MCU_LPT_D4); //
pinMode(D5, IO_MCU_LPT_D5); //
pinMode(D6, IO_MCU_LPT_D6); //
pinMode(D7, IO_MCU_LPT_D7); //
pinMode(ACK, IO_MCU_LPT_ACK); //
pinMode(BUSY, IO_MCU_LPT_BUSY); //
pinMode(PaperOut, IO_MCU_LPT_PaperOut); //
pinMode(SELECT, IO_MCU_LPT_SELECT); //
pinMode(LineFeed, IO_MCU_LPT_LineFeed); //
pinMode(ERROR, IO_MCU_LPT_ERROR); //
pinMode(RESET, IO_MCU_LPT_RESET); //
pinMode(SelectPrinter, IO_MCU_LPT_SelectPrinter); //
  };
void begin(uint8_t PORT){
 digitalWrite(PROCESS_STROBE, HIGH);
 digitalWrite(PROCESS_LineFeed, HIGH);
 digitalWrite(PROCESS_SelectPrinter, HIGH);
 digitalWrite(PROCESS_BUSY, HIGH);
}; //It functions the beginning
void write(){
  }; //It functions the read with the aid of the port
void available(){
}; //
void flush(){
}; //It functions the flush access of the port
void setTimeout(){
}; //It functions the time out to the port
void find(){
}; //
void print(){
}; //
void println(){
}; //
void peek(){
}; //
void findUntil(){
}; //
void availableForWrite(){
}; //
void parseFloat(){
}; //
void parseInt(){
}; //
void readString(){
}; //
void readStringUntil(){
}; //
void readBytes(){
}; //
void readBytesUntil(){
}; //
void end(){
}; //It functions the end of the operating of the port

 

  private:
  uint8_t _LPT_STROBE;
  uint8_t _LPT_D0;
  uint8_t _LPT_D1;
  uint8_t _LPT_D2;
  uint8_t _LPT_D3;
  uint8_t _LPT_D4;
  uint8_t _LPT_D5;
  uint8_t _LPT_D6;
  uint8_t _LPT_D7;
  uint8_t _LPT_ACK;
  uint8_t _LPT_BUSY;
  uint8_t _LPT_PaperOut;
  uint8_t _LPT_SELECT; 
  uint8_t _LPT_LineFeed;
  uint8_t _LPT_ERROR;
  uint8_t _LPT_RESET;
  uint8_t _LPT_SelectPrinter;
  
  protected:
  int8_t Address;
};

void CONFIG(){

}


#endif
