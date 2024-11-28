#pragma once

/// <summary>
/// Entidad que representa un nodo de un arbol binario.
/// </summary>
class Node
{
private:

	/// <summary>
	/// Valor del nodo
	/// </summary>
	int data;
	/// <summary>
	/// Referencia al nodo izquierdo
	/// </summary>
	Node* left;
	/// <summary>
	/// Referencia al nodo derecho
	/// </summary>
	Node* right;

public:

	/// <summary>
	/// Constructor por defecto.
	/// </summary>
	Node();
	/// <summary>
	/// Constructor con parametros.
	/// </summary>
	/// <param name="data">Valor del nodo</param>
	Node(int);
	/// <summary>
	/// Constructor de copia
	/// </summary>
	/// <param name="other">Nodo a copiar</param>
	Node(Node&);
	/// <summary>
	/// Destructor de la clase
	/// </summary>
	~Node() = default;

	/// <summary>
	/// Obtiene el valor del nodo
	/// </summary>
	/// <returns>Valor del nodo</returns>
	int get_data();
	/// <summary>
	/// Obtiene el nodo izquierdo
	/// </summary>
	/// <returns>Referencia al nodo izquierdo</returns>
	Node* get_left();
	/// <summary>
	/// Obtiene el nodo derecho
	/// </summary>
	/// <returns>Referencia al nodo derecho</returns>
	Node* get_right();

	/// <summary>
	/// Establece el valor del nodo
	/// </summary>
	/// <param name="data">Valor del nodo</param>
	void set_data(int);
	/// <summary>
	/// Establece el nodo izquierdo
	/// </summary>
	/// <param name="left">Referencia al nodo izquierdo</param>
	void set_left(Node*);
	/// <summary>
	/// Establece el nodo derecho
	/// </summary>
	/// <param name="right">Referencia al nodo derecho</param>
	void set_right(Node*);
};