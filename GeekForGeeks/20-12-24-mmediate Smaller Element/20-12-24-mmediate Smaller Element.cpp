for(int i = 0; i < arr.size(); i++) {
            if(arr[i + 1] < arr[i]) {
                arr[i] = arr[i + 1];
            }
            else{
                arr[i] = -1;
            }
        }
        arr[arr.size() - 1] = -1;
        return arr;
