/*  Brazo robótico utilizando dos servos. Como controlar servomotores Creado por www.web-robotica.com */
#include <Servo.h> // Incluimos la biblioteca Servo
 
  Servo servo_inferior;  // Definimos los servos que vamos a utilizar
  Servo servo_superior;  
  Servo servo_superiora;  
  Servo servo_pinza;  

  int posicion_servo_inferior; // Estas variables definirán
  int posicion_servo_superior; // las posiciónes de los servos en cada momento
  int posicion_servo_superiora;
  int posicion_servo_pinza;

  const int pulsador_izquierda   = 2; // Definimos el número de pin
  const int pulsador_derecha     = 3; // para cada uno de los pulsadores
  const int pulsador_arriba      = 4;
  const int pulsador_abajo       = 5;
  const int pulsador_arribaa     = 6;
  const int pulsador_abajoa      = 7;
  const int pulsador_abrir       = 8;
  const int pulsador_cerrar      = 9;
  int estado_pulsador_izquierda   = 0; // Variables para leer el estado del pulsador
  int estado_pulsador_derecha     = 0; 
  int estado_pulsador_arriba      = 0; 
  int estado_pulsador_abajo       = 0; 
  int estado_pulsador_arribaa     = 0; 
  int estado_pulsador_abajoa      = 0;
  int estado_pulsador_abrir       = 0;
  int estado_pulsador_cerrar      = 0;
  int incremento_de_angulo        = 2; // Incremento que queremos cada vez que pulsamos
  
void setup()  // Comenzamos la configuración de los pines
{ 
  servo_inferior.attach(10) ; // Difinimos los pines de salida para cada servo
  servo_superior.attach(11); 
  servo_superiora.attach(12);
  servo_pinza.attach(13);

  pinMode(pulsador_izquierda,  INPUT); // Difinimos los pines para la señal de
  pinMode(pulsador_derecha,    INPUT); // los pulsadores como entradas
  pinMode(pulsador_arriba,     INPUT);
  pinMode(pulsador_abajo,      INPUT);
  pinMode(pulsador_arribaa,    INPUT);
  pinMode(pulsador_abajoa,     INPUT);
  pinMode(pulsador_abrir,      INPUT);
  pinMode(pulsador_cerrar,     INPUT);

  servo_superiora.write(40);
  delay(1000);
  servo_superiora.write(60);
  delay(1000);
  servo_pinza.write(10);
  delay(1000);
  servo_pinza.write(40);
  delay(1000);
  servo_pinza.write(10);
  delay(1000);
  servo_inferior.write(45);
  delay(1000);
  servo_inferior.write(90);
  delay(1000);
  servo_superior.write(60);
  delay(1000);
  servo_superior.write(30);
  delay(1000);

}

void loop() {
 
  estado_pulsador_izquierda   = digitalRead(pulsador_izquierda)  ; // Leemos el estado
  estado_pulsador_derecha     = digitalRead(pulsador_derecha)    ; // de cada uno de los pulsadores
  estado_pulsador_arriba      = digitalRead(pulsador_arriba)     ;
  estado_pulsador_abajo       = digitalRead(pulsador_abajo)      ;
  estado_pulsador_arribaa     = digitalRead(pulsador_arribaa)    ;
  estado_pulsador_abajoa      = digitalRead(pulsador_abajoa)     ;
  estado_pulsador_abrir       = digitalRead(pulsador_abrir)      ;
  estado_pulsador_cerrar      = digitalRead(pulsador_cerrar)     ;


  if (estado_pulsador_izquierda == HIGH)
  
  // Si tenemos pulsado el "Pulsador izquierda"
  // El servo inferior se mueve a la nueva posición
  // La nueva posición será la posición actual + el incremento angular
  // Esperamos 100ms hasta una nueva señal
{
  posicion_servo_inferior = posicion_servo_inferior + incremento_de_angulo;
  servo_inferior.write(posicion_servo_inferior);                             
  delay(100);                                                                
  
  }
  else if (estado_pulsador_derecha == HIGH)

  // Si tenemos pulasdo el "Pulasdor derecha"
  // El servo inferior se mueve a la nueva posición
  // La nueva posición será la posicion actual - el incremento angular
  // Esperamos 100ms hasta una nueva señal
{
  posicion_servo_inferior = posicion_servo_inferior - incremento_de_angulo;
  servo_inferior.write(posicion_servo_inferior);
  delay(100);
  
  }
   else if (estado_pulsador_arriba == HIGH)
   
  // Si tenemos pulasdo el "Pulasdor arriba"
  // El servo superior se mueve a la nueva posición
  // La nueva posición será la posicion actual + el incremento angular
  // Esperamos 100ms hasta una nueva señal
{

  posicion_servo_superior = posicion_servo_superior + incremento_de_angulo;
  servo_superior.write(posicion_servo_superior);
  delay(100); 
  
  }
  else if (estado_pulsador_abajo == HIGH)

  // Si tenemos pulasdo el "Pulasdor abajo"
  // El servo inferior se mueve a la nueva posición
  // La nueva posición será la posicion actual - el incremento angular
  // Esperamos 100ms hasta una nueva señal
{
 
  posicion_servo_superior = posicion_servo_superior - incremento_de_angulo;
  servo_superior.write(posicion_servo_superior);
  delay(100);
  
  }
   else if (estado_pulsador_arribaa == HIGH)
   
  // Si tenemos pulasdo el "Pulasdor arriba"
  // El servo superior se mueve a la nueva posición
  // La nueva posición será la posicion actual + el incremento angular
  // Esperamos 100ms hasta una nueva señal
{

  posicion_servo_superiora = posicion_servo_superiora + incremento_de_angulo;
  servo_superiora.write(posicion_servo_superiora);
  delay(100); 
  
  }
  else if (estado_pulsador_abajoa == HIGH)

  // Si tenemos pulasdo el "Pulasdor abajo"
  // El servo inferior se mueve a la nueva posición
  // La nueva posición será la posicion actual - el incremento angular
  // Esperamos 100ms hasta una nueva señal
{
 
  posicion_servo_superiora = posicion_servo_superiora - incremento_de_angulo;
  servo_superiora.write(posicion_servo_superiora);
  delay(100);
  
  }else if (estado_pulsador_abrir == HIGH)
   
  // Si tenemos pulasdo el "Pulasdor arriba"
  // El servo superior se mueve a la nueva posición
  // La nueva posición será la posicion actual + el incremento angular
  // Esperamos 100ms hasta una nueva señal
{

  posicion_servo_pinza = posicion_servo_pinza + incremento_de_angulo;
  servo_pinza.write(posicion_servo_pinza);
  delay(100); 
  
  }
  else if (estado_pulsador_cerrar == HIGH)

  // Si tenemos pulasdo el "Pulasdor abajo"
  // El servo inferior se mueve a la nueva posición
  // La nueva posición será la posicion actual - el incremento angular
  // Esperamos 100ms hasta una nueva señal
{
 
  posicion_servo_pinza = posicion_servo_pinza - incremento_de_angulo;
  servo_pinza.write(posicion_servo_pinza);
  delay(100);
  
  }
  
  else {
  // Si no tenemos pulasdo ningún pulasdor                           
  // esperamos 100ms hasta una nueva señal              
    delay(100);
  }
}

