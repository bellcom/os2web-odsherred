<?php
/**
 * Available variables:
 * $name - Name as entered
 * $last_name - Last name as entered
 * $email - E-mail adress as entered
 * $files - Rendered field with file attachments
 * $node - Full node of the webform node
 */
?>
<h2>Tak for din registrering!</h2>

<p>Dine registrerede informaiton er:</p>
<?php if (count($fields)>1): ?>
<p><ul class="webform-fields">
<?php foreach ($fields as $field): ?>
<li><?=$field['label']?>: <?=$field['value']?></li>
<?php endforeach; ?> 
</ul></p>
<?php endif; ?>

<p>De ønskede filer kan downloades her:</p>
<?=$files?>
