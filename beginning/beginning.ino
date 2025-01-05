
// // the setup function runs once when you press reset or power the board
// void setup() { //setup program çalışmaya başladıktan sonra sadece bi kere çalışır loop kısmı ise sürekli tekrar eder
//   // initialize digital pin LED_BUILTIN as an output.
//   pinMode(10, OUTPUT);
//   //LED_BUILTIN 13. PİN DEMEKTİR onun yerine 13de yazabiliriz direkt
//   //led_buıltin (ya da yazdığımız pin ne ise) giriş mi çıkış mı bunu ardinoya belirtmek için pinMode yazarız
//   //burada OUTPUT olduğunu belirtmişiz
// }

// // the loop function runs over and over again forever
// void loop() {
//   digitalWrite(10, HIGH);  // turn the LED on (HIGH is the voltage level)
//   //digitalWrite dijital bir çıkış ya da girişi 0 ya da 5v vereceğimiz bir kod
//   //yani burada belirrtiğim şey mesela 13.pine HIGH işlemi yap
//   delay(3000);                      // wait for a second
//   digitalWrite(10, LOW);   // turn the LED off by making the voltage LOW
//   delay(3000);                      // wait for a second
// }

//farklı bir pine takma işlemi için 

void setup() { 
  pinMode(10, OUTPUT);
 
}

void loop() {
  digitalWrite(10, HIGH);  
  delay(2000);                      
  digitalWrite(10, LOW);  
  delay(2000);                      
}