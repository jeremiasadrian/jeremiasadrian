/*Puente_H_control_v2.1

  Programa para generar las señales de control para el puente H
  de una fuente conmutada FULL-BRIDGE elevadora para un electroestimulador
  por corriente. 
  En esta versión se le incorpora la variación de frecuencua de ambas señales
  a fin de poder relevar el comportamiento para determinar la condición óptima
  que permita mejorar el rendimiento de la fuente. 
  El programa solo stablece variación de frecuencia a "duty" constante
  del 10%.
  En esta versión incorpora un filtro FIR para bajo de diez muestras en la 
  conversión del potenciómetro.

  Creado en julio del 2023
  por Jeremías García.*/

//Defino las salidad digitales para los pares opuestos del puente H.
const int D2=2, D3=3;
/*Defino variable entera para mapear el estado del Pot a los valores
extremos de tiempo de 1ms (1kHz) y 10ms (100Hz).*/
int Base_T = 0;
//Configura las salidas digitales y las inicializa en un estado bajo.
//COnfigura la entrada analógica para el control del ciclo de trabajo.
void setup() 
{
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(A0, INPUT);
  digitalWrite(D2, LOW); 
  digitalWrite(D3, LOW); 
  Base_T = map(analogRead(A0),0,1023,1000,10000);
}

void loop() 
{
  //Defino un vector de diez enteros para almacenar la conversión de A0.
  int dutyVAL[]={0,0,0,0,0,0,0,0,0,0};
  //Defino una variable entera para almacenar la suma de las conversiones de dutyVAL.
  int dutySUM = 0;
  //Defino una variable entera para almacenar el promedio de las diez conversiones.
  int dutyPROM = 0;
  int i1 = 0;
  int i2 = 0;
  /*Bucle para realizar diez conversiones y almacenarlas en dutyVAL, 
  se realiza una conversión por ciclo de la señal de salida.*/
  for(i1=0;i1<10;i1++)
  {
    dutyVAL[i1] = analogRead(A0);
    digitalWrite(D2, HIGH);     
    delayMicroseconds(Base_T*0.45);                        
    digitalWrite(D2, LOW);
    delayMicroseconds(Base_T*0.05); 
    digitalWrite(D3, HIGH);    
    delayMicroseconds(Base_T*0.45);         
    digitalWrite(D3, LOW);     
    delayMicroseconds(Base_T*0.05);  
  }
  //Bucle para realizar la suma del vector en la variable dutySUM.
  for(i2=0;i2<10;i2++)
  {
    dutySUM =+ dutyVAL[i2];
  }
  //Calcula el valor final de promedio en la variable dutyPROM.
  dutyPROM = dutySUM/10;
  //Actualiza el valor de Base_T para los próximos diez ciclos.
  Base_T = map(dutyPROM,0,1023,1000,10000);
}
