#include <stdio.h>

//agac dugumlerini temsil eden struct
typedef struct treeNode {
    int data;
    struct treeNode* left;
    struct treeNode* right;
}treeNode;

//karsilastirma fonksiyonu
int compareTrees(treeNode* root1, treeNode* root2){

    //ikisi de bos degil ise
    if (root1 != NULL && root2 != NULL )
    {
        //ikisinin de verisi ayni ise
        if (root1->data == root2->data)
        {
            //1 dondur ve her iki dugumun iki cocugunu karsilastir
            return 1&&compareTrees(root1->left,root2->left)&&compareTrees(root1->right,root2->right);
        }
        //ikisinin verisi ayni degil ise esit degildir
        else return 0;
        
    }
    //ikisi de bos ise
    else if (root1 == NULL && root2 == NULL)
    {
        //aynidir
        return 1;
    }
    //biri bos biri dolu ise
    else return 0;
    
}
int main(){
    //======== Agac A Agac B ile ayni yapida

    treeNode node1A;
    node1A.data = 1;
    //cocuklari node2A ve node3A dir

    treeNode node2A;
    node2A.data = 2;
    node2A.left = NULL;
    node2A.right = NULL;
    //cocuklari yoktur

    treeNode node3A;
    node3A.data = 3;
    //cocuklari node4A ve node5A dir

    treeNode node4A;
    node4A.data = 4;
    node4A.left = NULL;
    node4A.right = NULL;
    //cocuklari yoktur

    treeNode node5A;
    node5A.data = 5;
    node5A.left = NULL;
    node5A.right = NULL;
    //cocouklari yoktur

    //1. agac yapilandirmasi 
    node1A.left = &node2A;      
    node1A.right = &node3A;
    node3A.right = &node4A;
    node3A.left = &node5A;
    //==========================


    //======== Agac B Agac A ile ayni yapida
    treeNode node1B;
    node1B.data = 1;
    //cocuklari node2B ve node3B dir

    treeNode node2B;
    node2B.data = 2;
    node2B.left = NULL;
    node2B.right = NULL;
    //cocuklari yoktur

    treeNode node3B;
    node3B.data = 3;
    //cocuklari node4B ve node5B dir

    treeNode node4B;
    node4B.data = 4;
    node4B.left = NULL;
    node4B.right = NULL;
    //cocuklari yoktur

    treeNode node5B;
    node5B.data = 5;
    node5B.left = NULL;
    node5B.right = NULL;
    //cocouklari yoktur

    //2. agac yapilandirmasi 
    node1B.left = &node2B;      
    node1B.right = &node3B;
    node3B.right = &node4B;
    node3B.left = &node5B;
    //======================

    //Agac C Agac A dan farkli
    treeNode node1C;
    node1C.data = 1;
    node1C.left = NULL;
    //cocugu node2C

    treeNode node2C;
    node2C.left = NULL;
    node2C.right = NULL;
    //cocugu yok

    node1C.right = &node2C;
    //yapilandirma

    int resultSame = compareTrees(&node1A,&node1B);
    int resultDiff = compareTrees(&node1A,&node1C);

    printf("ayni iki agac karsilastirma sonucu %d\n",resultSame);
    printf("farkli iki agac karsilastirma sonucu %d\n",resultDiff);

    return 0;




}