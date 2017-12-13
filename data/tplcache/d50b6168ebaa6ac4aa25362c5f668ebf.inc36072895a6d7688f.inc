<?php
$z[0]=Array("field","",36,64);
$z[0][4]['name']="typeurl";
$z[1]=Array("field","",72,101);
$z[1][4]['name']="typename";
$z[2]=Array("field","",207,230);
$z[2][4]['name']="id";
$z[3]=Array("sql","  \r\n               <a href=\"[field:typedir function='str_replace(\"{cmspath}\",\"\",@me)'/]/[field:defaultname/]\">[field:typename/]</a>\r\n                ",253,525);
$z[3][4]['sql']="SELECT typename,typedir,defaultname FROM dede_arctype where reID =~id~ ORDER BY sortrank ASC";

?>