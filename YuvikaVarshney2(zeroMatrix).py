def zeroMatrix(matrix, n, m):
    # Write your code here.
    for i in range(n):
        for j in range(m):
            if matrix[i][j]==0:
                for k in range(n):
                    if matrix[k][j]!=0:
                        matrix[k][j]="x"
                    
                for k in range(m):
                    if matrix[i][k]!=0:
                        matrix[i][k]="x"

                    

    for i in range(n):
        for j in range(m):
            if matrix[i][j]=="x":
                matrix[i][j]=0
                
    return matrix
