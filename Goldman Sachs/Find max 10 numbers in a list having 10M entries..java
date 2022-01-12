package com.company;
import java.util.*;
public class findMax10 {
    public static int kthLargest(int[] arr, int l, int r, int k)
    {
        //Your code here\
        PriorityQueue<Integer> q=new PriorityQueue<Integer>();
        for(int i=0;i<arr.length;i++){
            q.add(arr[i]);
            if(q.size()>k){
                q.remove();
            }

        }
        return q.remove();


    }
