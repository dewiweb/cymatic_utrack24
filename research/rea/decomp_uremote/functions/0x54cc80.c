// rea decompile_all
// name: FUN_0054cc80
// address: 0x54cc80
// body: available
// range: 0x54cc80-0x54ccea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054cc80(ushort param_1,ushort param_2,void *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined2 local_8;
  
  uVar1 = (uint)param_1 + (uint)param_2;
  if (uVar1 < 0x401) {
    _memcpy((void *)(in_ECX + -0x428 + (uint)param_1),param_3,(uint)param_2);
    if (*(ushort *)(in_ECX + -0x42a) < uVar1) {
      local_8 = (undefined2)uVar1;
      *(undefined2 *)(in_ECX + -0x42a) = local_8;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xb;
  }
  return uVar2;
}

