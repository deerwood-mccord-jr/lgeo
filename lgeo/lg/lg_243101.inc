/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080229 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_243101: _Tile  1 x  4  White                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_243101)
#else
#include "lg_2431.inc"

#declare lg_243101 = 
union {
 object {
  lg_2431
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_243101_clear = 
union {
 object {
  lg_2431
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end