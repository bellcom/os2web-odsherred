<?php
/**
 * @class OdsherredFacetApiWidget
 *
 * @author Thomas Thune Hansen <tth@bellcom.dk >
 * @TODO
 *  clean up code, implement drupal render arrays properly 
 */

class OdsherredFacetApiWidget extends FacetapiWidget {
  
  public function execute(){
    $elements = &$this->build[$this->facet['field alias']];

    $markup = '<ul class="'.$this->facet['field alias'].' custom-facet">';

    if($this->facet['field alias'] == 'im_field_site_structure'){
      $markup .= '<li class="all"><a href="?">Alle resultater</a></li>';
    }

    foreach($elements as $item){
      $markup .= $this->theme_list_item($item);
    }
    
    $markup .= '</ul>';

    $elements = array(
      '#markup' => $markup,
    );
  } 

  protected function theme_list_item($element) {

    $nextQueryId = max(array_keys($element['#query']['f']));

    if($nextQueryId === 0)
    {
      $link = isset($element['#query']['f'][$nextQueryId]) ? '?f['.$nextQueryId.']='.urlencode($element['#query']['f'][$nextQueryId]) : '/';
    }
    else if($nextQueryId >= 1)
    {
      $link = isset($element['#query']['f'][$nextQueryId]) ? '?'.$_SERVER['QUERY_STRING'].'&f['.$nextQueryId.']='.urlencode($element['#query']['f'][$nextQueryId]) : '/';
    }
    else {
      error_log($_SERVER['QUERY_STRING']);
    }
    $item = '<li class="tid-'.$element['#indexed_value'].'"><a href="'.$link.'">'.$element['#markup'].'<span class="count">('.$element['#count'].')</span></a></li>';
    return $item;
  }

}
