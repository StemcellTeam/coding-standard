<?php

namespace Ecg\Tests\PHP;

goto a; goto b;
echo 'Foo';

a:
echo 'Bar';
b:
echo 'Yeah';

for ($i = 0, $j = 50; $i < 100; $i++) {
    while ($j--) {
        if ($j == 17) goto end;
    }
}
echo "i = $i";
end:
echo 'j hit 17';