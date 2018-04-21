/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080802 Lutz Uhlmann fixed wrong difference                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3939: Slope Brick 33  3 x 6                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3939)
#else
#declare LENGTH = 6;
#declare WIDTH = 1;
#declare lg_angle1=65.32484819;
#declare lg_angle2=90-lg_angle1;
#declare lg_3939 = 
union {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LENGTH-1)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH-1)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE)>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
   }
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_BRICK_HEIGHT+LG_E>
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
     <-LG_CORNER_SPACE, 0, -(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
     rotate <lg_angle1, 0, 0>
     translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <-LG_E, WIDTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
     <LG_BRICK_WIDTH+LG_E, WIDTH*3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    }
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
  }
 }
 difference {
  union {
   box {
    <5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_BRICK_HEIGHT+LG_E>
   }
   difference {
    box {
     <6*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
     <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
     rotate <lg_angle1, 0, 0>
     translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <5*LG_BRICK_WIDTH-LG_E, WIDTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
     <6*LG_BRICK_WIDTH+LG_E, WIDTH*3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    }
   }
   object {
    lg_knob_inner_space
    translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 0, LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 } 
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_BRICK_INNER_HEIGHT>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
 } 
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, WIDTH*3*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 } 
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE,0>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_HEIGHT-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 } 
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
  <LG_CORNER_SPACE, -(LG_WALL_WIDTH-LG_CORNER_SPACE), -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)>
  rotate <lg_angle1, 0, 0>
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_knob
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 translate <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT>
 rotate <0, 0, -90>
}

#declare lg_3939_clear = 
merge {
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LENGTH-1)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH-1)*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE)>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 sphere {
  <(LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE 
 }
 sphere {
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <((LENGTH-1)*LG_BRICK_WIDTH)+LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>, LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE, (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_BRICK_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  <LG_CORNER_SPACE, ((WIDTH*3*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
   }
   box {
    <0, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_BRICK_HEIGHT+LG_E>
   }
   difference {
    box {
     <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
     <-LG_CORNER_SPACE, 0, -(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
     rotate <lg_angle1, 0, 0>
     translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <-LG_E, WIDTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
     <LG_BRICK_WIDTH+LG_E, WIDTH*3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    }
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
  }
 }
 difference {
  merge {
   box {
    <5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH, LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_BRICK_HEIGHT+LG_E>
   }
   difference {
    box {
     <6*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
     <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
     rotate <lg_angle1, 0, 0>
     translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <5*LG_BRICK_WIDTH-LG_E, WIDTH*LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
     <6*LG_BRICK_WIDTH+LG_E, WIDTH*3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    }
   }
   object {
    lg_knob_inner_space_clear
    translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_INNER_HEIGHT>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 0, LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 } 
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_BRICK_INNER_HEIGHT>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT>
 } 
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, WIDTH*3*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 } 
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_CORNER_SPACE,0>,
  <5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, WIDTH*3*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_HEIGHT-2*LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>
 } 
 box {
  <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
  <LG_CORNER_SPACE, -(LG_WALL_WIDTH-LG_CORNER_SPACE), -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)>
  rotate <lg_angle1, 0, 0>
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_knob_clear
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 object {
  lg_knob_clear
  translate <5.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
 }
 translate <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT>
 rotate <0, 0, -90>
}

#end