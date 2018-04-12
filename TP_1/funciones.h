#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Pide un numero flotante
 *
 * \param char[] Mensaje a ser mostrado
 * \return float Un numero flotante
 *
 */
float pedirFlotante(char[]);

/** \brief Recibe dos numeros flotantes y los suma
 *
 * \param char[] Mensaje a ser mostrado
 * \param float Un numero flotante
 * \param float Otro numero flotante
 * \return float El resultado de la suma de los flotantes
 *
 */
float sumarFlotantes(char[], float, float);


/** \brief Recibe dos numeros flotantes y los resta
 *
 * \param char[] Mensaje a ser mostrado
 * \param float Un numero flotante
 * \param float Otro numero flotante
 * \return float El resultado de la resta de los flotantes
 *
 */
 float restarFlotantes(char[], float, float);


/** \brief Recibe dos numeros flotantes y los divide
 *
 * \param char[] Mensaje a ser mostrado
 * \param float Un numero flotante
 * \param float Otro numero flotante
 * \return float El resultado de la division de los flotantes
 *
 */
float dividirFlotantes(char[], float, float);

/** \brief Recibe dos numeros flotantes y los multiplica
 *
 * \param char[] Mensaje a ser mostrado
 * \param float Un numero flotante
 * \param float Otro numero flotante
 * \return float El resultado de la multiplicacion de los flotantes
 *
 */
float multiplicarFlotantes(char[], float, float);

/** \brief Recibe un numero flotante, valida que la parte flotante sea igual a cero y calcula su factorial
 *
 * \param char[] Mensaje a ser mostrado
 * \param float Un numero flotante
 * \return int El resultado del factorial
 *
 */
int factorialFlotantes(char[], float);
#endif // FUNCIONES_H_INCLUDED
