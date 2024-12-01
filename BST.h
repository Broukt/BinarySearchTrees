#pragma once
#include "Node.h"

/// <summary>
/// Entidad que representa un arbol binario de busqueda.
/// </summary>
class BST
{
private:

	/// <summary>
	/// Nodo raíz del arbol
	/// </summary>
	Node* root;

	/// <summary>
	/// Inserta un nodo en el árbol
	/// </summary>
	Node* insert(Node*, int);
	/// <summary>
	/// Busca un nodo en el árbol
	/// </summary>
	Node* search(Node*, int);
	/// <summary>
	/// Elimina un nodo del árbol
	/// </summary>
	Node* remove(Node*, int);
	/// <summary>
	/// Obtiene el nodo más a la izquierda del sub-árbol
	/// </summary>
	/// <param name="root">Nodo raíz del sub-árbol</param>
	/// <returns>Referencia al nodo más a la izquierda</returns>
	Node* get_most_left(Node*);

public:

	/// <summary>
	/// Constructor de la clase
	/// </summary>
	BST();
	/// <summary>
	/// Destructor de la clase
	/// </summary>
	~BST();

	/// <summary>
	/// Inserta un nodo en el árbol
	/// </summary>
	/// <param name="data">Valor del nodo a insertar</param>
	void insert(int);
	/// <summary>
	/// Busca un nodo en el árbol
	/// </summary>
	/// <param name="data">Valor del nodo a buscar</param>
	void remove(int);
	/// <summary>
	/// Elimina un nodo del árbol
	/// </summary>
	/// <param name="data">Valor del nodo a eliminar</param>
	/// <returns>Referencia al nodo encontrado</returns>
	Node* search(int);
	/// <summary>
	/// Obtiene la raíz del árbol
	/// </summary>
	/// <returns>Referencia a la raíz del árbol</returns>
	Node* get_root();
	/// <summary>
	/// Imprime el árbol
	/// </summary>
	void print();
	/// <summary>
	/// Limpia el árbol
	/// </summary>
	void clear();
};