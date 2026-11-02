// rea decompile_all
// name: FUN_005969e0
// address: 0x5969e0
// body: available
// range: 0x5969e0-0x596bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005969e0(int param_1,int param_2,int param_3,int *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int in_ECX;
  bool local_5;
  
  local_5 = true;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_5 = false;
  }
  else {
    *(int *)(in_ECX + 0xc44) = param_1;
    *(int *)(in_ECX + 0xc4c) = param_2;
    *(int *)(in_ECX + 0x100) = param_3;
    *(undefined1 *)(in_ECX + 0xc5d) = 1;
    *(undefined1 *)(in_ECX + 0xc5f) = 0;
    *(undefined1 *)(in_ECX + 0xc6c) = 0;
    *(int *)(in_ECX + 0xc3c) = in_ECX + 0x10c;
    *(uint *)(in_ECX + 0xc3c) = *(int *)(in_ECX + 0xc3c) + 3U & 0xfffffffc;
    *(int *)(in_ECX + 0xc40) = in_ECX + 0x6a4;
    *(uint *)(in_ECX + 0xc40) = *(int *)(in_ECX + 0xc40) + 3U & 0xfffffffc;
    *(undefined4 *)(in_ECX + 0xc) = 0;
    *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0xc3c);
    if ((*(ushort *)(*(int *)(in_ECX + 0xc44) + 0x34) & 1) == 0) {
      *(undefined1 *)(in_ECX + 0xc5e) = 0;
      uVar1 = (**(code **)(param_1 + 0x20))(param_2);
      if (uVar1 == 0) {
        uVar2 = FUN_005b04d6(0x200);
        *(undefined4 *)(in_ECX + 0xc50) = uVar2;
        if (*(int *)(in_ECX + 0xc50) == 0) {
          local_5 = false;
        }
        else {
          *(undefined4 *)(in_ECX + 0xc54) = 0x200;
        }
      }
      else {
        uVar2 = FUN_005b04d6(uVar1);
        *(undefined4 *)(in_ECX + 0xc50) = uVar2;
        local_5 = *(int *)(in_ECX + 0xc50) != 0;
        if (local_5) {
          *(uint *)(in_ECX + 0xc54) = (uint)uVar1;
        }
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0xc5e) = 1;
      *(undefined4 *)(in_ECX + 0xc50) = 0;
      *(undefined4 *)(in_ECX + 0xc54) = 0;
    }
    if ((local_5 != false) && (*(int **)(in_ECX + 0x104) = param_4, param_4 != (int *)0x0)) {
      (**(code **)(*param_4 + 0x28))(in_ECX);
    }
    *(bool *)(in_ECX + 0xc5c) = local_5;
  }
  return local_5;
}

