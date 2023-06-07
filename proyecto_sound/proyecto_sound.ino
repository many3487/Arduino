#include <TMRpcm.h>
#include <SPI.h>
#include <SD.h>

const int chioSelect = 10;
TMRpcm tmrpcm;
void setup()
{
Serial.begin(9600);
tmrpcm.speakerPin = 9;
inicializar_sd_card();

}

void loop(){
  tmrpcm.play("Briefcase Full of Guts.wav");
  delay(3000);
  }
  
  void inicializar_sd_card()
  {
  if(!SD.begin){
  Serial.println("fallo");
  delay(600);
  return;  
  }
  Serial.println("go");
  
  }
