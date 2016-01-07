<?php
$z[0]=Array("field","",263,282);
$z[0][4]['name']="title";
$z[1]=Array("global","",283,309);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",350,372);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",412,463);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1469,1504);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1781,1810);
$z[5][4]['name']="position";
$z[6]=Array("list","\r\n                        <li>\r\n                	        <div class=\"newsLTitle\">\r\n                    	        <strong><a href=\"[field:arcurl/]\" target=\"_blank\">[field:fulltitle/]</a></strong>\r\n                                <span>发布：[field:admin/]</span>\r\n                            </div>\r\n                            <div class=\"newsLCont\">\r\n                    	        <div class=\"newsLPic\">\r\n                        	        <img src=\"[field:litpic/]\" />\r\n                                </div>\r\n                                <div class=\"newsLAll\">\r\n                        	        \r\n[field:description/]……<a href=\"[field:arcurl/]\" target=\"_blank\">查看更多</a>\r\n                                </div>\r\n                                <div class=\"clear\"></div>\r\n                            </div>\r\n                            <div class=\"newsLDate\">[field:pubdate function=\"MyDate('m-d',@me)\"/]</div>\r\n                        </li>",1943,2935);
$z[6][4]['pagesize']="5";
$z[7]=Array("pagelist","",3047,3125);
$z[7][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[7][4]['listsize']="5";
$z[8]=Array("channel","\r\n                            <li><a href=\"[field:typelink/]\" class=\"active\">[field:typename/]</a></li>\r\n                        ",3379,3620);
$z[8][4]['type']="son";
$z[8][4]['typeid']="22";
$z[8][4]['currentstyle']="<li><a href='~typelink~'>~typename~</a> </li>";
$z[9]=Array("include","",4356,4394);
$z[9][4]['filename']="footer1.htm";
$z[10]=Array("include","",4396,4433);
$z[10][4]['filename']="footer.htm";

?>