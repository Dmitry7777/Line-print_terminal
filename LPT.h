#ifndef LPT_H
#define LPT_H

#define LPT_STROBE INPUT
#define LPT_STROBE OUTPUT
#define LPT_D0 OUTPUT
#define LPT_D1 OUTPUT
#define LPT_D2 OUTPUT
#define LPT_D3 OUTPUT
#define LPT_D4 OUTPUT
#define LPT_D5 OUTPUT
#define LPT_D6 OUTPUT
#define LPT_D7 OUTPUT
#define LPT_ACK INPUT
#define LPT_BUSY INPUT
#define LPT_PaperOut INPUT
#define LPT_SELECT INPUT
#define LPT_LineFeed INPUT
#define LPT_LineFeed OUTPUT
#define LPT_ERROR INPUT
#define LPT_RESET INPUT
#define LPT_RESET OUTPUT
#define LPT_SelectPrinter INPUT
#define LPT_SelectPrinter OUTPUT

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

pinMode(STROBE, LPT_STROBE); //
pinMode(D0, LPT_D0); //
pinMode(D1, LPT_D1); //
pinMode(D2, LPT_D2); //
pinMode(D3, LPT_D3); //
pinMode(D4, LPT_D4); //
pinMode(D5, LPT_D5); //
pinMode(D6, LPT_D6); //
pinMode(D7, LPT_D7); //
pinMode(ACK, LPT_ACK); //
pinMode(BUSY, LPT_BUSY); //
pinMode(PaperOut, LPT_PaperOut); //
pinMode(SELECT, LPT_SELECT); //
pinMode(LineFeed, LPT_LineFeed); //
pinMode(ERROR, LPT_ERROR); //
pinMode(RESET, LPT_RESET); //
pinMode(SelectPrinter, LPT_SelectPrinter); //
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
