<?php

namespace Rector\Tests\Naming\Rector\MethodCall\RenameMethodCallRector\Fixture;

class SomeClass
{
    public function run()
    {
        $this->something();
    }
}

?>
-----
<?php

namespace Rector\Tests\Naming\Rector\MethodCall\RenameMethodCallRector\Fixture;

class SomeClass
{
    public function run()
    {
        $this->somethingElse();
    }
}

?>
