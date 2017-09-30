# File entity domain reference

This is a Features module (with submodules) for sites using [Domain Access](https://www.drupal.org/project/domain) and [File Entity](https://www.drupal.org/project/file_entity) that provides enhanced domain filtering for file entities.

Important
---------
* This module is *not* vetted by the community for production so use at your own risk.

* Back up your database before installing any of the submodules!

* You need a patch! You first need a field type that references domains. This patch provides it; it is required or the module will fail in a big way:

  https://www.drupal.org/files/issues/domain-domain_field-1684920-22.patch

  (This [sandbox project](https://www.drupal.org/sandbox/jsacksick/2315845) should also work but I haven't tested it.)

* This module requires [Domain Views](https://www.drupal.org/project/domain_views) since it provides a filter handler.

What it does
------------
The parent module provides a base field definition; a submodule must be enabled in order to make use of it. There is one provided for each file entity bundle (currently 'image' and 'document'). Enabling a submodule will:
* Add a 'Domain reference'-type field instance to the bundle.
* Provide an update function that populates the field for all existing file entities from the bundle. It uses Batch API so should be able to handle a large volume.
* Automatically populate the field when a new entity is saved (unless it is manually set).
* On edit forms, automatically set the default value of the field to the current domain.
* Replace the default views filter handler on the field (string) to one provided by domain_views which returns domain names keyed by machine name.

What you can do
---------------
(Examples)
* Filter by domain in the *Files* listing provided by [Admin Views](https://www.drupal.org/project/admin_views).
* Add a new tab for filtering by current domain in a [Media Browser](https://www.drupal.org/project/media).
* Use the field as a filter for any other view that displays files.

---
Built by [Othermachines](https://othermachines.com/).