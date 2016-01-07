<?php
$z[0]=Array("field","站长之家, 网站建设, 网站",0,75);
$z[0][4]['name']="keywords";
$z[1]=Array("field","在傻瓜式部署方式出现问题之后，我们该通过什么方法搭建网站呢？其实京东云擎本身已经给出了答案，那就是Git。关于Git是什么我们就不做过多介绍了，它与以前的FlashFXP这类",77,354);
$z[1][4]['name']="description";
$z[2]=Array("field","",356,394);
$z[2][4]['name']="title";
$z[3]=Array("field","",396,435);
$z[3][4]['name']="writer";
$z[4]=Array("field","",437,476);
$z[4][4]['name']="source";
$z[5]=Array("field","",478,518);
$z[5][4]['name']="pubdate";
$z[6]=Array("field","<p>在傻瓜式部署方式出现问题之后，我们该通过什么方法搭建网站呢？其实京东云擎本身已经给出了答案，那就是Git。关于Git是什么我们就不做过多介绍了，它与以前的FlashFXP这类FTP工具的作用很相似，但又比这些工具强大的多，而了解网站建设的朋友对于FlashFXP这类工具一定不会陌生，因为你想要把网站建立在服务器上，就需要用到FTP工具。</p>\n<p style=\"text-align: center; text-indent: 0;\"><img src=\"/uploads/allimg/c140828/1409236242610-1Ba.jpg\" alt=\"网站建设 网站服务器 ZBlog建站 京东云擎\" border=\"0\" width=\"580\"  /></p>\n<p style=\"text-align: center;\"><strong>Git完全使用指南</strong></p>\n<p>因此接下来，我们就来详细介绍一下Git的使用方法，同时本篇文章是以ZBlog建站为例来进行讲解的，学会了Git的使用方法，那么无论是Zblog，还是WordPress，亦或是Discuz，再或是你自己亲手设计的网站，都可以直接部署到京东云擎等虚拟服务器上。</p>\n<p>好了闲话不多说，下面我们就进入正题吧！</p>\n<p><strong>&middot;Git建站首先要做哪些准备？</strong></p>\n<p>在使用Git部署网站之前，首先你需要准备以下几个安装文件：</p>\n<blockquote>\n<p>1.去ZBlog官网下载ZBlog压缩包。</p>\n<p>2.在京东云擎下载Git&nbsp;Bash安装包。</p>\n<p>3.搜索SourceTree，下载安装包。</p>\n</blockquote>\n<p>其次你需要有以下几个条件：</p>\n<blockquote>\n<p>1.本教程虚拟服务器以京东云擎为例，所以你要有一个京东帐号。</p>\n<p>2.在京东云擎里建立一个PHP应用。</p>\n<p>3.在京东云擎里建立一个MySQL数据库。</p>\n<p><strong>（具体可以参看《<a href=\"http://www.chinaz.com/web/2014/0801/362147.shtml\" target=\"_blank\">小学生都能看懂&nbsp;教你打造免费个人网站</a>》）</strong></p>\n</blockquote>\n<p>这两步准备好了之后，我们就开始本次的教程吧。</p>\n<p>关于Git&nbsp;Bash的安装过程和方法就不多说了，大家直接点击安装之后，始终下一步即可。Git&nbsp;Bash安装好打开之后的界面如下图所示。OMG，这样的界面我们怎么用呢？</p>\n<p style=\"text-align: center; text-indent: 0;\"><img src=\"/uploads/allimg/c140828/14092362433Z-2L92.jpg\" alt=\"网站建设 网站服务器 ZBlog建站 京东云擎\" border=\"0\" width=\"580\"  /></p>\n<p style=\"text-align: center;\"><strong>Git&nbsp;Bash安装好之后的界面，呃&hellip;&hellip;这个怎么用呢&hellip;&hellip;</strong></p>\n<p>别慌，Git&nbsp;Bash对于像笔者这样的小白来说当然是不好用，但是我们下载的SourceTree可以让Git&nbsp;Bash变成我们熟悉的使用方式。还等什么？赶快点击SourceTree的安装包进行安装吧。</p>\n<p style=\"text-align: center; text-indent: 0;\"><img src=\"/uploads/allimg/c140828/1409236243N0-342V.jpg\" alt=\"网站建设 网站服务器 ZBlog建站 京东云擎\" border=\"0\" width=\"580\"  /></p>\n<p style=\"text-align: center;\"><strong>填写基本信息</strong></p>\n<p>开始安装之后会遇到上面和下面的这些界面，除了用户信息自定义填写之外，其它跟笔者保持一致即可。</p>\n<p style=\"text-align: center; text-indent: 0;\"><img src=\"/uploads/allimg/c140828/1409236244230-41339.jpg\" alt=\"网站建设 网站服务器 ZBlog建站 京东云擎\" border=\"0\" width=\"580\"  /></p>\n<p style=\"text-align: center;\"><strong>默认选择PuTTY/Plink即可</strong></p>\n<p>托管服务商你有的话填上就可以了，没有也没任何影响，直接点击完成即可。不过点击之后会提示检测托管服务商，这时候直接点击跳过就好了。此外，安装过程中可能还会问你要不要加载一个SSH密钥，这个暂时可以不添加，直接跳过即可。</p>\n<p style=\"text-align: center; text-indent: 0;\"><img src=\"/uploads/allimg/c140828/1409236244H0-539A.jpg\" alt=\"网站建设 网站服务器 ZBlog建站 京东云擎\" border=\"0\" width=\"580\"  /></p>\n<p style=\"text-align: center;\"><strong>有的填没有的直接点击完成按钮</strong></p>\n<p style=\"text-align: center; text-indent: 0;\"><img src=\"/uploads/allimg/c140828/1409236245120-B223.jpg\" alt=\"网站建设 网站服务器 ZBlog建站 京东云擎\" border=\"0\" width=\"580\"  /></p>\n<p style=\"text-align: center;\"><strong>升级安装一下即可</strong></p>\n<p>如果安装的过程中出现上面这个对话框，那么选择红框标出的选项即可。SourceTree与Git的安装都很简单，SourceTree其实是Git的图形化客户端，有了SourceTree，我们就不必为Git的命令式操作发愁了。安装好之后打开SourceTree客户端，然后放着就好。</p>\n<p>&nbsp;</p>",520,5287);
$z[6][4]['name']="body";
$z[7]=Array("field","/uploads/allimg/c140828/1409236242610-1Ba.jpg",5289,5373);
$z[7][4]['name']="litpic";

?>