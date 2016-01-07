// JavaScript Document

$(function(){
	$(".footNav p:first").css("margin-left","5px");
	$(".footNav p:last").css("margin-right","5px");
	$(".fEList li").hover(function(){
		$(this).addClass("hover");
	},function(){
		$(this).removeClass("hover");
	});
	
	$("ul.navList li").hover(function(){
		$(this).children(".navHidden").show();
	},function(){
		$(this).children(".navHidden").hide();
	});
	
	$("ul.navList li").click(function(){
		$(this).children("a").addClass("active");
		$(this).siblings("li").children("a").removeClass("active");
	});
	
	$("ul.detNavList li").click(function(){
		$(this).children("a").addClass("active");
		$(this).siblings("li").children("a").removeClass("active");
	});
	
	$(".picList li").hover(function(){
		$(this).children("a").children("em").slideDown();
		$(this).siblings("li").children("a").children("em").slideUp();
	},function(){
		$(this).children("a").children("em").slideUp();
	});
	//
	$(".close").click(function(){
		$(this).parent().hide();
		$("#bgDiv").remove();
		$("#iframepage").attr('src', '#');
	});
	
	$(".list_case li").hover(function(){
		$(this).children(".box_opac").show();
	},function(){
		$(this).children(".box_opac").hide();
	});
	
});


//切换
function hdshow(t,o){
	$(t).addClass("active").parent().siblings().children().removeClass("active");
	$(o).show().siblings().hide();
}

//
function iScroll(t,o){
	var w = $(o).width();
	if(t == "prev"){
		$(">ul",o).stop().animate({marginLeft:-w},function(){
			$(">ul li:first",o).appendTo($(">ul",o));
			$(">ul",o).css({marginLeft:0})
		})
	}else if(t == "next"){
		$(">ul li:last",o).prependTo($(">ul",o));
		$(">ul",o).css({marginLeft:-w})
		$(">ul",o).stop().animate({marginLeft:0})
	}
}

$(function(){


	//getonlineDymanic();
	//Try
	var TCi = $("#TryCont ul li").length;
	if(TCi>1){
		$("a.try-c-p,a.try-c-n").show();
		$("#TryCont ul").width($("#TryCont").width() * TCi);
	}

	//setInterval(renewDymanic,1000 * 3600)
	
});



//弹出框方法
function getDialog(obj,url){
	var bodyHeight = document.body.clientHeight;
	var bodyWidth = document.body.clientWidth;
	var pageWidth = document.documentElement.clientWidth || document.body.clientWidth;
	var pageHeight = document.documentElement.clientHeight || document.body.clientHeight;
	var pageTop = document.documentElement.scrollTop || document.body.scrollTop;
	var pageLeft = document.documentElement.scrollLeft || document.body.scrollLeft;
	
	$("#iframepage").attr('src', url);
	$(obj).css({
		top: (pageHeight - $(obj).outerHeight()) / 2 + pageTop,
		left: (pageWidth - $(obj).outerWidth()) / 2 + pageLeft
	}).show();
	
	
	$("body").append("<div style='background:#000;z-index:99;left:0px;top:0px;position:absolute' id='bgDiv'></div>");
	$("#bgDiv").css({
		opacity:0.8,
		height:bodyHeight,
		width:bodyWidth
	});
};

//随页面滚动的div
function scrollDiv(e){	
	var bodyHeight = document.body.clientHeight;
	var bodyWidth = document.body.clientWidth;
	var pageWidth = document.documentElement.clientWidth || document.body.clientWidth;
	var pageHeight = document.documentElement.clientHeight || document.body.clientHeight;
	var pageTop = document.documentElement.scrollTop || document.body.scrollTop;
	var pageLeft = document.documentElement.scrollLeft || document.body.scrollLeft;
	var eTop = (pageHeight - $(e).outerHeight()) / 2 + pageTop;


    var scrollTop=window.pageYOffset || document.documentElement.scrollTop || document.body.scrollTop || 0;
    var top=parseInt(e.style.top);
    if(scrollTop!=top){
	   e.style.top=eTop+'px'
    }
    //以下是如何给setTimeout传递参数的方法(js遇到无法传参时都可考虑用此方法)
    var func=function(div){return function(){scrollDiv(div)}}(e);
    window.setTimeout(func,300);
}   
window.onload=function(){
   scrollDiv(document.getElementById('hidden'));
}




