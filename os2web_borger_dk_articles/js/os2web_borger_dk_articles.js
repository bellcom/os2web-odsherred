(function($) {
  Drupal.behaviors.os2web_borger_dk_articles = {
    attach: function(context) {
      $("div.mArticle").hide();
      $(".microArticle h2.mArticle").click(function() {
        var myid = $(this).attr('id');
        var style = $('div.' + myid).css('display');
        if (style == 'none') {
          $("div." + myid).show("500");
          $(this).css({
            'background-image' : 'url("../sites/all/modules/os2web_borger_dk_articles/images/foldIn.png")',
          });
        }
        else {
          $("div." + myid).hide("500");
          $(this).css({
            'background-image' : 'url("../sites/all/modules/os2web_borger_dk_articles/images/foldOut.png")',
          });
        }
      });
    }
  }
})(jQuery);