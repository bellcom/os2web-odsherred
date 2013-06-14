<?php
/**
 * @file
 * os2web_menuer_og_blokke.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function os2web_menuer_og_blokke_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:taxonomy/term/4
  $menu_links['main-menu:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'minipanel' => 'odsherred_borger',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '.region-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '200',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'delay' => '30',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '940',
            'max' => '940',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '782',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/5
  $menu_links['main-menu:taxonomy/term/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => 'odsherred_erhverv',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '.region-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '200',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'delay' => '0',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '940',
            'max' => '940',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '783',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:taxonomy/term/6
  $menu_links['main-menu:taxonomy/term/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik',
    'options' => array(
      'minipanel' => 'odsherred_politik',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '.region-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '200',
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'hide' => array(
          'delay' => '0',
          'effect' => array(
            'type' => 'false',
            'length' => '0',
          ),
        ),
        'style' => array(
          'name' => 'cmstheme',
          'width' => array(
            'min' => '940',
            'max' => '940',
          ),
          'border' => array(
            'width' => '0',
            'color' => '#fff',
            'radius' => '0',
          ),
          'tip' => 'none',
        ),
        'mlid' => '784',
      ),
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-erhverv-genveje:nyheder
  $menu_links['menu-erhverv-genveje:nyheder'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Nyheder og presse',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-indholdsmenu:taxonomy/term/4
  $menu_links['menu-indholdsmenu:taxonomy/term/4'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Borger',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Borger',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: menu-indholdsmenu:taxonomy/term/5
  $menu_links['menu-indholdsmenu:taxonomy/term/5'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Erhverv',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Erhverv',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '4',
  );
  // Exported menu link: menu-indholdsmenu:taxonomy/term/6
  $menu_links['menu-indholdsmenu:taxonomy/term/6'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => 'Se alle punkter under Politik & planer',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: menu-top-menu:http://www.adgangforalle.dk/
  $menu_links['menu-top-menu:http://www.adgangforalle.dk/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.adgangforalle.dk/',
    'router_path' => '',
    'link_title' => 'Læs højt',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-top-menu:user/logout
  $menu_links['menu-top-menu:user/logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log ud',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-10',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Borger');
  t('Erhverv');
  t('Log out');
  t('Log ud');
  t('Læs højt');
  t('Nyheder og presse');
  t('Politik');
  t('User account');


  return $menu_links;
}
