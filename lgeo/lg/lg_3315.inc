/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980731 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3315: Plate 2 x 4 with Digger Bucket Holder                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3315)
#else
#declare lg_3315 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -1.5;
 #while (KNOB_X < 2)
  object {
   lg_knob
   rotate <0, 0, 90>
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob
   rotate <0, 0, 90>
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 union {
  #declare MIR = 0;
  #while (MIR < 2)
   union {
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <4*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_BRICK_WIDTH,  0>,
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE,  0>,
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <4*LG_WALL_WIDTH, 1.5*LG_WALL_WIDTH, -LG_WALL_WIDTH>,
     <2*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
    }
    box {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH, -LG_WALL_WIDTH>,
     <-LG_CORNER_SPACE-LG_E, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
    }
    box {
     <4*LG_WALL_WIDTH, 1.5*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <2*LG_WALL_WIDTH, LG_WALL_WIDTH/2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE-LG_E, 3*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_TOP_HEIGHT>
    }
    #if (MIR=1)
     matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    #end
   }
   #declare MIR = MIR + 1;
  #end
  cylinder {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2, -LG_WALL_WIDTH>,
   <2*LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
  }
  box {
   <3*LG_WALL_WIDTH, LG_WALL_WIDTH/2, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <2*LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  difference {
   box {
    <2*LG_WALL_WIDTH, LG_WALL_WIDTH/2, -LG_WALL_WIDTH>,
    <-3*LG_WALL_WIDTH+LG_E, -LG_WALL_WIDTH/2, LG_WALL_WIDTH/2>
   }
   cylinder {
    <-LG_BRICK_WIDTH, 0, 0.2>,
    <-LG_BRICK_WIDTH, 0, -0.2>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
  }
  box {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, LG_WALL_WIDTH>,
   <-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, LG_WALL_WIDTH-LG_TOP_HEIGHT>
  }
  translate <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>
 }
} 

#declare lg_3315_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -1.5;
 #while (KNOB_X < 2)
  object {
   lg_knob_clear
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob_clear
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 merge {
  #declare MIR = 0;
  #while (MIR < 2)
   merge {
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <4*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_BRICK_WIDTH,  0>,
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE,  0>,
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <4*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <4*LG_WALL_WIDTH, 1.5*LG_WALL_WIDTH, -LG_WALL_WIDTH>,
     <2*LG_WALL_WIDTH, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
    }
    box {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH, -LG_WALL_WIDTH>,
     <-LG_CORNER_SPACE-LG_E, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
    }
    box {
     <4*LG_WALL_WIDTH, 1.5*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <2*LG_WALL_WIDTH, LG_WALL_WIDTH/2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE-LG_E, 3*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_TOP_HEIGHT>
    }
    #if (MIR=1)
     matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    #end
   }
   #declare MIR = MIR + 1;
  #end
  cylinder {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2, -LG_WALL_WIDTH>,
   <2*LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
  }
  box {
   <3*LG_WALL_WIDTH, LG_WALL_WIDTH/2, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <2*LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  difference {
   box {
    <2*LG_WALL_WIDTH, LG_WALL_WIDTH/2, -LG_WALL_WIDTH>,
    <-3*LG_WALL_WIDTH+LG_E, -LG_WALL_WIDTH/2, LG_WALL_WIDTH/2>
   }
   cylinder {
    <-LG_BRICK_WIDTH, 0, 0.2>,
    <-LG_BRICK_WIDTH, 0, -0.2>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
  }
  box {
   <3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, LG_WALL_WIDTH>,
   <-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, LG_WALL_WIDTH-LG_TOP_HEIGHT>
  }
  translate <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>
 }
} 

#end
