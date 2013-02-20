jQuery(document).ready(function($){
  var width = $(window).width(),
      height = $(window).height(),
      page1 = '#'+Drupal.settings.slide_menu_links.slide_left_text,
      page2 = '#'+Drupal.settings.slide_menu_links.slide_right_text,
      currentPage = "#page_1",
      left_link = Drupal.settings.slide_menu_links.slide_left_link,
      right_link = Drupal.settings.slide_menu_links.slide_right_link,
      backDirection = '';

  $('#page').attr('id', 'page_1');

  if (Drupal.settings.slide_menu_links.slide_left_link !== '<notset>')
  {
    $('<div data-role="page" id="page_2">').insertBefore('#page_1');
    $('#page_2').css({ "display" : "none"  });
    if (left_link.indexOf('http://') === -1 )
    {
      $('#page_2').load(left_link + " , #page");
    }
    $('<div class="slider slider_left"><a class="slider_link" href="'+page1+'"><i class="link"></a></div>').appendTo('body');
  }

  if (Drupal.settings.slide_menu_links.slide_right_link !== '<notset>')
  {
    $('<div data-role="page" id="page_3">').insertBefore('#page_1');
    $('#page_3').css({ "display" : "none"  });
    if (right_link.indexOf('http://') === -1 )
    {
      $('#page_3').load(right_link + " , #page");
    }
    $('<div class="slider slider_right"><a class="slider_link" href="'+page2+'"><i class="link"></a></div>').appendTo('body');
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
    }
    currentPage = to;
  }

  // Handle links
  $(window).bind('hashchange', function(e){
    var $sliderLink = "";
    
    switch(location.hash)
    {
      case page1:
        $('.slider_left').fadeOut();
        $('.slider_right').addClass('slider_back');
        $sliderLink = $('.slider_back').find('a');
        $sliderLink.attr('href', '#');
        backDirection = 'left';
        slidePage('#page_1', '#page_2', 'right', left_link);
        $('.vegas-background').fadeOut();
        if($('.pane-aktuelt-panel-pane-3').length !== 0)
        {
          Drupal.viewsSlideshow.action({ "action": 'pause', "slideshowID": 'aktuelt-panel_pane_3', "force": true });
        }
        break;

      case page2:
        $('.slider_right').fadeOut();
        $('.slider_left').addClass('slider_back');
        $sliderLink = $('.slider_back').find('a');
        $sliderLink.attr('href', '#');
        backDirection = 'right';
        slidePage('#page_1', '#page_3', 'left', right_link);
        $('.vegas-background').fadeOut();
        if($('.pane-aktuelt-panel-pane-3').length !== 0)
        {
          Drupal.viewsSlideshow.action({ "action": 'pause', "slideshowID": 'aktuelt-panel_pane_3', "force": true });
        }
        break;

      default:
        $('.slider_left').removeClass('slider_back');
        $('.slider').fadeIn();
        $sliderLink = $('.slider_left').find('a');
        $sliderLink.attr('href', page1);
        $sliderLink = $('.slider_right').find('a');
        $sliderLink.attr('href', page2);
        slidePage('#page_3', '#page_1', backDirection);
        $('.vegas-background').fadeIn();
        if($('.pane-aktuelt-panel-pane-3').length !== 0)
        {
          Drupal.viewsSlideshow.action({ "action": 'start', "slideshowID": 'aktuelt-panel_pane_3', "force": true });
        }
        break;
    }
  });
});
