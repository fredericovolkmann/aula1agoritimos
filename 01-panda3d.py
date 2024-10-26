# https://plotly.com/python/3d-surface-plots/

import plotly.graph_objects as go

import pandas as pd

# Read data from a csv
# z_data = pd.read_csv('https://raw.githubusercontent.com/plotly/datasets/master/api_docs/mt_bruno_elevation.csv')
z_data = pd.read_csv('dados3d.csv')

fig = go.Figure(data=[go.Surface(z=z_data.values)])



fig.show()