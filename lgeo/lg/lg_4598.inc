/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971116 Lutz Uhlmann                                                       */
/* 20071030 Lutz Uhlmann fixed orientation                                     */
/* 20071030 Lutz Uhlmann fixed middle sloped backside rib                      */
/* 20071202 Lutz Uhlmann fixed hollow stud logo and orientation                */
/* 20080309 Lutz Uhlmann removed testing code                                  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4598: Space Seat 3 x 2                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4598)
#else
#declare lg_angle=atan2(LG_BRICK_WIDTH, LG_BRICK_HEIGHT);
#declare lg_4598 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_E>,
     <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_CORNER_SPACE
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_CORNER_SPACE
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*(LG_KNOB_RADIUS+2*LG_CORNER_SPACE)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH, 0>,
    <-0.14, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH, 0>,
    <0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*(LG_KNOB_RADIUS+2*LG_CORNER_SPACE)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*(LG_KNOB_RADIUS+LG_CORNER_SPACE)/cos(lg_angle)>,
    LG_CORNER_SPACE
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
     <-1.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 2*LG_PLATE_HEIGHT-LG_E>
    }
    box {
     <0, LG_BRICK_WIDTH, 0>,
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_HEIGHT/cos(lg_angle)>
     rotate <0, -lg_angle*180/pi, 0>
     translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
    }
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 4*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.05, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 4.5*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+0.05, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_KNOB_RADIUS+LG_E>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+LG_E, -LG_E>
   }
   box {
    <LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_PLATE_HEIGHT-2*LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
    <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  rotate <0, 90, 0>
  translate <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT, 0, LG_BRICK_WIDTH>
 }
 difference {
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT/4>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_tech_knob_logo
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 0, 0>
 }
 difference {
  union {
   box {
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH>
   }
  }
  box {
   <-1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH>,
   <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT-LG_E, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH>
  }
 }
 difference {
  union {
   box {
    <LG_E, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    <-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_PLATE_HEIGHT/sqrt(2)-LG_CORNER_SPACE, LG_WALL_WIDTH/2, 0>,
    <0, -LG_WALL_WIDTH/2, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <-2*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_WALL_WIDTH-LG_E>,
   <-1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH, 2*LG_WALL_WIDTH>
  }
 }
 box {
  <LG_PLATE_HEIGHT/2-2*LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_E, 0>,
  <0, -LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT>
  rotate <0, -45, 0>
  translate <-1.5*LG_BRICK_WIDTH-0.2, 0, 0>
 }
 box {
  <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E>,
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_E>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
}

#declare lg_4598_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, -LG_E>,
     <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, LG_KNOB_RADIUS>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_CORNER_SPACE
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE, LG_CORNER_SPACE
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*(LG_KNOB_RADIUS+2*LG_CORNER_SPACE)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH, 0>,
    <-0.14, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH, 0>,
    <0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*(LG_KNOB_RADIUS+2*LG_CORNER_SPACE)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*(LG_KNOB_RADIUS+LG_CORNER_SPACE)/cos(lg_angle)>,
    LG_CORNER_SPACE
    rotate <0, -lg_angle*180/pi, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
     <-1.5*LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 2*LG_PLATE_HEIGHT-LG_E>
    }
    box {
     <0, LG_BRICK_WIDTH, 0>,
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_HEIGHT/cos(lg_angle)>
     rotate <0, -lg_angle*180/pi, 0>
     translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
    }
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 4*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.05, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 4.5*LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+0.05, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 3.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_KNOB_RADIUS+LG_E>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+LG_E, -LG_E>
   }
   box {
    <LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_PLATE_HEIGHT-2*LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
    <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  rotate <0, 90, 0>
  translate <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT, 0, LG_BRICK_WIDTH>
 }
 difference {
  merge {
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT/4>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_tech_knob_logo_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 0, 0>
 }
 difference {
  merge {
   box {
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH>
   }
  }
  box {
   <-1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH>,
   <-1.5*LG_BRICK_WIDTH-LG_PLATE_HEIGHT-LG_E, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH>
  }
 }
 difference {
  merge {
   box {
    <LG_E, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    <-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_PLATE_HEIGHT/sqrt(2)-LG_CORNER_SPACE, LG_WALL_WIDTH/2, 0>,
    <0, -LG_WALL_WIDTH/2, LG_PLATE_HEIGHT/cos(pi/4)>
    rotate <0, -45, 0>
    translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <-2*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_WALL_WIDTH-LG_E>,
   <-1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH, 2*LG_WALL_WIDTH>
  }
 }
 box {
  <LG_PLATE_HEIGHT/2-2*LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_E, 0>,
  <0, -LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT>
  rotate <0, -45, 0>
  translate <-1.5*LG_BRICK_WIDTH-0.2, 0, 0>
 }
 box {
  <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E>,
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_E>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
}

#end
