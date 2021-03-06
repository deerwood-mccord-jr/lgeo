/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071116 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0915p01: Baseplate 24 x 32 Fire Department with Set EU357/US570 Pattern  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0915p01)
#else
#include "lg_0915.inc"
#declare lg_0915p01_dots = 
union {
 object {
  lg_knob_dot
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-6.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-7.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <1.5*LG_BRICK_WIDTH, 7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, 7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-6.5*LG_BRICK_WIDTH, 7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-7.5*LG_BRICK_WIDTH, 7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <1.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-0.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-1.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-2.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-3.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-5.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-6.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-7.5*LG_BRICK_WIDTH, 14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <1.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-5.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-6.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-7.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -10.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -11.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-0.5*LG_BRICK_WIDTH, -11.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-1.5*LG_BRICK_WIDTH, -11.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-2.5*LG_BRICK_WIDTH, -11.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-3.5*LG_BRICK_WIDTH, -11.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -11.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_0915p01 =
union {
 object { lg_0915 }
 object {
  lg_0915p01_dots
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0915p01_clear =
union {
 object { lg_0915_clear }
 object {
  lg_0915p01_dots
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end
