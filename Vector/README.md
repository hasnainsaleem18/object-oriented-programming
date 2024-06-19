# Shopping Cart Program

## Description

Create a program that simulates a shopping cart where users can add items, remove items, view the cart contents, and exchange items.

### Item Class

- **Item Class**:
  - Attributes: `itemName` (string), `price` (double).
  - Constructor to initialize `itemName` and `price`.

### Menu-Driven Program

Implement a menu-driven program with the following options:

1. **Add items**:
   - Display a list of pre-defined items (hard-coded in the program).
   - Allow the user to select items to add to the cart.

2. **Remove items**:
   - Display the current contents of the cart.
   - Prompt the user to select an item from the cart to remove.

3. **Clear cart**:
   - Remove all items from the cart.
   - Display a confirmation message.

4. **Exchange product (update cart)**:
   - Prompt the user to select an item from the cart to exchange.
   - Display the list of available items (similar to adding items).
   - Allow the user to select a new item to replace the exchanged item in the cart.

### Execution Flow

- Display the menu options.
- Based on the user's choice, perform the corresponding operation (add, remove, clear, exchange).
- Ensure to check if the cart is empty before performing certain operations (e.g., remove, exchange).

### Additional Notes

- Implement error handling for invalid user input (e.g., selecting non-existent products).
- Provide appropriate feedback messages after each operation (e.g., item added, item removed, cart cleared).
- Use appropriate loops and conditionals to manage the flow of the program based on user interactions.

---

