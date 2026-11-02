// rea decompile_all
// name: FUN_0042d52a
// address: 0x42d52a
// body: available
// range: 0x42d52a-0x42d620 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042d52a(uint *param_1,uint param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int *in_EDX;
  int iVar5;
  uint local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0x10000;
  if (*param_1 != 0) {
    iVar4 = in_ECX - (int)in_EDX;
    iVar2 = in_EAX - (int)in_EDX;
    do {
      iVar1 = *in_EDX;
      if (iVar1 != 0) {
        iVar5 = *(int *)(param_1[1] + local_c * 4);
        if (((iVar5 == 0) || ((iVar5 < 0 && (0 < iVar1)))) || ((0 < iVar5 && (iVar1 < 0)))) {
          return 0;
        }
        if ((param_2 & 0x4000) == 0) {
          if (iVar5 < 1) {
            iVar5 = -iVar5;
          }
          local_8 = FUN_0040d230(iVar5);
        }
        else {
          if (iVar5 <= *(int *)(iVar4 + (int)in_EDX)) {
            return 0;
          }
          if (*(int *)(iVar2 + (int)in_EDX) <= iVar5) {
            return 0;
          }
          if (iVar5 < iVar1) {
            uVar3 = FUN_0040d230(0x10000);
            local_8 = FUN_0040d230(uVar3);
          }
          else {
            uVar3 = FUN_0040d230(0x10000);
            local_8 = FUN_0040d230(uVar3);
          }
        }
      }
      local_c = local_c + 1;
      in_EDX = in_EDX + 1;
    } while (local_c < *param_1);
  }
  return local_8;
}

