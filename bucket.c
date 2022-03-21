
#include<stdio.h>
void main()
{
int incoming,outgoing,buff_size,n,store=0;
printf("\n Number of packets");
scanf("%d",&n);
printf("\n Outgoing");
scanf("%d",&outgoing);
printf("\n Buff_size");
scanf("%d",&buff_size);
while(n!=0)
{
printf("\n Incoming packet");
scanf("%d",&incoming);
if(incoming<=(buff_size-store))
{
store+=incoming;
}
else
{
printf("\n %dPacket is dropped",incoming-(buff_size-store));
printf("Buffer size %d out of %d \n",store,buff_size);
store=buff_size;
}
store=store-outgoing;
printf("After outgoing %d packet left in buffer %d",store,buff_size);
n--;
}
}
