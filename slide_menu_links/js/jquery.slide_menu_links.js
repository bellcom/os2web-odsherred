$j(document).ready(function($){
  var width = $(window).width();
  var height = $(window).height();
  var currentPage = '#page_1';

  function slidePage(element, element2, direction){
    var pageTop = $('#page_1').position().top;
    
    $(element2).css({"display" : "block", "top": pageTop});
    $(element).css({"position" : "relative"});
    $(element).animate({"left": direction+width}, 700);
    $(element2).animate({"left": direction+width}, 700);
    setTimeout(function(){updateAfterSlide(element2, element);}, 700);
  }

  function updateAfterSlide(element, element2)
  {
    $(element).removeAttr('style');
    $(element2).hide();
  }

  $('body').html('<div class="page_container"><div class="pages"><div id="page_1">' + $('body').html() +'</div></div></div>');

  var left_link = Drupal.settings.slide_menu_links.slide_left_link + " #page";
  var right_link = Drupal.settings.slide_menu_links.slide_right_link + " #page";

  if (Drupal.settings.slide_menu_links.slide_left_link !== '<notset>')
  {
    $('<div data-role="page" id="page_2">').insertBefore('#page_1');
    $('#page_2').css({ "position" : "absolute", "width" : width, "height" : height, "float" : "left", "left" : width,"display" : "none"  });
    $('#page_2').load(left_link); 
    $('body').append('<div class="slide slide_right" id="slide_1">');
  }


  if (Drupal.settings.slide_menu_links.slide_right_link !== '<notset>')
  {
    $('<div data-role="page" id="page_3">').insertBefore('#page_1');
    $('#page_3').css({ "position" : "absolute", "width" : width, "height" : height, "float" : "left", "left" : -width,"display" : "none"  });
    $('#page_3').load(right_link); 
    $('body').append('<div class="slide slide_left" id="slide_2">');
  }

  $('#slide_1').click(function(e){
    $('.slide').remove();
    slidePage(currentPage, '#page_2', '-=');
    $('body').append('<div class="slide slide_back" id="slide_back">');
  });

  $('#slide_2').click(function(e){
    $('.slide').remove();
    slidePage(currentPage, '#page_3', '+=');
    $('body').append('<div class="slide slide_back" id="slide_back">');
  });
 



});
