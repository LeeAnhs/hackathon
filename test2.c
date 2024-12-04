#include <stdio.h>

int main() {
    int arr[100][100];
    int row,col,i,j;
    int luachon;
    do{
    printf("1.Nhap kick co va gia tri phan tu cua mang\n");
    printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3.In ra cac phan tu nam tren duong bien va tinh tich\n");
    printf("4.In ra cac phan tu nam tren duong cheo chinh\n");
    printf("5.In ra cac phan tu nam tren duong treo phu\n");
    printf("6.Sap xep duong cheo chinh theo thu tu tang dan\n");
    printf("7.Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
    printf("8.Thoat\n");
    printf("Nhap lua chon cua bn:");
    scanf("%d",&luachon);
    
    if (luachon==1) {
        printf("Nhap so hang:");
        scanf("%d",&row);
        printf("Nhap so cot:");
        scanf("%d",&col);
        for(i=0;i<col;i++){
            for(j=0;j<row;j++){
                printf("Nhap vao phan tu o hang %d cot %d:",i+1,j+1);
                scanf("%d",&arr[i][j]);
            }
        }
    }else if(luachon==2){
        printf("In mang\n");
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                printf("%3d",arr[i][j]);
            }
            printf("\n");
        }
    }else if(luachon==3){
        int line=1;
        printf("Cac so tren duong bien la:\n");
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(i==0||j==0||i==row-1||j==col-1){
                    printf("%3d",arr[i][j]);
                    line=line*arr[i][j];
                }
                else{
                    printf("    ");
                }
                    
            }
            printf("\n");
        }
        printf("\nTich cac so tren duong bien la:%d\n",line);
    }else if(luachon==4){
        if(row!=col){
            printf("Khong co duong cheo chinh");
            continue;
        }
        printf("Cac phan tu nam tren duong cheo chinh la:\n");
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if(j==i){
                    printf("%3d",arr[i][j]);
                    
                }
                else{
                    printf("    ");
                }
            }
            printf("\n");
        }
    
    } else if (luachon==5){
        if(row!=col){
            printf("Khong co duong cheo phu");
            continue;
        }
        for(i=0;i<row;i++){
            printf("%d",arr[row-1-i][j]);
            
        } else{
            printf("Khong co duong cheo phu\n");
        }
    }    
    
} while (luachon != 8);
return 0;
}
