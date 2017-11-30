/**
 * @file  lab2.h
 * @brief Lab 2 starter code.
 * 
 * @author Ned Danyliw
 * @date  09.2015
 */

#ifndef	_LAB3_H_
#define _LAB3_H_

#include "ge_libs.h"

//Calibration Voltage in volts (Adjust to your values)
#define CAL_VOLTS 30.0
#define CAL_CURR  3.0

extern float energy_result; // integration of the energy 
extern float power_result;
extern bool new_data; 

//Initialize the energy meter
void meter_init();

//Display energy meter data
void meter_display(bool mppt);

//Update calibration for 0V and 0A
void calibrate_offset();

//Update calibration for the standard voltage
void calibrate_voltage();

//Update calibration for the standard current
void calibrate_current();

//ADC callback function
void my_adc_callback(uint16_t *data);

#endif