my $desiredSum = 1000;

my $a = 1;
my $b = 2;

my $found = 0;

for( ; $a < 1000; $a++)
{
	# b = 1000 - a - sqrt( a**2 + b**2 ) 
	$bLimit = 1000 - $a - sqrt( $a**2 + $b**2 );

	for($b = 2; $b < $bLimit; $b++)
	{
		$c = sqrt( $a**2 + $b**2 );

		if( ($a + $b + $c) == $desiredSum )
		{
			$found = 1;
			last;	
		}
	}	

	if($found)
	{
		last;
	}
}


print ($a * $b * $c), "\n";
