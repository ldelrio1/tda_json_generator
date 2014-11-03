#ifndef JSON_H_INCLUDED
#define JSON_H_INCLUDED


/**
* Generic Node
*       leafNode used only for header nodes.
*       nextNode used leaf nodes.
*       key, value used by common leaves.
*/
typedef struct NJson
{
        NJson* leafNode, nextNode;
        char* key, value;
};

/**
 * Set a node (key - value pair.)
 * If exist a node with this key, node value is overwrited,
 * else node is created.
 *
 * @param njson: NJson struct pointer
 * @param nodeKey: Array
 * @param nodeValue: Array
 *
 * @precondition NJson struct should be initialized
 */
void setNode(NJson* njson, char* nodeKey, char* nodeValue);


#endif // JSON_H_INCLUDED
