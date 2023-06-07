//SE DECLARA ARRAY DE BYTES CON LOS VALORES NECESARIOS
//PARA FORMAR CADA LETRA 0-> APAGADO, 1->ENCENDIDO
//SON 8 VALORES, UNO POR CADA FILA
//COMO USO LA CALCULADORA PARA HACER UN NUEVO CARACTER  ?
//DEBES IR  CON CTRL+R Y PONER CALC
//UNAVEZ ALLÍ LE DAS CLIC A LAS TRES LINEAS Y SELECCIONAS PROGRAMADOR
//LUEGO SELECCIONA LA OPCIÓN DE BIN(BINARIO)
// ALLI DEBES TENER EN CUENTA QUE DEBES PONER QUE LED QUIERES QUE ESTE ENCENDIDO
//EJEMPLO SI QUIERES QUE HAYA UN PUNTO ENCENDIDO EN TU LED 8X8
//DEBES PONER 10000000 Y REVISA EL VALOR QUE TE DA LA CALCULADORA EN  HEX(HEXADECIMAL)
//ESE ES EL VALOR QUE PINTARAS EN LA PRIMERA LINEA
byte A[] = { 0x3c, 0x42, 0x42, 0x7E, 0x7E, 0x42, 0x42, 0x42 };//
byte B[] = { 0x3c, 0x42, 0x42, 0x7c, 0x42, 0x42, 0x42, 0x3c };//
byte C[] = { 0x1e, 0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x1e };//
byte D[] = { 0x78, 0x7C, 0x6E, 0x66, 0x66, 0x6E, 0x7C, 0x78 };//
byte E[] = { 0x7C, 0x40, 0x40, 0x78, 0x78, 0x40, 0x40, 0x7C }; //
byte F[] = { 0x7C, 0x40, 0x40, 0x78, 0x78, 0x40, 0x40, 0x40 };//
byte G[] = { 0x1e, 0x20, 0x40, 0x5c, 0x42, 0x42, 0x22, 0x1c };//
byte H[] = { 0x42, 0x42, 0x42, 0x7E, 0x7E, 0x42, 0x42, 0x42 };//
byte I[] = { 0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7E };//
byte J[] = { 0x3e, 0xc, 0xc, 0xc, 0xc, 0xc, 0x4c, 0x7c };//
byte K[] = { 0x63, 0x66, 0x6C, 0x78, 0x78, 0x6C, 0x66, 0x40 }; //
byte L[] = { 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x7e };//
byte M[] = { 0x66, 0x7E, 0x5A, 0x42, 0x42, 0x42, 0x42, 0x42 }; //
byte N[] = { 0x42, 0x42, 0x62, 0x52, 0x4a, 0x46, 0x42, 0x42 };//
byte O[] = { 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C }; //
byte P[] = { 0x3c, 0x42, 0x42, 0x7c, 0x40, 0x40, 0x40, 0x40 }; //
byte Q[] = { 0x3c, 0x42, 0x42, 0x42, 0x42, 0x4a, 0x44, 0x3a };//
byte R[] = { 0x3c, 0x42, 0x42, 0x7c, 0x44, 0x42, 0x42, 0x42 };//
byte S[] = { 0x3c, 0x40, 0x40, 0x3c, 0x2, 0x2, 0x2, 0x3c }; //
byte T[] = { 0x7e, 0x5a, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18 };//
byte U[] = { 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c };//
byte V[] = { 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x18 };//
byte W[] = { 0x42, 0x42, 0x42, 0x42, 0x5a, 0x5a, 0x5a, 0x3c };//
byte X[] = { 0x42, 0x42, 0x24, 0x24, 0x18, 0x24, 0x42, 0x42 };//
byte Y[] = { 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18 };//
byte Z[] = { 0x7e, 0x46, 0xc, 0xc, 0x18, 0x30, 0x62, 0x7e };
byte face[] = { 0x8, 0x4, 0x42, 0x2, 0x2, 0x42, 0x4, 0x8 }; 
byte qu[] = { 0x18, 0x24, 0x42, 0xc, 0x18, 0x18, 0x00, 0x18 }; 

byte uno[]={0x18,0x38,0x78,0x18,0x18,0x18,0xff,0xff};
byte dos[]={0x1c,0xff,0xe7,0x0e,0x1c,0x38,0x7f,0xff};
byte tres[]={0x7c,0x7e,0x07,0x7f,0x7f,0x07,0x7e,0x7c};
byte cuatro[]={0x66,0x66,0x66,0x7e,0x7e,0x06,0x06,0x06};
byte cinco[]={0x7e,0x7e,0x60,0x7c,0x7e,0x02,0x7e,0x7c};
byte seis[]={0x7e,0x7e,0x60,0x7c,0x7e,0x62,0x7e,0x3c};
byte siete[]={0x7e,0x7e,0x06,0x0c,0x18,0x30,0x60,0xc0};
byte ocho[]={0x7e,0xff,0xc3,0xff,0xff,0xc3,0xff,0x7e};
byte nueve[]={0x7e,0xff,0xc3,0xff,0x7f,0x03,0x7f,0x7e};
byte cero[]={0xff,0xff,0xc7,0xcb,0xd3,0xe3,0xc3,0xff};
byte nuevo[] ={ 0x80,0x80,0x80,0x00, 0x00,0x00,0x00,0x00};



//ESTE ARRAY ES PARA LIMPIAR MATRIZ
byte sp[]= { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; 
//SE INICIALIZA LOS PINES COMO SALIDA
void setup() { 
  for (int j=2; j<19; j++) 
    pinMode(j, OUTPUT); 
  Serial.begin(9600); 
} 
//FUNCION PARA IMPRIMIR LETRA EN MATRIZ DE LEDS
void SetChar(char p) { 
  Clear(); //FUNCION PARA LIMPIAR MATRIZ
  for (int fil = 0; fil <8 ; fil++) { 
    digitalWrite( fil + 10 , HIGH) ; 
    byte F = Selecciona( p, fil); 
    for (int col =7; col >= 0 ; col--) { 
      digitalWrite(8-col, HIGH);
      bool b = GetBit(F, col); 
      if (b) 
        digitalWrite( 9 - col ,LOW);
      else 
        digitalWrite( 9 - col ,HIGH); 
    } 
    digitalWrite( fil + 10 , LOW) ;
  } 
} 

//FUNCIÓN PARA CONVETIR HEXADECIMAL A BINARIO
bool GetBit( byte N, int pos) {
  int b = N >> pos ; 
  b = b & 1 ; 
  return b ; 
} 
//FUNCIÓN PARA LIMPIAR MATRIZ-TODOS LOS LEDS APAGADOS
void Clear() { 
  for (int j=2; j<10; j++) 
    digitalWrite(j, HIGH);
    for (int k= 10 ; k<18 ; k++) 
      digitalWrite(k, LOW);
} 

//SELECCIONA FILA DE ARRAY DE LETRA A IMPIRMIR
byte Selecciona( char c, byte fil) { 
  if (c == 'A') return( A[fil]);
  if (c == 'B') return( B[fil]);
  if (c == 'C') return( C[fil]);
  if (c == 'D') return( D[fil]);
  if (c == 'E') return( E[fil]);
  if (c == 'F') return( F[fil]);
  if (c == 'G') return( G[fil]);
  if (c == 'H') return( H[fil]);
  if (c == 'I') return( I[fil]);
  if (c == 'J') return( J[fil]);
  if ( c == 'K') return(K[fil]); 
  if ( c == 'L') return(L[fil]);
  if (c == 'M') return( M[fil]);
  if (c == 'N') return( N[fil]); 
  if (c == 'O') return( O[fil]); 
  if (c == 'P') return( P[fil]);
  if (c == 'Q') return( Q[fil]);
  if (c == 'R') return( R[fil]);
  if (c == 'S') return( S[fil]);
  if (c == 'T') return( T[fil]);
  if (c == 'U') return( U[fil]);
  if (c == 'V') return( V[fil]); 
  if (c == 'W') return( W[fil]);
  if (c == 'X') return( X[fil]);
  if (c == 'Y') return( Y[fil]);
  if (c == 'Z') return( Z[fil]);  
  if (c == ' ') return( sp[fil]);
  if (c == ':') return( face[fil]);
  if (c == '?') return( qu[fil]);
  if (c == '1') return( uno[fil]);
  if (c == '2') return( dos[fil]);
  if (c == '3') return( tres[fil]);
  if (c == '4') return( cuatro[fil]);
  if (c == '5') return( cinco[fil]);
  if (c == '6') return( seis[fil]);
  if (c == '7') return( siete[fil]);
  if (c == '8') return( ocho[fil]);
  if (c == '9') return( nueve[fil]);
  if (c == '0') return( cero[fil]);
  if (c == 'n') return( nuevo[fil]);
  
} 

void loop(){ 
  String s = " SUSCRIBETE " ; //PALABRA A IMPRIMIR
  int l = s.length();// CALCULO DE LONGITUD DE PALABRA
  for ( int n = 0; n< l; n++ ) { //RECORRE PALABRA E IMPRIME EN MATRIZ
    long t = millis(); 
    char c = s[n]; //RECORRE PALABRA Y OBTIENE LETRA POR LETRA
    while ( millis()< t+ 800) 
      SetChar(c); //LLAMADA A FUNCIÓN QUE IMPRIME EN MATRIZ
  } 
}
