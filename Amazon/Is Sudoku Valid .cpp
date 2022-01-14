int isValid(vector<vector<int>> mat){
        // code here
      unordered_set<string> st;
      for(int i=0;i<9;i++)
      {
          for(int j=0;j<9;j++)
          {
              if(mat[i][j]!=0)
              {
                  if(st.find("row"+to_string(i)+to_string(mat[i][j]))!=st.end()){
                      return 0;
                  }
                  if(st.find("col"+to_string(j)+to_string(mat[i][j]))!=st.end()){
                     return 0;
                  }
                  if(st.find("box"+to_string((i/3)*3+j/3) +to_string(mat[i][j]))!=st.end()){
                      return 0;
                  }
                  if(st.find("row"+to_string(i)+to_string(mat[i][j]))==st.end()){
                      st.insert("row"+to_string(i)+to_string(mat[i][j]));
                  }
                  if(st.find("col"+to_string(j)+to_string(mat[i][j]))==st.end()){
                      st.insert("col"+to_string(j)+to_string(mat[i][j]));
                  }
                  if(st.find("box"+to_string((i/3)*3+j/3) +to_string(mat[i][j]))==st.end()){
                      st.insert("box"+to_string((i/3)*3+j/3) +to_string(mat[i][j]));
                  }
              }
          }
          
      }
      return 1;
      
    }
};
