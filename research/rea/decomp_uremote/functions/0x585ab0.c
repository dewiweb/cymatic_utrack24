// rea decompile_all
// name: FUN_00585ab0
// address: 0x585ab0
// body: available
// range: 0x585ab0-0x585ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_00585ab0(undefined2 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  ushort local_10;
  ushort local_8;
  
  FUN_00583530();
  in_ECX[10] = 0x221a5;
  *(undefined2 *)(in_ECX + 0x30) = param_1;
  FUN_00501f30(param_2);
  in_ECX[0x29] = param_3;
  in_ECX[0x2a] = param_4;
  *(undefined2 *)((int)in_ECX + 0xd6) = 0;
  *(undefined1 *)(in_ECX + 0x45) = 1;
  sVar1 = (**(code **)(*in_ECX + 4))();
  local_10 = 0x400 - sVar1;
  if ((uint)(param_3 - param_4) < (uint)local_10) {
    local_8 = (ushort)(param_3 - param_4);
    local_10 = local_8;
  }
  if (local_10 != 0) {
    iVar2 = FUN_005b04d6(local_10);
    in_ECX[0x38] = iVar2;
    if (in_ECX[0x38] != 0) {
      *(ushort *)((int)in_ECX + 0xd6) = local_10;
    }
  }
  *(undefined1 *)(in_ECX + 0x45) = 1;
  return *(undefined2 *)((int)in_ECX + 0xd6);
}

