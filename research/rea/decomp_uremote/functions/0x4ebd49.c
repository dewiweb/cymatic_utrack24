// rea decompile_all
// name: FUN_004ebd49
// address: 0x4ebd49
// body: available
// range: 0x4ebd49-0x4ebf82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004ebd49(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_3 != param_4) {
    iVar5 = 0;
    iVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x104)) {
      do {
        iVar2 = FUN_004e8382();
        iVar2 = iVar2 + iVar3;
        if (((iVar3 < param_3) && (param_3 < iVar2)) || ((iVar3 < param_4 && (param_4 < iVar2)))) {
          FUN_004ec4bd();
          iVar5 = iVar5 + -1;
          iVar2 = iVar3;
        }
        else if (param_4 < iVar2) break;
        iVar5 = iVar5 + 1;
        iVar3 = iVar2;
      } while (iVar5 < *(int *)(in_ECX + 0x104));
    }
    local_14 = 0;
    if (param_1 == 0) {
      local_1c = param_3;
      iVar3 = 0;
      local_18 = param_4;
      if (0 < *(int *)(in_ECX + 0x104)) {
        do {
          iVar5 = local_1c;
          iVar2 = FUN_004e8382();
          iVar2 = iVar2 + local_14;
          if ((local_1c <= local_14) && (iVar2 <= local_18)) {
            FUN_004f66f9();
            local_18 = (local_18 - iVar2) + local_14;
            if (local_18 < local_1c) {
              local_1c = local_18;
            }
            if (local_18 <= iVar5) break;
            iVar3 = iVar3 + -1;
            iVar2 = local_14;
          }
          local_14 = iVar2;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(in_ECX + 0x104));
      }
      FUN_004ec4ea();
      *(undefined4 *)(in_ECX + 0xf4) = 0xffffffff;
      *(byte *)(in_ECX + 0x95) = *(byte *)(in_ECX + 0x95) | 8;
      FUN_004ea237();
      FUN_004ec153();
      FUN_00439b5a();
      FUN_004e9d4f();
    }
    else {
      local_20 = 0;
      local_18 = 0;
      if (0 < *(int *)(in_ECX + 0x104)) {
        do {
          if (param_4 <= param_3) break;
          iVar3 = FUN_004e8382();
          if ((param_3 <= local_14) && (iVar3 + local_14 <= param_4)) {
            iVar5 = FUN_005af82d();
            if (iVar5 == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = FUN_004e7f52();
            }
            FUN_0046ea7f();
            iVar5 = local_20 + 1;
            puVar1 = (undefined4 *)(local_20 * 4);
            local_20 = iVar5;
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = uVar4;
            }
          }
          local_18 = local_18 + 1;
          local_14 = iVar3 + local_14;
        } while (local_18 < *(int *)(in_ECX + 0x104));
      }
      iVar3 = FUN_00472b6d();
      if (100 < iVar3) {
        FUN_004e9764();
      }
      iVar3 = FUN_005af82d();
      if (iVar3 != 0) {
        FUN_004e90ab(iVar3,in_ECX);
      }
      FUN_004727fe();
      _free((void *)0x0);
    }
  }
  return;
}

