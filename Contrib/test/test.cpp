#include <windows.h>
#include <winnt.h>
#include "JSON.h"
#include <stdio.h>
#include <iostream>
#include <tchar.h>


int main() {
    char jsonContent[] = "{\"name\": \"John\",\r\n /* just a \r\n test */ \r\n \"age\": 30, \"isStudent\": false}";
    struct JSON_NODE* rootNode = Parse((PBYTE)jsonContent, JSF_NONE);

    if (rootNode) {
        //struct JSON_NODE* ageNode = JSON_Get(rootNode, PTCHAR(TEXT("age")), FALSE);
        //if (ageNode && ageNode->eType == JNT_VALUE) {
        //    printf( "Current age: %s\n" , ageNode->pszValue);

        //    ageNode->pszValue = PTCHAR(TEXT("31"));  //内存直接分配在后边执行JSON_Delete的时候会报错
        //    printf("Modified age: %s\n", ageNode->pszValue);
        //}

        PTCHAR serializedJson = JSON_SerializeAlloc(rootNode, TRUE, FALSE);
        if (serializedJson) {
            std::wcout << serializedJson << std::endl;
            GlobalFree(serializedJson); 
        }
        JSON_Delete(&rootNode, NULL);
    }
    else {
        printf("Failed to parse JSON\n");
    }

    return 0;
}
