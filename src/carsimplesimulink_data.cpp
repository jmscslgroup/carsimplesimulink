//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: carsimplesimulink_data.cpp
//
// Code generated for Simulink model 'carsimplesimulink'.
//
// Model version                  : 1.12
// Simulink Coder version         : 9.8 (R2022b) 13-May-2022
// C/C++ source code generated on : Thu Oct 31 12:07:42 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "carsimplesimulink.h"

// Block parameters (default storage)
P_carsimplesimulink_T carsimplesimulink_P = {
  // Computed Parameter: Constant_Value
  //  Referenced by: '<S1>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_o
  //  Referenced by: '<S2>/Constant'

  {
    0.0                                // Data
  },

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S6>/Out1'

  {
    0.0                                // Data
  },

  // Computed Parameter: Constant_Value_j
  //  Referenced by: '<S5>/Constant'

  {
    0.0                                // Data
  },

  // Expression: 40
  //  Referenced by: '<Root>/Integrator'

  40.0,

  // Expression: 0
  //  Referenced by: '<Root>/Integrator'

  0.0,

  // Expression: 40
  //  Referenced by: '<Root>/Saturation'

  40.0,

  // Expression: 0
  //  Referenced by: '<Root>/Saturation'

  0.0,

  // Computed Parameter: TransferFcn_A
  //  Referenced by: '<Root>/Transfer Fcn'

  -0.5,

  // Computed Parameter: TransferFcn_C
  //  Referenced by: '<Root>/Transfer Fcn'

  0.5
};

//
// File trailer for generated code.
//
// [EOF]
//
