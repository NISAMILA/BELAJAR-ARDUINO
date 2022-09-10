int pinLED = 13;


void setup() {
  // put your setup code here, to run once:
pinMode(pinLED, OUTPUT); // Menyiapkan LED siap bekerja
Serial.begin(9600), // Menyiapkan Serial Monitor
Serial.println("Alat menyala dan siap digunakan !");
}


void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinLED, HIGH) ; // Mematikan LED Board Arduino
Serial.println("Lampu Nyala") ;
delay(500); // 1000 = 1 detik (jeda)
digitalWrite(pinLED, LOW) ; // Menyalakan LED Board Arduino
Serial.println("Lampu Mati") ;
delay(500) ; 
}
