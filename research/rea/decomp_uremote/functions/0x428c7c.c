// rea decompile_all
// name: FUN_00428c7c
// address: 0x428c7c
// body: available
// range: 0x428c7c-0x428d80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00428c7c(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar1 = *param_1;
  if ((char)param_1[0x49] == '\0') {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0x1c);
  }
  else {
    iVar3 = param_1[0x4a];
  }
  if (iVar3 == 0) {
    local_8 = 0x99;
  }
  else {
    FUN_0042948b(iVar1);
    *(undefined1 *)(iVar3 + 0x231) = param_2;
    *(undefined4 *)(iVar3 + 0x1ac) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x1dc) = 0x40;
    *(undefined4 *)(iVar3 + 0x1e0) = 0;
    *(undefined4 *)(iVar3 + 0x1e4) = 0;
    *(undefined1 *)(iVar3 + 0x1e8) = 0;
    *(undefined4 *)(iVar3 + 0x234) = 0x10000;
    *(undefined4 *)(iVar3 + 0xdc) = 0;
    *(undefined4 *)(iVar3 + 0xe0) = 0;
    *(undefined2 *)(iVar3 + 0xd8) = 0;
    *(undefined2 *)(iVar3 + 0xda) = 0;
    *(undefined2 *)(iVar3 + 0xfc) = 0;
    *(undefined4 *)(iVar3 + 0x104) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x10000;
    FUN_0042934d(*(undefined4 *)(iVar1 + 0x28c));
    FUN_00429362();
    FUN_00429362();
    if (*(int *)(iVar1 + 0x28c) == 0) {
      local_8 = 0;
    }
    else {
      iVar2 = FUN_00429323();
      if (iVar2 != 0) {
        return iVar2;
      }
      local_8 = (**(code **)(iVar1 + 0x2b0))(iVar3);
    }
    if (local_8 == 0) {
      FUN_00429653();
    }
  }
  return local_8;
}

