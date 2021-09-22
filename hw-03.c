int multi35(){
    int total = 0;
    int i;
    for (i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0){
            total += i;
        }
    }
    return total;
}