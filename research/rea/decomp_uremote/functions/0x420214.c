// rea decompile_all
// name: FUN_00420214
// address: 0x420214
// body: available
// range: 0x420214-0x420296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00420214(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x4f532f32,param_2,0);
  if (iVar1 == 0) {
    puVar2 = (ushort *)(param_1 + 0x170);
    iVar1 = FUN_00411560(param_2,puVar2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      *(undefined2 *)(param_1 + 0x1c8) = 0;
      *(undefined2 *)(param_1 + 0x1ca) = 0;
      *(undefined2 *)(param_1 + 0x1cc) = 0;
      *(undefined2 *)(param_1 + 0x1ce) = 0;
      *(undefined2 *)(param_1 + 0x1d0) = 0;
      if (*puVar2 != 0) {
        iVar1 = FUN_00411560(param_2,puVar2);
        if ((iVar1 == 0) && (1 < *puVar2)) {
          FUN_00411560(param_2,puVar2);
        }
      }
    }
  }
  return;
}

