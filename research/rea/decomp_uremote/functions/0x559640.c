// rea decompile_all
// name: FUN_00559640
// address: 0x559640
// body: available
// range: 0x559640-0x559779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00559640(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_24 [16];
  int local_14;
  uint local_10;
  undefined4 local_c;
  short local_8;
  
  local_c = 0;
  *(ushort *)(param_1 + 0x4c) = param_2 | 0x84;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  FUN_00503de0(param_3);
  local_8 = FUN_00558f30(1);
  if (local_8 == 0) {
    local_c = 0x15;
  }
  else {
    iVar3 = FUN_0052f3a0(local_8);
    if (iVar3 == 0) {
      for (local_10 = 0; local_10 < *(ushort *)(in_ECX + 0x10); local_10 = local_10 + 1) {
        local_14 = FUN_0055bb40(*(undefined2 *)(*(int *)(in_ECX + 8) + local_10 * 8));
        if (local_14 != 0) {
          if ((*(int *)(local_14 + 0x10) == 1) || (*(int *)(local_14 + 0x10) == 2)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            if (*(int *)(local_14 + 0x10) == 2) {
              local_c = 0xd;
            }
            FUN_00503c30(local_14,*(undefined2 *)(*(int *)(in_ECX + 8) + 2 + local_10 * 8));
            cVar2 = FUN_005039c0();
            if (cVar2 == '\0') {
              FUN_0052f410(local_24);
            }
          }
        }
      }
    }
    else {
      local_c = 0x17;
    }
  }
  return local_c;
}

