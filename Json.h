#ifndef JSON_H_INCLUDED
#define JSON_H_INCLUDED

typedef struct Json
{
        NJson* nodes;       // Node Array
};

/**
 * Set a node (key - value pair.)
 * If exist a node with this key, node value is overwrited,
 * else node is created.
 *
 * @param json: Json struct pointer
 * @param nodeKey: Array
 * @param nodeValue: Array
 *
 * @precondition Json struct should be initialized
 */
void setNode(Json* json, char* nodeKey, char* nodeValue );


#endif // JSON_H_INCLUDED
