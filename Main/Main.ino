//Definicoes
int laco = 9;
int calc = 10;
int text = 11;
int video = 12;

//Global Scope
int iniciado = 0;

void setup() {
  //Botoes
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  //LED
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  //Carrega as funções iniciais

  if(iniciado == 0){
      digitalWrite(1, LOW);
    }

  //Evento para iniciar o circuito
  if(digitalRead(8) == HIGH){
        iniciado = 1; 
        loop();
        digitalWrite(1, HIGH);   
    }
  if(digitalRead(laco) == HIGH){
        int c = 0; 
        while(c > 0){
             digitalWrite(1, LOW);
             delay(1000);
             digitalWrite(1, HIGH);
             c = c+1;
          }
    }
}
