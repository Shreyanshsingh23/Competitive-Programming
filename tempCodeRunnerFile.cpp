    // for(int i = 0; i< n; i++){
    //     if(minn > v[i]){
    //         index = i;
    //         break;
    //     }
    // }

    swap(v[j],v[n-1]);
}

void actualSort(vl &v, int j)
{
    int n = v.size();
    int minn=v[n-1];
    int index =-1;

    for(int i = 0; i< n; i++){
        if(minn < v[i]){
            index = i;
            break;
        }
    }

     for(int i = index ;i <n; i++){
        sortLast(v,i);
    }
   
}
