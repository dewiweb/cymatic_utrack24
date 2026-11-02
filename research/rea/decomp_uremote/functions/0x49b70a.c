// rea decompile_all
// name: FUN_0049b70a
// address: 0x49b70a
// body: available
// range: 0x49b70a-0x49b88a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49b758 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049b70a(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (*(int *)(in_EAX + 0x34) != 0x49444154) {
    if (*(int *)(in_EAX + 0x70) == 0) {
      puVar2 = (undefined4 *)FUN_0049174b();
      *puVar2 = 0;
      *(undefined4 **)(in_EAX + 0x70) = puVar2;
    }
    else {
      FUN_0049b1dc();
    }
    uVar3 = FUN_0049ae62();
    iVar4 = FUN_0049b003(0x49444154,uVar3);
    if (iVar4 != 0) goto LAB_0049b756;
    *(int *)(in_EAX + 0x44) = *(int *)(in_EAX + 0x70) + 4;
    *(undefined4 *)(in_EAX + 0x48) = *(undefined4 *)(in_EAX + 0x74);
  }
  *(undefined4 *)(in_EAX + 0x3c) = 0;
  *(undefined4 *)(in_EAX + 0x38) = param_1;
  do {
    while( true ) {
      iVar4 = -1;
      if (param_2 != -1) {
        iVar4 = param_2;
      }
      *(int *)(in_EAX + 0x3c) = iVar4;
      iVar5 = FUN_004687ce(~-(uint)(param_2 - iVar4 != 0) & param_3);
      param_2 = (param_2 - iVar4) + *(int *)(in_EAX + 0x3c);
      *(undefined4 *)(in_EAX + 0x3c) = 0;
      if (*(int *)(in_EAX + 0x48) != 0) break;
      uVar3 = *(undefined4 *)(in_EAX + 0x74);
      iVar4 = *(int *)(in_EAX + 0x70) + 4;
      if (((*(byte *)(in_EAX + 0x28) & 4) == 0) && (*(char *)(in_EAX + 0x234) == '\0')) {
        uVar6 = FUN_0049ae62();
        FUN_0049af9a(uVar6);
      }
      FUN_0049adf3(iVar4,uVar3);
      *(uint *)(in_EAX + 0x28) = *(uint *)(in_EAX + 0x28) | 4;
      *(int *)(in_EAX + 0x44) = iVar4;
      *(undefined4 *)(in_EAX + 0x48) = uVar3;
      if (iVar5 != 0) {
LAB_0049b827:
        if ((iVar5 == 1) && (param_3 == 4)) {
          iVar4 = *(int *)(in_EAX + 0x70);
          iVar5 = *(int *)(in_EAX + 0x74);
          iVar1 = *(int *)(in_EAX + 0x48);
          if (((*(byte *)(in_EAX + 0x28) & 4) == 0) && (*(char *)(in_EAX + 0x234) == '\0')) {
            uVar3 = FUN_0049ae62();
            FUN_0049af9a(uVar3);
          }
          FUN_0049adf3(iVar4 + 4,iVar5 - iVar1);
          *(uint *)(in_EAX + 0x28) = *(uint *)(in_EAX + 0x28) | 0xc;
          *(undefined4 *)(in_EAX + 0x48) = 0;
          *(undefined4 *)(in_EAX + 0x44) = 0;
          *(undefined4 *)(in_EAX + 0x34) = 0;
          return;
        }
        FUN_0048f554();
        goto LAB_0049b756;
      }
      if (param_3 == 0) break;
    }
    if (iVar5 != 0) goto LAB_0049b827;
  } while (param_2 != 0);
  if (param_3 != 4) {
    return;
  }
LAB_0049b756:
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

