# 2026-03-16T15:03:29.768831
import vitis

client = vitis.create_client()
client.set_workspace(path="/scratch/tsussman")

comp = client.create_hls_component(name = "matrix_add",cfg_file = ["hls_config.cfg"],template = "empty_hls_component")

vitis.dispose()

