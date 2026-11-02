// rea decompile_all
// name: FUN_00495f11
// address: 0x495f11
// body: available
// range: 0x495f11-0x495fd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00495f11(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  uint uVar5;
  int unaff_ESI;
  int *unaff_EDI;
  
  uVar5 = 0x400;
  if (*(int *)(unaff_ESI + 0x34) == *(int *)(unaff_ESI + 0xd0)) {
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
    *(undefined4 *)(unaff_ESI + 0x44) = param_3;
    do {
      if (*(int *)(unaff_ESI + 0x3c) == 0) {
        uVar1 = *param_2;
        if (uVar1 < uVar5) {
          uVar5 = uVar1;
        }
        *param_2 = uVar1 - uVar5;
        if (uVar5 != 0) {
          FUN_00495a35(param_1,uVar5);
        }
        *(undefined4 *)(unaff_ESI + 0x38) = param_1;
        *(uint *)(unaff_ESI + 0x3c) = uVar5;
      }
      if (*(int *)(unaff_ESI + 0x48) == 0) {
        iVar2 = *unaff_EDI;
        iVar4 = -1;
        if (iVar2 != -1) {
          iVar4 = iVar2;
        }
        *unaff_EDI = iVar2 - iVar4;
        *(int *)(unaff_ESI + 0x48) = iVar4;
      }
      iVar2 = FUN_0046a107(unaff_ESI + 0x38,~-(*param_2 != 0) & (param_4 != 0) * '\x02' + 2U);
    } while ((iVar2 == 0) && ((*unaff_EDI != 0 || (*(int *)(unaff_ESI + 0x48) != 0))));
    *unaff_EDI = *unaff_EDI + *(int *)(unaff_ESI + 0x48);
    *(undefined4 *)(unaff_ESI + 0x48) = 0;
    FUN_0048f554();
    uVar3 = extraout_EDX;
  }
  else {
    *(char **)(unaff_ESI + 0x50) = "zstream unclaimed";
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

