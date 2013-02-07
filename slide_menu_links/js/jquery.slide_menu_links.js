jQuery(document).ready(function($){
  var width = $(window).width(),
      height = $(window).height(),
      page1 = '#'+Drupal.settings.slide_menu_links.slide_left_text,
      page2 = '#'+Drupal.settings.slide_menu_links.slide_right_text,
      currentPage = "#page_1",
      left_link = Drupal.settings.slide_menu_links.slide_left_link,
      right_link = Drupal.settings.slide_menu_links.slide_right_link;

  // Wrap all content in body
  $('body').html('<div class="page_container"><div class="pages"><div id="page_1">' + $('body').html() +'</div></div></div>');

  if (Drupal.settings.slide_menu_links.slide_left_link !== '<notset>')
  {
    $('<div data-role="page" id="page_2">').insertBefore('#page_1');
    $('#page_2').css({ "display" : "none"  });
    if (left_link.indexOf('http://') === -1 )
    {
      $('#page_2').load(left_link + " , #page");
    }
    $('body').append('<div class="slider slider_left"><a class="slider_link" href="'+page1+'"><i class="link"></a></div>');
  }

  if (Drupal.settings.slide_menu_links.slide_right_link !== '<notset>')
  {
    $('<div data-role="page" id="page_3">').insertBefore('#page_1');
    $('#page_3').css({ "display" : "none"  });
    if (right_link.indexOf('http://') === -1 )
    {
      $('#page_3').load(right_link + " , #page");
    }
    $('body').append('<div class="slider slider_right"><a class="slider_link" href="'+page2+'"><i class="link"></a></div>');
  }

  if(location.hash) 
  {
    location.hash = "";
  }

  function slidePage(from, to, direction, pageUrl){
    var pageTop = $('#page_1').position().top;
    var $to = $(to);
    var $currentPage = $(currentPage);

    $to.css({ "position" : "absolute", "width" : width, "height" : height, "float" : "left", "top" : pageTop, "display" :"block" });
    
    if(direction === 'left')
    {
      $to.css({"left" : width});
      direction = '-=';
    }
    else
    {
      $to.css({"left" : -width});
      direction = '+=';
    }
     
    $currentPage.css({"position" : "relative", "height": height});
    $currentPage.animate({"left": direction+width}, 700);

    if(pageUrl !== undefined) {
      if (pageUrl.indexOf('http://') !== -1 )
      {
        $to.hide();
        setTimeout(function(){location.href=pageUrl;}, 600);
      }
    }
    $to.animate({"left": direction+width}, 700);
    setTimeout(function(){updateAfterSlide(to, currentPage);}, 710);

  }

  function updateAfterSlide(to, from)
  {
    $(to).removeAttr('style');
    $(from).removeAttr('style');
    if (from !== to )
    {
      $(from).hide();
    }currentPage = to;
  }

  // Handle links
  $(window).bind('hashchange', function(e){
    var $sliderLink = "";
    
    switch(location.hash)
    {
      case page1:
        $('.slider_right').hide();
        $('.slider_left').addClass('slider_back');
        $sliderLink = $('.slider_left').find('a');
        $sliderLink.attr('href', '#');
        slidePage('#page_1', '#page_2', 'right', left_link);
        $.vegas('pause');
        $('.vegas-background').fadeOut();
        break;

      case page2:
        $('.slider_right').hide();
        $('.slider_left').addClass('slider_back');
        $sliderLink = $('.slider_left').find('a');
        $sliderLink.attr('href', '#');
        slidePage('#page_1', '#page_3', 'left', right_link);
        $.vegas('pause');
        $('.vegas-background').fadeOut();
        break;

      default:
        $('.slider_left').removeClass('slider_back');
        $('.slider').show();
        $sliderLink = $('.slider_left').find('a');
        $sliderLink.attr('href', page1);
        slidePage('#page_3', '#page_1', 'right');
        $.vegas('pause');
        $('.vegas-background').fadeIn();
        break;
    }
  });
});
