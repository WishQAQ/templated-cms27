<?php
$z[0]=Array("global","",317,343);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",387,417);
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",454,481);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",501,533);
$z[3][4]['name']="cfg_templets_skin";
$z[4]=Array("global","",601,633);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("global","",706,738);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("global","",823,855);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("global","",898,930);
$z[7][4]['name']="cfg_templets_skin";
$z[8]=Array("global","",1334,1359);
$z[8][4]['name']="cfg_cmsurl";
$z[9]=Array("global","",1372,1404);
$z[9][4]['name']="cfg_templets_skin";
$z[10]=Array("global","",1552,1577);
$z[10][4]['name']="cfg_cmsurl";
$z[11]=Array("channelartlist","\r\n      	<li class=\"nav__menu-item\"><a href='{dede:field name=\"typeurl\"/}'><span>{dede:field name=\"typename\"/}</span></a>\r\n                  \r\n\r\n            <div class=\"nav__menu-items\" id=\"nav__menu-items\" data-id=\"{dede:field name='id'/}\"  >\r\n\r\n               {dede:sql sql=\"SELECT typename,typedir,defaultname FROM dede_arctype where reID =~id~  ORDER BY sortrank ASC \" }  \r\n               <a href=\"[field:typedir function='str_replace(\"{cmspath}\",\"\",@me)'/]/[field:defaultname/]\">[field:typename/]</a>\r\n                {/dede:sql} \r\n        \r\n              </div>\r\n \r\n        </li>\r\n      	",1606,2263);
$z[11][4]['type']="top";
$z[11][4]['row']="10";
$z[12]=Array("arclist","\r\n<div><a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\"/></a></div>\r\n",2404,2555);
$z[12][4]['row']="10";
$z[12][4]['orderby']="pubdate";
$z[12][4]['typeid']="8";
$z[12][4]['titlelen']="100";
$z[13]=Array("global","",2819,2851);
$z[13][4]['name']="cfg_templets_skin";
$z[14]=Array("global","",2957,2989);
$z[14][4]['name']="cfg_templets_skin";
$z[15]=Array("global","",3095,3127);
$z[15][4]['name']="cfg_templets_skin";
$z[16]=Array("global","",3369,3394);
$z[16][4]['name']="cfg_cmsurl";
$z[17]=Array("global","",3434,3466);
$z[17][4]['name']="cfg_templets_skin";
$z[18]=Array("arclist","\r\n			<div style=\"width:180px; height:202px; float:left; margin-right:10px; margin-bottom:10px;\">\r\n            <table width=\"180\" height=\"202\" border=\"0\" cellpadding=\"0\" cellspacing=\"1\" bgcolor=\"#999999\">\r\n              <tr>\r\n                <td width=\"180\" height=\"140\" bgcolor=\"#FFFFFF\"><div align=\"center\" style=\"width:180px; height:140px; overflow:hidden;\" ><a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" height=\"140\"/></a></div></td>\r\n              </tr>\r\n              <tr>\r\n                <td height=\"55\" bgcolor=\"#FFFFFF\"><div align=\"center\"><a href=\"[field:arcurl/]\" style=\"color:#000000;\">[field:title /]</a></div></td>\r\n              </tr>\r\n            </table>\r\n			</div>\r\n",3738,4507);
$z[18][4]['row']="10";
$z[18][4]['orderby']="pubdate";
$z[18][4]['typeid']="3";
$z[18][4]['titlelen']="100";
$z[19]=Array("global","",4861,4893);
$z[19][4]['name']="cfg_templets_skin";
$z[20]=Array("global","",5803,5835);
$z[20][4]['name']="cfg_templets_skin";
$z[21]=Array("sql","\r\n				[field:content function=\"cn_substr(@me,180)\"/]\r\n　　",6282,6413);
$z[21][4]['sql']="Select content from dede_arctype where id=1";
$z[22]=Array("global","",6745,6770);
$z[22][4]['name']="cfg_cmsurl";
$z[23]=Array("global","",6809,6841);
$z[23][4]['name']="cfg_templets_skin";
$z[24]=Array("arclist","\r\n						<a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\" width=\"293\" height=\"175\" border=\"0\" /></a>\r\n						",7722,7910);
$z[24][4]['row']="1";
$z[24][4]['orderby']="pubdate";
$z[24][4]['typeid']="9";
$z[24][4]['titlelen']="100";
$z[25]=Array("global","",8239,8264);
$z[25][4]['name']="cfg_cmsurl";
$z[26]=Array("global","",8315,8347);
$z[26][4]['name']="cfg_templets_skin";
$z[27]=Array("global","",9251,9283);
$z[27][4]['name']="cfg_templets_skin";
$z[28]=Array("global","",10290,10315);
$z[28][4]['name']="cfg_cmsurl";
$z[29]=Array("global","",10352,10384);
$z[29][4]['name']="cfg_templets_skin";
$z[30]=Array("global","",10961,10993);
$z[30][4]['name']="cfg_templets_skin";
$z[31]=Array("global","",11360,11392);
$z[31][4]['name']="cfg_templets_skin";
$z[32]=Array("global","",11453,11485);
$z[32][4]['name']="cfg_templets_skin";
$z[33]=Array("arclist","\r\n<li><a href=\"[field:arcurl/]\"><img src=\"[field:litpic/]\"/><br />[field:title /]</a></li>\r\n",11554,11724);
$z[33][4]['row']="10";
$z[33][4]['orderby']="pubdate";
$z[33][4]['typeid']="6";
$z[33][4]['titlelen']="100";
$z[34]=Array("flink","",13209,13222);
$z[35]=Array("include","",13299,13336);
$z[35][4]['filename']="footer.htm";

?>