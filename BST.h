#pragma once
#include "Node.h"

/// <summary>
/// Entidad que representa un arbol binario de busqueda.
/// </summary>
class BST
{
private:

	/// <summary>
	/// Nodo ra�z del arbol
	/// </summary>
	Node* root;

	/// <summary>
	/// Inserta un nodo en el �rbol
	/// </summary>
	Node* insert(Node*, int);
	/// <summary>
	/// Busca un nodo en el �rbol
	/// </summary>
	Node* search(Node*, int);
	/// <summary>
	/// Elimina un nodo del �rbol
	/// </summary>
	Node* remove(Node*, int);
	/// <summary>
	/// Obtiene el nodo m�s a la izquierda del sub-�rbol
	/// </summary>
	/// <param name="root">Nodo ra�z del sub-�rbol</param>
	/// <returns>Referencia al nodo m�s a la izquierda</returns>
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
	/// Inserta un nodo en el �rbol
	/// </summary>
	/// <param name="data">Valor del nodo a insertar</param>
	void insert(int);
	/// <summary>
	/// Busca un nodo en el �rbol
	/// </summary>
	/// <param name="data">Valor del nodo a buscar</param>
	void remove(int);
	/// <summary>
	/// Elimina un nodo del �rbol
	/// </summary>
	/// <param name="data">Valor del nodo a eliminar</param>
	/// <returns>Referencia al nodo encontrado</returns>
	Node* search(int);
	/// <summary>
	/// Obtiene la ra�z del �rbol
	/// </summary>
	/// <returns>Referencia a la ra�z del �rbol</returns>
	Node* get_root();
	/// <summary>
	/// Imprime el �rbol
	/// </summary>
	void print();
	/// <summary>
	/// Limpia el �rbol
	/// </summary>
	void clear();
};