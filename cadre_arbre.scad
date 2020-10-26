outline_x=170.2;
outline_y=111.2;
size_x = 163.2;
size_y = 97.92;
cadre_arrondis_r = 6;
cadre_bordure = 14;
cadre_z = 1;
ecran_bordure = (outline_x-size_x)/2+0.5;
ecran_bordure_grande = outline_y-size_y-ecran_bordure+0.5;
boite_z = 14;
cote = 1.5;

module biseau_angle_droit(origine,taille,rotz){
    translate(origine) rotate([0,0,rotz]) difference(){
    cube([taille,taille,cadre_z]);
    translate([taille,taille,-1]) cylinder(r=taille, h=cadre_z+2);
  }  

}

biseau_angle_droit([0,0,0],cadre_arrondis_r,0);
biseau_angle_droit([0,size_y,0],cadre_arrondis_r,-90);
biseau_angle_droit([size_x,size_y,0],cadre_arrondis_r,180);
biseau_angle_droit([size_x,0,0],cadre_arrondis_r,90);

translate([-cadre_bordure,-cadre_bordure*2,0]) cube([size_x+cadre_bordure*2,cadre_bordure,0.2]);
translate([-cadre_bordure,size_y+cadre_bordure,0]) cube([size_x+cadre_bordure*2,cadre_bordure,0.2]);

translate([0,-cadre_bordure,0]) cube([size_x,cadre_bordure,cadre_z]);
translate([0,size_y,0]) cube([size_x,cadre_bordure,cadre_z]);
translate([-cadre_bordure,-cadre_bordure,0]) cube([cadre_bordure,size_y+2*cadre_bordure,cadre_z]);
translate([size_x,-cadre_bordure,0]) cube([cadre_bordure,size_y+2*cadre_bordure,cadre_z]);

translate([size_x/2-25,-2.5-ecran_bordure,cadre_z]) cube([50,2.5,3]);
translate([0,size_y+ecran_bordure_grande,cadre_z]) cube([25,2.5,3]);
translate([size_x-25,size_y+ecran_bordure_grande,cadre_z]) cube([25,2.5,3]);
translate([-2.5-ecran_bordure,size_y/2-25/2,cadre_z]) cube([2.5,25,3]);
translate([size_x+ecran_bordure,size_y/2-25/2,cadre_z]) cube([2.5,25,3]);

//translate([0,0,0]) cube([0,0,0]);
translate([-cadre_bordure,-cadre_bordure,cadre_z]) cube([cote,size_y+2*cadre_bordure,boite_z]);
translate([cadre_bordure+size_x-cote,-cadre_bordure,cadre_z]) cube([cote,size_y+2*cadre_bordure,boite_z]);
translate([-cadre_bordure,-cadre_bordure,cadre_z]) cube([size_x+2*cadre_bordure,cote,boite_z]);
translate([-cadre_bordure,size_y-cote+cadre_bordure,cadre_z]) cube([size_x+2*cadre_bordure,cote,boite_z]);