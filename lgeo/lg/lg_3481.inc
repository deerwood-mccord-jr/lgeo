/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20071230 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3481: Helicopter Rotor Holder Sideways Old                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3481)
#else
#declare lg_angle1=atan2(0.75*LG_PLATE_HEIGHT, 2*LG_WALL_WIDTH);
#declare lg_angle2=atan2(LG_BRICK_WIDTH/2, 2*LG_WALL_WIDTH);
#declare lg_3481 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-0.06, -LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.06, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_WALL_WIDTH, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    union {
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, 2*LG_WALL_WIDTH>
      rotate <lg_angle1*180/pi, 0, 0>
      translate <0, 0, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1+0*sin(lg_angle1))>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -2*LG_WALL_WIDTH>
      rotate <-lg_angle1*180/pi, 0, 0>
      translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE*(1+0*sin(lg_angle1))>
     }
    }
    matrix 
     <1, 0, 0,
      5/4, 1, 0,
      0, 0, 1,
      -LG_CORNER_SPACE*(1-sin(lg_angle2)), -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(cos(lg_angle2)-1), 0>
   }
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_WALL_WIDTH, 0>
    }
    union {
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, 2*LG_WALL_WIDTH>
      rotate <lg_angle1*180/pi, 0, 0>
      translate <0, 0, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1+0*sin(lg_angle1))>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -2*LG_WALL_WIDTH>
      rotate <-lg_angle1*180/pi, 0, 0>
      translate <0, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE*(sin(lg_angle1)-1)>
     }
    }
    matrix 
     <1, 0, 0,
      5/4, 1, 0,
      0, 0, 1,
      -LG_CORNER_SPACE*(1-sin(lg_angle2)), -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(cos(lg_angle2)-1), 0>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.1*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.4*LG_BRICK_WIDTH, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH>
  }
  union {
   box {
    <0, -LG_E, LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   box {
    <0, -LG_E, LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
  matrix
   <1, 0, 0,
    0, 1, 3/4,
    0, 0, 1,
    0, -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(sin(lg_angle2)-1), 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1-cos(lg_angle2))>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH, LG_WALL_WIDTH>
  }
  union {
   box {
    <0, -LG_E, -LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   box {
    <0, -LG_E, -LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
  matrix
   <1, 0, 0,
    0, 1, -3/4,
    0, 0, 1,
    0, -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(sin(lg_angle2)-1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE*(1-cos(lg_angle2))>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  union {
   difference {
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, LG_E>,
      0.29
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.32
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, 4*LG_WALL_WIDTH>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      0.32
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      0.32-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, -2*LG_E>,
      0.16
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH+LG_E>,
      0.16+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH+LG_E>,
    <-0.04, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.04>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.04>,
    <0, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.04>,
    0.04
   }
  }
  rotate <90, 0, 0>
  translate <0, -1.6*LG_BRICK_WIDTH+LG_KNOB_HEIGHT, LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
}

#declare lg_3481_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-0.06, -LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.06, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_WALL_WIDTH, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    union {
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, 2*LG_WALL_WIDTH>
      rotate <lg_angle1*180/pi, 0, 0>
      translate <0, 0, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1+0*sin(lg_angle1))>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -2*LG_WALL_WIDTH>
      rotate <-lg_angle1*180/pi, 0, 0>
      translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE*(1+0*sin(lg_angle1))>
     }
    }
    matrix 
     <1, 0, 0,
      5/4, 1, 0,
      0, 0, 1,
      -LG_CORNER_SPACE*(1-sin(lg_angle2)), -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(cos(lg_angle2)-1), 0>
   }
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_WALL_WIDTH, 0>
    }
    union {
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, 2*LG_WALL_WIDTH>
      rotate <lg_angle1*180/pi, 0, 0>
      translate <0, 0, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1+0*sin(lg_angle1))>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_E, 0>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -2*LG_WALL_WIDTH>
      rotate <-lg_angle1*180/pi, 0, 0>
      translate <0, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE*(sin(lg_angle1)-1)>
     }
    }
    matrix 
     <1, 0, 0,
      5/4, 1, 0,
      0, 0, 1,
      -LG_CORNER_SPACE*(1-sin(lg_angle2)), -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(cos(lg_angle2)-1), 0>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH, 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.1*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT/2>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.6*LG_BRICK_WIDTH, -0.25*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.4*LG_BRICK_WIDTH, 2.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH>
  }
  union {
   box {
    <0, -LG_E, LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   box {
    <0, -LG_E, LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
  matrix
   <1, 0, 0,
    0, 1, 3/4,
    0, 0, 1,
    0, -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(sin(lg_angle2)-1), 3*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1-cos(lg_angle2))>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH, LG_WALL_WIDTH>
  }
  union {
   box {
    <0, -LG_E, -LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   box {
    <0, -LG_E, -LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
  matrix
   <1, 0, 0,
    0, 1, -3/4,
    0, 0, 1,
    0, -1.2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(sin(lg_angle2)-1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE*(1-cos(lg_angle2))>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, LG_E>,
      0.29
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.32
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, 4*LG_WALL_WIDTH>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      0.32
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
      <0, 0, LG_E>,
      0.32-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, -2*LG_E>,
      0.16
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH+LG_E>,
      0.16+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH+LG_E>,
    <-0.04, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.04>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.04>,
    <0, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.04>,
    0.04
   }
  }
  rotate <90, 0, 0>
  translate <0, -1.6*LG_BRICK_WIDTH+LG_KNOB_HEIGHT, LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
}

#end