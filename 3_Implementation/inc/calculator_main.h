/**
 * @file calculator_operations.h
 * @author kvarun13
 * @brief Header file for Calculator application with Arithmetic operations, Trigonometric operations  and Conversions operations.
 *
 */

#ifndef CALCULATOR_OPERATIONS_H
#define CALCULATOR_OPERATIONS_H

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#define PI 3.15159265
/**
* @brief Adds the a and b and returns the ans
* @param[in] a 
* @param[in] b
* @return ans of a+b
*/
float add(float a, float b);

/**
 * @brief subtract the a and b and return the ans
 * @param[in] a
 * @param[in] b
 * @ return ans of a-b
 */
float subtract(float a, float b);

/**
* @brief Multiply the a, b and returns the ans
* @param[in] a 
* @param[in] b 
* @return ans of a *b
*/
float multiply(float a,float b);

/**
* @brief Divides the a by b and returns the ans
* @param[in] a 
* @param[in] b
* @return ans of the a / b
* @note returns 0 for divide by 0 error
*/
float divide(float a, float b);

/**
* @brief sine the a and returns the ans
* @param[in] a 
* @return ans of sine(a)
*/
float sine();

/**
* @brief cosine the a and returns the ans
* @param[in] a 
* @return ans of cosine(a)
*/
float cosine();

/**
* @brief tangent the a and returns the ans
* @param[in] a 
* @return ans of tangent(a)
*/
float tangent();

/**
* @brief sineh the a and returns the ans
* @param[in] a 
* @return ans of sineh(a)
*/
float sineh();

/**
* @brief cosineh the a and returns the ans
* @param[in] a 
* @return ans of cosineh(a)
*/
float cosineh();

/**
* @brief tangenth the a and returns the ans
* @param[in] a 
* @return ans of tangenth(a)
*/
float tangenth();

/**
* @brief logten the a and returns the ans
* @param[in] a 
* @return ans of logten(a)
*/
float logten();

/**
* @brief squareroot the a and returns the ans
* @param[in] a 
* @return ans of sqareroot(a)
*/
float squareroot();

/**
* @brief exponent the a and returns the ans
* @param[in] a 
* @return ans of exponent(a)
*/
float exponent();

/**
* @brief power the a power b and returns the ans
* @param[in] a 
* @param[in] b
* @return ans of the a ^ b
*/
float power(float a, float b);

/**
* @brief Dec_to_Bin the a and returns the res
* @param[in] a 
* @return res of Dec_to_Bin(a)
*/
void Dec_to_Bin();

/**
* @brief void Dec_to_Oct the a and returns the res
* @param[in] a 
* @return res of void Dec_to_Oct(a)
*/
void Dec_to_Oct();

/**
* @brief Dec_to_Hex the a and returns the res
* @param[in] a 
* @return res of Dec_to_Hex(a)
*/
void Dec_to_Hex();

/**
* @brief Bin_to_Dec the a and returns the res
* @param[in] a 
* @return res of Bin_to_Dec(a)
*/
void Bin_to_Dec();

/**
* @brief Oct_to_Dec the a and returns the res
* @param[in] a 
* @return res of Oct_to_Dec()
*/
void Oct_to_Dec();

/**
* @brief Hex_to_Dec the a and returns the res
* @param[in] a 
* @return res of Hex_to_Dec(a)
*/
void Hex_to_Dec();

#endif  /* #define CALCULATOR_OPERATIONS_H */