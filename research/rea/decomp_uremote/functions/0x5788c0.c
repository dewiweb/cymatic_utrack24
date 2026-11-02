// rea decompile_all
// name: FUN_005788c0
// address: 0x5788c0
// body: available
// range: 0x5788c0-0x5789a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005788c0(int *param_1,undefined2 param_2)

{
  short *psVar1;
  uint uVar2;
  int in_ECX;
  undefined4 *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  ushort local_8;
  
  psVar1 = (short *)(**(code **)(*param_1 + 4))(local_14);
  if ((*psVar1 != 4) || (uVar2 = (**(code **)(*param_1 + 0x10))(), (uVar2 & 0x400) == 0)) {
    local_8 = 0;
    while( true ) {
      local_1c = (undefined4 *)0x0;
      if (local_8 < *(ushort *)(in_ECX + 100)) {
        local_1c = *(undefined4 **)(*(int *)(in_ECX + 0x60) + (uint)local_8 * 4);
      }
      local_c = local_1c;
      local_8 = local_8 + 1;
      if (local_1c == (undefined4 *)0x0) break;
      FUN_00515830();
      (**(code **)*local_c)(param_1,param_2);
      FUN_00515860();
    }
  }
  return;
}

