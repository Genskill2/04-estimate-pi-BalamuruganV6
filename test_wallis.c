float wallis_pi(int x)
{
    float a = 1.0;
    for(int i=1;i<=x;i++)
        a = a*4*i*i/((4*i*i)-1);
    return 2*a;
}
