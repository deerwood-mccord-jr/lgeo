/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970926 Lutz Uhlmann                                                       */
/* 20080119 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6079: Fence 1 x 8 x 2                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6079)
#else
#declare lg_6079 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }  
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }  
   #if (lg_quality > 3)
    object {
     lego_logo_text
     rotate <0, 0, 90>
     scale <3/4, 3/4-6/4*MIR, 3/4>
     translate <0, 2.5*LG_BRICK_WIDTH, 0> }
   #end
   difference {
    union {
     box {
      <LG_KNOB_RADIUS-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_KNOB_RADIUS, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 2.5*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
 }
 box {
  <LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT>
 }
 box {
  <LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_6079_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }  
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }  
   #if (lg_quality > 3)
    object {
     lego_logo_text
     rotate <0, 0, 90>
     scale <3/4, 3/4-6/4*MIR, 3/4>
     translate <0, 2.5*LG_BRICK_WIDTH, 0> }
   #end
   difference {
    merge {
     box {
      <LG_KNOB_RADIUS-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_KNOB_RADIUS, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 2.5*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 2.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS-LG_CORNER_SPACE-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
 }
 box {
  <LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_KNOB_RADIUS+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT>
 }
 box {
  <LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#end