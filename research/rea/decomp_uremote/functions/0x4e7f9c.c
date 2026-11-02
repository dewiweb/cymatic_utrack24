// rea decompile_all
// name: FUN_004e7f9c
// address: 0x4e7f9c
// body: available
// range: 0x4e7f9c-0x4e80b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e7f9c(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int iVar4;
  float10 fVar5;
  undefined4 local_14;
  
  if (0 < *(int *)(unaff_EBX + 0x10)) {
    local_14 = 0;
    if (*(int *)(param_1 + 0x10) < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 0x10) * 4);
    }
    if (iVar4 != 0) {
      uVar3 = FUN_00466412();
      cVar2 = FUN_00464f6b(uVar3);
      if (cVar2 == '\0') {
        iVar1 = **(int **)(unaff_EBX + 8);
        uVar3 = thunk_FUN_0046085c(0);
        cVar2 = FUN_00464f6b(uVar3);
        if (cVar2 == '\0') {
          FUN_00465ac3(iVar1);
          *(uint *)(iVar4 + 8) = (uint)(ushort)(*(short *)(iVar1 + 8) + *(short *)(iVar4 + 8));
          uVar3 = FUN_004e7e2d(iVar4);
          fVar5 = (float10)FUN_0049fa7b(uVar3);
          *(float *)(iVar4 + 4) = (float)fVar5;
          FUN_004652d6();
          FUN_004652d6();
          FUN_005af7b6(iVar1);
          local_14 = 1;
        }
      }
    }
    FUN_0046ea7f();
    if (local_14 < *(int *)(unaff_EBX + 0x10)) {
      do {
        FUN_004f7022();
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(unaff_EBX + 0x10));
    }
    if (*(int *)(unaff_EBX + 0xc) != 0) {
      _free(*(void **)(unaff_EBX + 8));
      *(undefined4 *)(unaff_EBX + 8) = 0;
      *(undefined4 *)(unaff_EBX + 0xc) = 0;
    }
    *(undefined4 *)(unaff_EBX + 0x10) = 0;
  }
  return;
}

