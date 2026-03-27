# 2026-03-16T15:13:05.226772
import vitis

client = vitis.create_client()
client.set_workspace(path="/scratch/tsussman")

comp = client.get_component(name="matrix_add")
comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION_DEBUG")

comp.run(operation="C_SIMULATION")

comp.run(operation="SYNTHESIS")

comp.run(operation="SYNTHESIS")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION_DEBUG")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION_DEBUG")

client.delete_component(name="matrix_add")

comp = client.create_hls_component(name = "matrix_add",cfg_file = ["matrix_add_config.cfg"],template = "empty_hls_component")

comp.run(operation="C_SIMULATION")

comp = client.create_hls_component(name = "matrix_mult",cfg_file = ["matrix_mult_config.cfg"],template = "empty_hls_component")

comp = client.get_component(name="matrix_mult")
comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

comp.run(operation="C_SIMULATION")

vitis.dispose()

