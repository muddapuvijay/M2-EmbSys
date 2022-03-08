/**
 * @file Hotseat.c
 * @author vijay kumar
 * @brief The main function has been simplified to include only the functions required 
 * for setting up the required registers and actions
 * The check_buttonstate function checks for the required parameters before starting ADC conversion or
 * PWM generation.
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <avr/io.h>
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main()
{
    check_buttonstate();
    int set_temp_value= readValues();
    set_heating_temperature(set_temp_value);
    init_communication();
    send_temp_value(set_temp_value);
    generate_signal();
}