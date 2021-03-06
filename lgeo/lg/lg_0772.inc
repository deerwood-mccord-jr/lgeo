/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001111 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0772: Brick 1 x 2 x 2 without centre Studs                               */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_0772)
#else
#declare LENGTH = 1;
#declare WIDTH = 2;
#declare HEIGHT = 2;
#declare lg_0772 =
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_knob
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
}

#declare lg_0772_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_knob_clear
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 difference {
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
}

#end
