import matplotlib.pyplot as plt
import networkx as nx

# Create a directed graph
G = nx.DiGraph()

# Define transitions with both ConfirmAdd and ConfirmErase transitioning to Idle with "Press/Hold"
transitions_final = [
    ("Idle", "Config1", "Hold"),
    ("Config1", "Idle", "Hold"),
    ("Config1", "Config2", "Press"),
    ("Config2", "Config3", "Press"),
    ("Config2", "Idle", "Hold"),
    ("Config3", "Idle", "Hold"),
    ("Config3", "Config1", "Press"),
    ("Idle", "AddUser", "Press"),
    ("AddUser", "Idle", "Hold"),
    ("AddUser", "ConfirmAdd", "Press"),
    ("ConfirmAdd", "Idle", "Press/Hold"),  # Both Press/Hold to Idle
    ("Config1", "EraseUser", "Press"),
    ("EraseUser", "ConfirmErase", "Press"),
    ("ConfirmErase", "Idle", "Press/Hold")  # Both Press/Hold to Idle
]

# Add nodes and edges based on transitions
for start, end, action in transitions_final:
    G.add_edge(start, end, label=action)

# Define positions for a clear top-down layout
pos = {
    "Idle": (0.5, 1.0),
    "Config1": (0.5, 0.85),
    "Config2": (0.35, 0.7),
    "Config3": (0.35, 0.55),
    "AddUser": (0.65, 0.7),
    "ConfirmAdd": (0.65, 0.55),
    "EraseUser": (0.5, 0.65),
    "ConfirmErase": (0.5, 0.4)
}

# Plot with clearer arrows and labels
plt.figure(figsize=(12, 10))
nx.draw_networkx_nodes(G, pos, node_size=3000, node_color='lightblue', edgecolors='black')
nx.draw_networkx_edges(
    G, pos, arrowstyle="->", arrowsize=30, edge_color='black',
    connectionstyle="arc3,rad=0.2"
)
nx.draw_networkx_labels(G, pos, font_size=10, font_family="sans-serif", font_weight='bold')

# Edge labels for transitions
edge_labels_final = {(start, end): action for start, end, action in transitions_final}
nx.draw_networkx_edge_labels(
    G, pos, edge_labels=edge_labels_final, font_size=9,
    font_family="sans-serif", bbox=dict(facecolor='white', edgecolor='none')
)

# Display the finalized plot
plt.title("State Machine Diagram")
plt.axis('off')
plt.show()
