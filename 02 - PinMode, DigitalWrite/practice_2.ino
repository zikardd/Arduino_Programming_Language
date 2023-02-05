// inisialisasi variabel pinLed
const int pinLed=13;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);  // mendeklarasikan variabel pinLed menjadi output
  Serial.println("Program pertama");  // menampilkan tulisan pada program
}

void loop() {
  // kondisi lampu hidup
  digitalWrite(pinLed, HIGH); // mendeklarasikan variabel pinLed untuk hidup/menyala
  Serial.println("Lampu sudah menyala");  // menampilkan tulisan pada serial monitor
  delay(1000);  // memberikan delay selama 1 detik (1000 ms)

  // kondisi lampu mati
  digitalWrite(pinLed, LOW); // mendeklarasikan variabel pinLed untuk mati
  Serial.println("Lampu sudah mati");  // menampilkan tulisan pada serial monitor
  delay(1000);  // memberikan delay selama 1 detik (1000 ms)
  
}
