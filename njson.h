#ifndef NJSON_H_INCLUDED
#define NJSON_H_INCLUDED


/**
* Generic Node
*       leafNode used only for header nodes.
*       nextNode used leaf nodes.
*       key, value used by common leaves.
*
*/
typedef struct NJson {
        NJson* leafNode, nextNode;
        char* key, value;
} NJson;

/**
* @post NJson heap allocated and initialized
*/
void initialize(NJson*);

/**
* @pre NJson heap allocated and initialized
*/
void setKey(NJson*, char*);

/**
* @pre NJson heap allocated and initialized
*/
void setValue(NJson*, char*);

/**
* @pre NJson heap allocated and initialized
*/
void setNode(NJson*, NJson*);

/**
 * Set a key - value pair
 * If exist a node with this key, node value is overwrited,
 * else node is created.
 *
 * @param njson: NJson struct pointer
 * @param nodeKey: Array
 * @param nodeValue: Array
 *
 * @pre NJson heap allocated and initialized
 */
void setNewNode(NJson*, char*, char*);


#endif // NJSON_H_INCLUDED
