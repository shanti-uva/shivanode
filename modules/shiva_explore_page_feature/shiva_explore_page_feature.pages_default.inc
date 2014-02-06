<?php
/**
 * @file
 * shiva_explore_page_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function shiva_explore_page_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'shiva_explore_page';
  $page->task = 'page';
  $page->admin_title = 'Shiva Explore Page';
  $page->admin_description = '';
  $page->path = 'explore';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Explore',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_shiva_explore_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'shiva_explore_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Explore the SHIVA Visualization Types!';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Shiva Explore Custom Content',
      'title' => 'Explore the SHIVA Visualization Types!',
      'body' => '<p>Listed below are the various types of visualizations one can make in SHIVA. Put your cursor over the image of the visualization type you are interested in and a list of choices will appear.</p>
<h3>Charts</h3>
<table border="0" cellpadding="4">
<tbody>
<tr>
<td>
<p><strong>Annotated Timeline</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-antime.png" alt="Annotated Timeline Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/aAHLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A1">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Annotated%20Time%20Line">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Area Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-area.png" alt="Area Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/tgHLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A2">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Area%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Bar Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-bar.png" alt="Bar Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/HQLLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A3">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Bar%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Candlestick Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-candle.png" alt="Candle Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/MgLLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A4">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Candlestick%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Column Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-column.png" alt="Column Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/HQLLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A5">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Column%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Gauge Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-gauge.png" alt="Guage Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/EADLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A6">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Gauge">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Geo Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-geo.png" alt="Geo Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/XALLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A7">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Area%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
</tr>
<tr>
<td>
<p><strong>Line Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-line.png" alt="Line Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/tgHLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A8">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Line%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Motion Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-motion.png" alt="Motion Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/fgLLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A9">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Motion%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Organization Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-org.png" alt="Org Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/dQDAAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A10">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Org%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Pie Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-pie.png" alt="Pie Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/ZQHLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A11">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Pie%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Scatter Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-scatter.png" alt="Scatter Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/ZgDGAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A12">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Scatter%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Table Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-table.png" alt="Table Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/tgLLAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A13">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Table%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Tree Chart</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-chart-tree.png" alt="Tree Chart Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/g6C1AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_subtype%3A14">Examples</a></li>
<li><a href="/node/add/shivanode/chart/Tree%20Chart">Create one</a></li>
</ul>
</li>
</ul>
</td>
</tr>
</tbody>
</table>
<h2>Relationships</h2>
<table border="0" cellpadding="4">
<tbody>
<tr>
<td width="150">
<p><strong>Poster</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/shivanode/sngen-poster.png" alt="Poster Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><!--<a href="https://wiki.shanti.virginia.edu/x/g6C1AQ" _mce_href="https://wiki.shanti.virginia.edu/x/g6C1AQ" target="_blank">Documentation</a>-->Documentation</li>
<li><a href="/examples?f[0]=shivanode_element_type%3A14">Examples</a></li>
<li><a href="/node/add/shivanode/poster">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td width="150">
<p><strong>Networks</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-network.png" alt="Network Thumbnail" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/o5S1AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A10">Examples</a></li>
<li><a href="/node/add/shivanode/network">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td width="150">
<p><strong>Subway</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/shivanode/sngen-subway.png" alt="Subway Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/Wp21AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A4">Examples</a></li>
<li><a href="/node/add/shivanode/subway">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td width="150">
<p><strong>Timelines</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-timeline.png" alt="Timeline Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/sprRAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A13">Examples</a></li>
<li><a href="/node/add/shivanode/timeline">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Word Cloud</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/shivanode/sngen-wcloud.png" alt="Word Cloud Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><!--<a href="https://wiki.shanti.virginia.edu/x/sprRAQ" _mce_href="https://wiki.shanti.virginia.edu/x/sprRAQ" target="_blank">Documentation</a>-->Documentation</li>
<li><a href="/examples?f[0]=shivanode_element_type%3A15">Examples</a></li>
<li><a href="/node/add/shivanode/wcloud">Create one</a></li>
</ul>
</li>
</ul>
</td>
</tr>
</tbody>
</table>
<h2>Media</h2>
<table border="0" cellpadding="4">
<tbody>
<tr>
<td width="150">
<p><strong>Video</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-video.png" alt="Video Thumbnail" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/upy1AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A6">Examples</a></li>
<li><a href="/node/add/shivanode/video">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td width="150">
<p><strong>Images</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-image.png" alt="Image Visualization" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/VZ21AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A2">Examples</a></li>
<li><a href="/node/add/shivanode/image">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Drawing</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-draw.png" alt="Draw Thumbnail" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/DaC1AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A11">Examples</a></li>
<li><a href="/node/add/shivanode/draw">Create one</a></li>
</ul>
</li>
</ul>
</td>
</tr>
</tbody>
</table>
<h2>Maps</h2>
<table border="0" cellpadding="4" width="250" height="116">
<tbody>
<tr>
<td width="150">
<p><strong>Maps</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-map.png" alt="Map Visualization Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/cZy1AQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A3">Examples</a></li>
<li><a href="/node/add/shivanode/map">Create one</a></li>
</ul>
</li>
</ul>
</td>
<td>
<p><strong>Earth</strong></p>
<ul class="sf-menu explore">
<li><img src="/sites/default/files/styles/shiva_teaser/public/shivanode/sngen-earth.png" alt="Earth Visualization Thumb" width="150" height="150" class="imgp_img"> 
<ul>
<li><a href="https://wiki.shanti.virginia.edu/x/J5XRAQ" target="_blank">Documentation</a></li>
<li><a href="/examples?f[0]=shivanode_element_type%3A12">Examples</a></li>
<li><a href="/node/add/shivanode/map">Create one</a></li>
</ul>
</li>
</ul>
</td>
</tr>
</tbody>
</table>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['shiva_explore_page'] = $page;

  return $pages;

}