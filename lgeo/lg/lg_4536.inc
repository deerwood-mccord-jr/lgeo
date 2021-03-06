/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980426 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4536: Cupboard 2 x 3 x 2 Drawer                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4536)
#else
#declare lg_4536 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.14+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.18+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, -0.06>
   }
   box {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, -0.06-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, -0.7+LG_CORNER_SPACE>
   }
   box {
    <-0.1*sqrt(2), 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -LG_E>,
    <0, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, LG_CORNER_SPACE>
    rotate <0, -45, 0>
    translate <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0, 0.04-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, 0.04-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-0.18+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, -0.06-LG_CORNER_SPACE-LG_E>
    }
    box {
     <-0.1*sqrt(2), 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_E, 0>,
     <0, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08-LG_E, 0.1>
     rotate <0, -45, 0>
     translate <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0, 0.04-LG_CORNER_SPACE>
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04>,
  <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE-LG_E>
 }
 box {
  <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-0.08, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.06>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.62>
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7>
 }
 difference {
  union {
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0>
   }
   cylinder {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0>,
    0.08
   }
   cylinder {
    <LG_WALL_WIDTH, -LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, -LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0>,
    0.08
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -0.08+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, -0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -LG_WALL_WIDTH, -0.08+LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0.08>,
    <-LG_E, -LG_WALL_WIDTH, -0.08>
   }
  }
  box {
   <0.08, 2*LG_WALL_WIDTH, 0.08+LG_E>,
   <-2*LG_E, -2*LG_WALL_WIDTH, 0>
  }
  translate <LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
 }
}

#declare lg_4536_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.14+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.18+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, -0.06>
   }
   box {
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, -0.06-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, -0.7+LG_CORNER_SPACE>
   }
   box {
    <-0.1*sqrt(2), 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -LG_E>,
    <0, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, LG_CORNER_SPACE>
    rotate <0, -45, 0>
    translate <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0, 0.04-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, 0.04-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-0.18+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08, -0.06-LG_CORNER_SPACE-LG_E>
    }
    box {
     <-0.1*sqrt(2), 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_E, 0>,
     <0, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-0.08-LG_E, 0.1>
     rotate <0, -45, 0>
     translate <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0, 0.04-LG_CORNER_SPACE>
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, 0.04>,
  <LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE-LG_E>
 }
 box {
  <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-0.08, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.06>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.06-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT-LG_CORNER_SPACE, -0.62>
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT+LG_CORNER_SPACE, -0.7>
 }
 difference {
  merge {
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0>
   }
   cylinder {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0>,
    0.08
   }
   cylinder {
    <LG_WALL_WIDTH, -LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, -LG_WALL_WIDTH, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0>,
    0.08
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, -0.08+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH, -0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -LG_WALL_WIDTH, -0.08+LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH, 0.08>,
    <-LG_E, -LG_WALL_WIDTH, -0.08>
   }
  }
  box {
   <0.08, 2*LG_WALL_WIDTH, 0.08+LG_E>,
   <-2*LG_E, -2*LG_WALL_WIDTH, 0>
  }
  translate <LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
 }
}

#end




