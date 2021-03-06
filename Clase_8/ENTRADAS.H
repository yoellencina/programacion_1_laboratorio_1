/** \brief Funci�n que solicita un n�mero real
 *
 * \param mensaje[] Lo que representa el n�mero que se solicita
 * \return float N�mero ingresado.
 *
 */
float pedirFloat(char mensaje[]);


/** \brief Funci�n que solicita un n�mero real dentro de un rango
 *
 * \param mensaje[] Lo que representa el n�mero que se solicita
 * \param minimo float N�mero menor admitido
 * \param maximo float N�mero mayor admitido
 * \return float N�mero ingresado y validado seg�n el rango
 *
 */
float pedirFloatRango(char mensaje[], float minimo, float maximo);


/** \brief Funci�n que solicita un n�mero entero
 *
 * \param mensaje[] Lo que representa el n�mero que se solicita
 * \return int N�mero ingresado
 *
 */
int pedirEntero(char mensaje[]);


/** \brief Funci�n que solicita un n�mero entero dentro de un rango
 *
 * \param mensaje[] Lo que representa el n�mero que se solicita
 * \param minimo int N�mero menor admitido
 * \param maximo int N�mero mayor admitido
 * \return int N�mero ingresado y validado seg�n el rango
 *
 */
int pedirEnteroRango(char mensaje[], int minimo, int maximo);


/** \brief Funci�n que solicita un caracter
 *
 * \param mensaje[] char Lo que representa el caracter
 * \return char Caracter ingresado
 *
 */
char pedirCaracter(char mensaje[]);


/** \brief Funci�n que solicita un caracter y lo valida (f,F,m,M)
 *
 * \param mensaje[] char Lo que representa el caracter
 * \return char Caracter ingresado
 *
 */
char pedirCaracterSexo(char mensaje[]);


/** \brief Funci�n que valida una cadena seg�n un tama�o
 *
 * \param mensaje[] char Lo que representa la cadena
 * \param cadena[] char Cadena a validar
 * \param tam int Tama�o m�ximo de caracteres -1
 * \return void
 *
 */
void validarTamCadena(char mensaje[], char cadena[], int tam);

/** \brief Funci�n que solicita una cadena y la valida seg�n un tama�o
 *
 * \param mensaje[] Lo que representa la cadena que se solicita
 * \param cadena[] La cadena validada seg�n el rango
 * \param tam int La cantidad m�xima de caracteres -1
 * \return void
 *
 */
void pedirCadena(char mensaje[], char cadena[], int tam);


/** \brief Funci�n que solicita una palabra (sin espacios) y la valida seg�n un tam��o
 *         mediante la utilizaci�n de la funci�n validarTamCadena()
 *
 * \param mensaje[] char Lo que representa la palabra
 * \param cadena[] char Palabra validada
 * \param tam int La cantidad m�xima de caracteres -1
 * \return void
 *
 */
void pedirPalabra(char mensaje[], char cadena[], int tam);
