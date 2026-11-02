// rea decompile_all
// name: FUN_00423dc5
// address: 0x423dc5
// body: available
// range: 0x423dc5-0x423f26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423dc5(int param_1)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  uVar1 = FUN_004d021d();
  iVar2 = FUN_0041148f();
  if (local_8 == 0) {
    if ((((iVar2 == 0x10000) || (iVar2 == 0x74746366)) || (iVar2 == 0x4f54544f)) ||
       (((iVar2 == 0x74727565 || (iVar2 == 0x74797031)) || (iVar2 == 0x20000)))) {
      *(undefined4 *)(param_1 + 0x84) = 0x74746366;
      if (iVar2 == 0x74746366) {
        local_8 = FUN_00411560();
        if (local_8 != 0) {
          return local_8;
        }
        if (*(uint *)(param_1 + 0x8c) == 0) {
          return 8;
        }
        if (*(uint *)(in_EAX + 4) >> 5 < *(uint *)(param_1 + 0x8c)) {
          return 10;
        }
        uVar1 = FUN_00411976(4,0,&local_8);
        *(undefined4 *)(param_1 + 0x90) = uVar1;
        if (local_8 != 0) {
          return local_8;
        }
        iVar2 = FUN_004111b5();
        iVar4 = 0;
        if (iVar2 != 0) {
          return iVar2;
        }
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            uVar1 = FUN_004112c7();
            *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar4 * 4) = uVar1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x8c));
        }
        FUN_00411249();
      }
      else {
        *(undefined4 *)(param_1 + 0x88) = 0x10000;
        *(undefined4 *)(param_1 + 0x8c) = 1;
        puVar3 = (undefined4 *)FUN_00411912(4,&local_8);
        *(undefined4 **)(param_1 + 0x90) = puVar3;
        if (local_8 != 0) {
          return local_8;
        }
        *puVar3 = uVar1;
      }
      local_8 = 0;
    }
    else {
      local_8 = 2;
    }
  }
  return local_8;
}

