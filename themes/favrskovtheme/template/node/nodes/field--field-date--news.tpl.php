<div class="manual-date">
  <?php if (!$label_hidden): ?>
    <span>
      <?php print $label ?>:
    </span>
  <?php endif; ?>
  <span>
    <?php print render($items); ?>
  </span>
</div>
