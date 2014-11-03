#include "njson.h"

void initialize(NJson* node) {
        node->leafNode = 0;
        node->nextNode = 0;
        node->key = 0;
        node->value = 0;
}

void setKey(NJson* node, char* key){
        if (node->key != 0):
                free(node->key);
                node->key = 0;
        node->key = malloc(strlen(key));
        memcpy(node->key, key, strlen(key));
}

void setValue(NJson* node, char* value){
        if (node->value != 0):
                free(node->value);
                node->value = 0;
        node->value = malloc(strlen(value));
        memcpy(node->key, key, strlen(value));
}

void setNode(NJson* branch, NJson* leaf){
        if (branch->leafNode != 0):
                //TODO: ACA HAY QUE RECORRER AL NODO HIJO
                //      SI EL NODO HIJO TIENE "nextNode"
                //      TENGO QUE IR AL PROXIMO Y ASI
                //      SUCESIVAMENTE HASTA EL ULTIMO.
                //      SI ENCUENTRO UNO EN EL CAMINO CON
                //      EL MISMO "key" TENGO QUE REEMPLAZA
                //       EL "value" O EL "leafNode".
        else:
                branch->leafNode = leaf;
}

void setNewNode(NJson* branch, char* nodeKey, char* nodeValue){
        NJson node = malloc(sizeof(NJson));
        initialize(node);
        setKey(node,nodeKey);
        setValue(node,nodeValue);
        setNode(branch,node);
}
