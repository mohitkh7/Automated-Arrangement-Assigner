// sound (start, end , time)
void sound(int i,int j,int time)
{
	for(;i<=j;i+=200)
	{
		sound(i);
		delay(time);
		nosound();
		nosound();
	}
	// continue
}
