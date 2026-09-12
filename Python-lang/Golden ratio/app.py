import streamlit as st
import matplotlib.pyplot as plt
import matplotlib.patches as patches
import numpy as np

st.set_page_config(page_title="Golden Ratio Magic", page_icon="✨")

def draw_golden_spiral(iterations):
    fig, ax = plt.subplots(figsize=(8, 8))
    
    # Fibonacci numbers
    a, b = 0, 1
    fibs = []
    for _ in range(iterations):
        fibs.append(b)
        a, b = b, a + b
        
    # Initial parameters for squares
    x, y = 0, 0
    direction = 0 # 0: right, 1: up, 2: left, 3: down
    
    for i, f in enumerate(fibs):
        # Draw square
        rect = patches.Rectangle((x, y), f, f, angle=0.0, linewidth=1, edgecolor='gold', facecolor='none', alpha=0.7)
        ax.add_patch(rect)
        
        # Draw arc within square
        # Arc centers and angles depend on the direction
        if direction == 0:
            cx, cy, start_angle = x + f, y + f, 90
            x, y = x + f, y
        elif direction == 1:
            cx, cy, start_angle = x, y + f, 180
            x, y = x - fibs[i-1] if i > 0 else x, y + f
        elif direction == 2:
            cx, cy, start_angle = x, y, 270
            x, y = x - (fibs[i+1] if i < len(fibs)-1 else f), y - f
        elif direction == 3:
            cx, cy, start_angle = x + f, y, 0
            x, y = x, y - (fibs[i+1] if i < len(fibs)-1 else f)
            
        # Draw the arc
        arc = patches.Arc((cx, cy), 2*f, 2*f, angle=start_angle, theta1=0, theta2=90, color="cyan", linewidth=2)
        ax.add_patch(arc)
        
        direction = (direction + 1) % 4

    plt.axis('equal')
    plt.axis('off')
    return fig

st.title("✨ The Golden Spiral Generator")

# User Input for Height
height = st.number_input("Enter your height (to scale the spiral):", min_value=1.0, value=170.0)
st.write(f"Visualizing the proportions of a {height} unit tall structure:")

# Sidebar for spiral complexity
complexity = st.sidebar.slider("Spiral Complexity (Fibonacci Terms)", 3, 12, 7)

# Display Spiral
fig = draw_golden_spiral(complexity)
st.pyplot(fig)

st.info("""
**The Connection:** Each square in this spiral has a side length equal to a Fibonacci number. 
In your body, the length of your finger bones or the curve of your ear often follows this exact geometry!
""")