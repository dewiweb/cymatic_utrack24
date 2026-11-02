// rea decompile_all
// name: FUN_004987a0
// address: 0x4987a0
// body: available
// range: 0x4987a0-0x4988e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49888b to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004987a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_ESI;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  *(int *)(unaff_ESI + 0x44) = param_1;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  if (param_1 == 0) {
    param_2 = 0;
  }
  do {
    if (*(int *)(unaff_ESI + 0x3c) == 0) {
      iVar1 = *(int *)(unaff_ESI + 0xf0);
      while (iVar1 == 0) {
        FUN_00495a5d();
        iVar1 = FUN_004959a1();
        *(int *)(unaff_ESI + 0xf0) = iVar1;
        if (*(int *)(unaff_ESI + 0xd0) != 0x49444154) goto LAB_00498889;
      }
      uVar3 = *(uint *)(unaff_ESI + 0x268);
      if (*(uint *)(unaff_ESI + 0xf0) < *(uint *)(unaff_ESI + 0x268)) {
        uVar3 = *(uint *)(unaff_ESI + 0xf0);
      }
      uVar2 = FUN_00495b75(0);
      FUN_00495a35(uVar2,uVar3);
      *(int *)(unaff_ESI + 0xf0) = *(int *)(unaff_ESI + 0xf0) - uVar3;
      *(undefined4 *)(unaff_ESI + 0x38) = uVar2;
      *(uint *)(unaff_ESI + 0x3c) = uVar3;
    }
    if (param_1 == 0) {
      *(undefined1 **)(unaff_ESI + 0x44) = local_408;
      *(undefined4 *)(unaff_ESI + 0x48) = 0x400;
    }
    else {
      iVar1 = -1;
      if (param_2 != -1) {
        iVar1 = param_2;
      }
      param_2 = param_2 - iVar1;
      *(int *)(unaff_ESI + 0x48) = iVar1;
    }
    iVar1 = FUN_0046a107(unaff_ESI + 0x38,0);
    param_2 = param_2 + *(int *)(unaff_ESI + 0x48);
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
    if (iVar1 == 1) {
      *(uint *)(unaff_ESI + 0x28) = *(uint *)(unaff_ESI + 0x28) | 8;
      *(uint *)(unaff_ESI + 0x2c) = *(uint *)(unaff_ESI + 0x2c) | 8;
      *(undefined4 *)(unaff_ESI + 0x44) = 0;
      if ((*(int *)(unaff_ESI + 0x3c) != 0) || (*(int *)(unaff_ESI + 0xf0) != 0)) {
        FUN_004914ad();
      }
      if (param_2 != 0) {
joined_r0x004988bb:
        if (param_1 != 0) {
LAB_00498889:
                    /* WARNING: Subroutine does not return */
          FUN_00491122();
        }
        FUN_004914ad();
      }
      break;
    }
    if (iVar1 != 0) {
      FUN_0048f554();
      goto joined_r0x004988bb;
    }
  } while (param_2 != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

