# 2026-03-17T11:02:15.943164
import vitis

client = vitis.create_client()
client.set_workspace(path="/scratch/tsussman")

comp = client.get_component(name="matrix_add")
comp.run(operation="SYNTHESIS")

comp = client.get_component(name="matrix_mult")
comp.run(operation="SYNTHESIS")

