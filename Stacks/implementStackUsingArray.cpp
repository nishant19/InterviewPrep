void Stack :: push(int x)
{
    if(top<999){
        top++;
        arr[top] = x;
        return;
    }
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
    if(top==-1){
        return -1;
    } 
    else{
        int t = arr[top];
        top--;
        return t;
        
    }
}
