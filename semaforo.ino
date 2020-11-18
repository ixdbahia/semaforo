    /*
     Un semáforo para tu ciudad: Semáforo casero con Arduino
     Infinito por Descubrir Bahía Blanca
     https://github.com/ixdbahia/semaforo
    */

    int rojo = 10;
    int amarillo = 9;
    int verde = 8;

    void setup(){
        pinMode(rojo, OUTPUT);
        pinMode(amarillo, OUTPUT);
        pinMode(verde, OUTPUT);
    }

    void loop(){
        cambiarLuz();
    }
    void cambiarLuz(){
        // Apagamos la luz roja y la luz amarilla, luego encendemos la luz verde por 6 segundos.
        digitalWrite(rojo, LOW);
        digitalWrite(amarillo, LOW);
        digitalWrite(verde, HIGH);
        delay(6000);
        // Apagamos la luz verde y encendemos la luz amarilla por 2 segundos.
        digitalWrite(verde, LOW);
        digitalWrite(amarillo, HIGH);
        delay(2000);    
        // Encendemos la luz roja por 6 segundos.
        digitalWrite(rojo, HIGH);
        delay(6000);
        // Encendemos la luz amarilla por 2 segundos; la luz roja sigue encendida durante ese período.
        digitalWrite(amarillo, HIGH);
        delay(2000);
    }
