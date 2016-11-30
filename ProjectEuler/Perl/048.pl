my $digitPrecision = 10;
my $minVal = 1;
my $maxVal = 1000;

my $totalSum = 0;

for $currentPower ($minVal .. $maxVal)
{
	my $selfPower = 1;
	for $index (1 .. $currentPower)
	{
		$selfPower *= $currentPower;
		$selfPower = $selfPower % (10 ** $digitPrecision);
	}

	$totalSum += $selfPower;
	$totalSum = $totalSum % (10 ** $digitPrecision);
} 

print $totalSum, "\n";
