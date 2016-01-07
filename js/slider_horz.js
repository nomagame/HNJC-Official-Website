$(document).ready(function() {
// !get number of slides in deck
var numSlides = $('#carousel>div').length;

// !gracefully add previous and next buttons, if more than one slide			
if ( numSlides > 1 ) {
	$('<a id="prev" href="#">Previous</a><a id="next" href="#">Next</a>').appendTo('#carousel_container');
}
$('#prev,#next').fadeIn('slow');

function startCarousel()
{
	// !parameters for slideshow
	$('#carousel').cycle({ 
	    fx:     'scrollHorz',
	    CleartypeNoBg: 1,
	    speed:	1250,
	    timeout: 6000,
	    prev: '#prev',
	    next: '#next',
	    pause: 1,
	    autostop: 1,
	    autostopCount: numSlides + 1,
	    before: onTransition
	});
}
	
startCarousel();

function onTransition() {
	var prevTitle;
	if ($(this).prev().find('h1').length == 0)
	{
		prevTitle = $(this).siblings().filter(":last").find('h1').text();
	}
	else 
	{
		prevTitle = $(this).prev().find('h1').text();
	}
	
	var nextTitle;
	if ($(this).next().find('h1').length == 0)
	{
		nextTitle = $(this).siblings().filter(":first").find('h1').text();
	}
	else 
	{
		nextTitle = $(this).next().find('h1').text();
	}
// !display tooltip over "next" and "previous" buttons
	$('#prev').attr('title', prevTitle);
	$('#next').attr('title', nextTitle);
}
	 
/*
$('p.dyna-btn a').click(function(){
	$('#carousel').cycle('stop'); 
	$('#prev,#next').click(function() {
		startCarousel();
		
	});
});
*/

});