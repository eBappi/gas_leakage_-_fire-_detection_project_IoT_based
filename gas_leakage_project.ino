#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "d56ao4KwUK0jXPUfV2U9IEFEACR0Nvfy";

int in001 = 14;
int in011 = 12;
int in111 = 13;
int in010 = 15;

WidgetLED v001(V1);
WidgetLED v011(V2);
WidgetLED v111(V3);
WidgetLED v010(V4);

WidgetLED v5(V5);
WidgetLED v6(V6);
WidgetLED v7(V7);
WidgetLED v8(V8);

int out1 = 16;
int out2 = 5;
int out3 = 4;
int out4 = 2;

void setup()

{
  Serial.begin(9600);
 
  Blynk.begin(auth, "Bappi", "50005000");
  pinMode(in001,INPUT);
   pinMode(in011,INPUT);
    pinMode(in111,INPUT);
     pinMode(in010,INPUT);
     
    pinMode(out1,OUTPUT);
     pinMode(out2,OUTPUT);
      pinMode(out3,OUTPUT);
       pinMode(out4,OUTPUT);

    digitalWrite(out1,LOW);
     digitalWrite(out2,LOW);
      digitalWrite(out3,LOW);
       digitalWrite(out4,LOW);
     
      Serial.println("sAzAL");  
}
 
void loop() {
 
 int insw1=digitalRead(in001);
   int insw2=digitalRead(in011);
     int insw3=digitalRead(in111);
       int insw4=digitalRead(in010);

if(insw1 == HIGH){
 v001.on();
}
else{
v001.off();
}
if(insw2 == HIGH){
 v011.on();
}
else{
 v011.off();  
  }
if(insw3 == HIGH){
 v111.on();
}
else{
 v111.off();
}
if(insw4 == HIGH){
 v010.on();
}
else {
 v010.off();
  }
  Blynk.run();
   
 v5.on();
 delay(100);
 v6.on();
 delay(100);
 v7.on();
 delay(100);
 v8.on();
 delay(250);
 v8.off();
 delay(50);
 v7.off();
  delay(40);
 v6.off();
  delay(30);
 v5.off();
  delay(20);
     }
