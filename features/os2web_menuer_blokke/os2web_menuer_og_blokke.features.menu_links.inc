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
      'minipanel' => 'mega_menu_borger',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#zone-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
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
            'min' => '970',
            'max' => '970',
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
      'minipanel' => 'mega_menu_for_erhverv',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#zone-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
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
            'min' => '970',
            'max' => '970',
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
    'link_title' => 'Politik og planer',
    'options' => array(
      'minipanel' => 'mega_menu_for_politik_og_planer',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'custom',
          'target_custom' => '#zone-menu',
          'type' => 'absolute',
          'corner' => array(
            'target' => 'bottomLeft',
            'tooltip' => 'topLeft',
          ),
        ),
        'show' => array(
          'delay' => '0',
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
            'min' => '970',
            'max' => '970',
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
  // Exported menu link: menu-erhverv-genveje:contact
  $menu_links['menu-erhverv-genveje:contact'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-erhverv-genveje:job-opslag/ofir
  $menu_links['menu-erhverv-genveje:job-opslag/ofir'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => 'job-opslag/ofir',
    'router_path' => 'job-opslag',
    'link_title' => 'Job',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-erhverv-genveje:node/2212
  $menu_links['menu-erhverv-genveje:node/2212'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => 'node/2212',
    'router_path' => 'node/%',
    'link_title' => 'Om Kommunen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-erhverv-genveje:nyheder
  $menu_links['menu-erhverv-genveje:nyheder'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => 'nyheder',
    'router_path' => 'nyheder',
    'link_title' => 'Nyheder',
    'options' => array(
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
  // Exported menu link: menu-erhverv-genveje:selvbetjening
  $menu_links['menu-erhverv-genveje:selvbetjening'] = array(
    'menu_name' => 'menu-erhverv-genveje',
    'link_path' => 'selvbetjening',
    'router_path' => 'selvbetjening',
    'link_title' => 'Selvbetjening',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
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
    'weight' => '0',
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
    'weight' => '0',
  );
  // Exported menu link: menu-indholdsmenu:taxonomy/term/6
  $menu_links['menu-indholdsmenu:taxonomy/term/6'] = array(
    'menu_name' => 'menu-indholdsmenu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Politik & planer',
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
    'weight' => '0',
  );
  // Exported menu link: menu-top-menu:http://www.adgangforalle.dk/
  $menu_links['menu-top-menu:http://www.adgangforalle.dk/'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'http://www.adgangforalle.dk/',
    'router_path' => '',
    'link_title' => 'Læs højt',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-top-menu:node/2942
  $menu_links['menu-top-menu:node/2942'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'node/2942',
    'router_path' => 'node/%',
    'link_title' => 'Cookies',
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
    'weight' => '0',
  );
  // Exported menu link: menu-top-menu:user/logout
  $menu_links['menu-top-menu:user/logout'] = array(
    'menu_name' => 'menu-top-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log ud',
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
    'weight' => '-50',
  );
  // Exported menu link: user-menu:admin/workbench
  $menu_links['user-menu:admin/workbench'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/workbench',
    'router_path' => 'admin/workbench',
    'link_title' => 'Workbench',
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
    'weight' => '-50',
  );
  // Exported menu link: user-menu:node/add/contentpage
  $menu_links['user-menu:node/add/contentpage'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/contentpage',
    'router_path' => 'node/add/contentpage',
    'link_title' => '+indhold',
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
    'weight' => '-47',
  );
  // Exported menu link: user-menu:node/add/esdh-dokument
  $menu_links['user-menu:node/add/esdh-dokument'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/esdh-dokument',
    'router_path' => 'node/add/esdh-dokument',
    'link_title' => 'Opret ESDH dokument',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: user-menu:node/add/esdh-sag
  $menu_links['user-menu:node/add/esdh-sag'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/esdh-sag',
    'router_path' => 'node/add/esdh-sag',
    'link_title' => 'Opret ESDH sag',
    'options' => array(
      'minipanel' => '',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: user-menu:node/add/galleri
  $menu_links['user-menu:node/add/galleri'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/galleri',
    'router_path' => 'node/add/galleri',
    'link_title' => '+galleri',
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
    'weight' => '-46',
  );
  // Exported menu link: user-menu:node/add/iframe-selvbetjeningsl-sning-mm
  $menu_links['user-menu:node/add/iframe-selvbetjeningsl-sning-mm'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/iframe-selvbetjeningsl-sning-mm',
    'router_path' => 'node/add/iframe-selvbetjeningsl-sning-mm',
    'link_title' => '+iframe/selvbetjeningsløsning m.m.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: user-menu:node/add/kontaktblok
  $menu_links['user-menu:node/add/kontaktblok'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/kontaktblok',
    'router_path' => 'node/add/kontaktblok',
    'link_title' => '+kontaktblok',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
  );
  // Exported menu link: user-menu:node/add/news
  $menu_links['user-menu:node/add/news'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/news',
    'router_path' => 'node/add/news',
    'link_title' => '+nyhed',
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
    'weight' => '-48',
  );
  // Exported menu link: user-menu:node/add/rotating-image
  $menu_links['user-menu:node/add/rotating-image'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/rotating-image',
    'router_path' => 'node/add/rotating-image',
    'link_title' => '+billedkarrusel',
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
  // Exported menu link: user-menu:node/add/spotbox
  $menu_links['user-menu:node/add/spotbox'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/spotbox',
    'router_path' => 'node/add/spotbox',
    'link_title' => '+spotboks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
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
  t('+billedkarrusel');
  t('+galleri');
  t('+iframe/selvbetjeningsløsning m.m.');
  t('+indhold');
  t('+kontaktblok');
  t('+nyhed');
  t('+spotboks');
  t('Borger');
  t('Cookies');
  t('Erhverv');
  t('Job');
  t('Kontakt');
  t('Log out');
  t('Log ud');
  t('Læs højt');
  t('Nyheder');
  t('Om Kommunen');
  t('Opret ESDH dokument');
  t('Opret ESDH sag');
  t('Politik & planer');
  t('Politik og planer');
  t('Selvbetjening');
  t('User account');
  t('Workbench');


  return $menu_links;
}
