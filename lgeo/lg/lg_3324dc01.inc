/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071230 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3324dc01: Plate 9 x 2 Hinge smaller hole                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3324dc01)
#else
#include "lg_3149a.inc"
#include "lg_3149b.inc"
#include "lg_3324d.inc"

#declare lg_3324dc01 =
union {
 object {
  lg_3149a
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3149b
 }
 object {
  lg_3324d
 }
}

#declare lg_3324dc01_clear =
union {
 object {
  lg_3149a
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3149b_clear
 }
 object {
  lg_3324d_clear
 }
}

#end
