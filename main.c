//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "std_node.h"

int main(int argc, const char * argv[]) {
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
     */
        if (argc < 3) {
            printf("Usage: %s <id1> <name1> <id2> <name2> ...\n", argv[0]);
            return 1;
        }

        NodePtr head = NULL, temp = NULL, last = NULL;

        int n=(argc-1)/2;
        for(int i = 0; i < n; i++)
        {
            temp = (NodePtr)malloc(sizeof(Node));
            if (temp == NULL) break;

            temp->id = atoi(argv[(i*2)+1]);
            strcpy(temp->name, argv[(i*2)+2]); // copy string ชื่อ
            temp->next = NULL;
            if (head == NULL) {
                head = temp; // Node แรกเป็น head
            } else {
                last->next = temp; // เชื่อมต่อจากตัวก่อนหน้า
            }
            last = temp; // ขยับตัวชี้ท้ายสุดมาที่ node ปัจจุบัน
        }


        temp=head;
         while(temp){ //temp!=NULL
            printf("%d %s\n", temp->id, temp->name);
            temp = temp->next;
        }
    printf("\n");

        // for(i=0;i<n;i++) {
        //     printf("%3d", temp->value);
        //     temp=temp->next;
        // }



    /*  Exercise VI Free all node !!
         //use a loop to help
          
     */
     temp=head;
         while(temp){ //tmp!=NULL
            head = head->next;
            // printf("Freeing %d\n", temp->id);
            free(temp);
            temp = head;
        }
    
    return 0;
}
