/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/* 19980413 Lutz Uhlmann   moved from lg_0011 to lg_3579                       */
/* 20071202 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3579: Door 1 x 3 x 4 Frame                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3579)
#else
#declare LENGTH = 1;
#declare WIDTH = 3;
#declare HEIGHT = 4;
#declare lg_3579 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
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
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 cylinder {
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT>
 }
 box {
  <0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  <-0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>
 }
 box {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 box {
  <0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 box {
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 box {
  <0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 #declare BOX_X = -1;
 #while (BOX_X < 2)
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, BOX_X*LG_BRICK_WIDTH+0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <LENGTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_E, BOX_X*LG_BRICK_WIDTH-0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
  }
  box {
   <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, BOX_X*LG_BRICK_WIDTH+0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <-LENGTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_E, BOX_X*LG_BRICK_WIDTH-0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
  }
  #declare BOX_X = BOX_X + 1;
 #end
 box {
  <0.03, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-0.03, WIDTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 box {
  <0.03, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-0.03, -WIDTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   object {
    lg_knob
    translate <0, LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
   }
   object {
    lg_knob
    translate <0, -LG_BRICK_WIDTH, 0>
   }
  }
  union {
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -LG_WALL_WIDTH-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -LG_WALL_WIDTH-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -LG_WALL_WIDTH-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -LG_WALL_WIDTH-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
  }
 }
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT, WIDTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT, -WIDTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT, -HEIGHT*LG_BRICK_HEIGHT-LG_E>
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
  }
 } 
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <-LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, -LG_BRICK_WIDTH/2, -HEIGHT*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, LG_BRICK_WIDTH/2, -HEIGHT*LG_BRICK_HEIGHT>
 }
}

#declare lg_3579_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
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
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 cylinder {
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT>
 }
 box {
  <0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>,
  <-0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>
 }
 box {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <0.06-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 box {
  <0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.1+LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 box {
  <0.06-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 box {
  <0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.1-LG_CORNER_SPACE, -LG_WALL_WIDTH-0.1+LG_CORNER_SPACE>,
  <-0.06, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+0.1-LG_CORNER_SPACE>
 }
 #declare BOX_X = -1;
 #while (BOX_X < 2)
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, BOX_X*LG_BRICK_WIDTH+0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <LENGTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_E, BOX_X*LG_BRICK_WIDTH-0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
  }
  box {
   <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, BOX_X*LG_BRICK_WIDTH+0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <-LENGTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_E, BOX_X*LG_BRICK_WIDTH-0.03, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
  }
  #declare BOX_X = BOX_X + 1;
 #end
 box {
  <0.03, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-0.03, WIDTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 box {
  <0.03, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-0.03, -WIDTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
 }
 difference {
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   object {
    lg_knob
    translate <0, LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
   }
   object {
    lg_knob
    translate <0, -LG_BRICK_WIDTH, 0>
   }
  }
  merge {
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -LG_WALL_WIDTH-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -LG_WALL_WIDTH-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -LG_WALL_WIDTH-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -LG_WALL_WIDTH-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, LG_KNOB_HEIGHT+LG_E>,
    0.08
   }
  }
 }
 difference {
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT, WIDTH/2*LG_BRICK_WIDTH-LG_TOP_HEIGHT, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT, -WIDTH/2*LG_BRICK_WIDTH+LG_TOP_HEIGHT, -HEIGHT*LG_BRICK_HEIGHT-LG_E>
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
   cylinder {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.08, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>,
    0.08
   }
  }
 } 
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <-LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 box {
  <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, -LG_BRICK_WIDTH/2, -HEIGHT*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, LG_BRICK_WIDTH/2, -HEIGHT*LG_BRICK_HEIGHT>
 }
}

#end
