/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/* 20071103 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6060: Arch 1 x 6 x 3 & 1/3 with Curved Top                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6060)
#else
#declare lg_angle=atan2(LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE);
#declare lg_6060 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
     }
     torus {
      3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>
     }
    }
    union {
     box {
      <5.1*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, -4*LG_BRICK_WIDTH>,
      <-3.1*LG_BRICK_WIDTH, LG_BRICK_WIDTH/3, -8*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
      <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/3, -8*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, LG_E>,
      <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/3, -4*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <0, LG_BRICK_WIDTH/2+LG_E, 3.5*LG_BRICK_WIDTH>,
      <-LG_WALL_WIDTH, LG_BRICK_WIDTH/3, 4*LG_BRICK_WIDTH+LG_E>
      rotate <0, lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -4*LG_BRICK_WIDTH>
     }
     box {
      <0, LG_BRICK_WIDTH/2+LG_E, 3.5*LG_BRICK_WIDTH>,
      <LG_WALL_WIDTH, LG_BRICK_WIDTH/3, 4*LG_BRICK_WIDTH+LG_E>
      rotate <0, 90-lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -4*LG_BRICK_WIDTH>
     }
    }
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH+2*LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-2*LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-2*LG_CORNER_SPACE+LG_E>
 }
 box {
  <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.3>,
  <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH+LG_E, 0.06, -2*LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.06, -LG_PLATE_HEIGHT-LG_E>
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <5.1*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, -4*LG_BRICK_WIDTH>,
    <-3.1*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -8*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -8*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_E, LG_E>,
    <-4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -4*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, 2*LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, 0>
    rotate <0, lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>
   }
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, 2*LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, 0>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>
   }
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, 0, -2*LG_PLATE_HEIGHT>
 }
}

#declare lg_6060_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     torus {
      4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
     }
     torus {
      3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>
     }
    }
    union {
     box {
      <5.1*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, -4*LG_BRICK_WIDTH>,
      <-3.1*LG_BRICK_WIDTH, LG_BRICK_WIDTH/3, -8*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
      <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/3, -8*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, LG_E>,
      <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/3, -4*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <0, LG_BRICK_WIDTH/2+LG_E, 3.5*LG_BRICK_WIDTH>,
      <-LG_WALL_WIDTH, LG_BRICK_WIDTH/3, 4*LG_BRICK_WIDTH+LG_E>
      rotate <0, lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -4*LG_BRICK_WIDTH>
     }
     box {
      <0, LG_BRICK_WIDTH/2+LG_E, 3.5*LG_BRICK_WIDTH>,
      <LG_WALL_WIDTH, LG_BRICK_WIDTH/3, 4*LG_BRICK_WIDTH+LG_E>
      rotate <0, 90-lg_angle*180/pi, 0>
      translate <LG_BRICK_WIDTH, 0, -4*LG_BRICK_WIDTH>
     }
    }
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH+2*LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-2*LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-2*LG_CORNER_SPACE+LG_E>
 }
 box {
  <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)+LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.3>,
  <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH+LG_E, 0.06, -2*LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.06, -LG_PLATE_HEIGHT-LG_E>
 }
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <5.1*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, -4*LG_BRICK_WIDTH>,
    <-3.1*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -8*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_WIDTH-2*LG_PLATE_HEIGHT>,
    <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -8*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_E, LG_E>,
    <-4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -4*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, 2*LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, 0>
    rotate <0, lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>
   }
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, 2*LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, 0>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -4*LG_BRICK_WIDTH+(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)>
   }
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -2*LG_PLATE_HEIGHT>
 }
}

#end
