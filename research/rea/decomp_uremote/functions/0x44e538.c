// rea decompile_all
// name: FUN_0044e538
// address: 0x44e538
// body: available
// range: 0x44e538-0x44e6ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0044e538(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  
  iVar2 = 0;
  FUN_004e22ca();
  if (param_2 == 0) {
    if (0 < *(int *)(in_ECX + 0x4e4)) {
      do {
        FUN_0044ea80();
        uVar1 = FUN_0044d691(&param_2);
        iVar2 = iVar2 + 1;
        FUN_004e2314(param_1,iVar2,uVar1,1,*(int *)(in_ECX + 0x4e8) == iVar2);
        FUN_004652d6();
        FUN_004652d6();
        FUN_004652d6();
      } while (iVar2 < *(int *)(in_ECX + 0x4e4));
    }
  }
  else {
    if (param_2 == 1) {
      bVar3 = *(int *)(*(int *)(in_ECX + 0xd0) + 0x1c) < *(int *)(*(int *)(in_ECX + 0xd0) + 0x18);
      FUN_0046537e(&param_2);
      FUN_004e2314(param_1,1,&param_2,1,bVar3);
      FUN_004652d6();
      FUN_0046537e(&param_2);
      bVar3 = !bVar3;
      uVar4 = 1;
      uVar1 = 2;
    }
    else {
      FUN_0046537e(&param_2);
      FUN_004e2314(param_1,0x65,&param_2,*(char *)(*(int *)(in_ECX + 0xd4) + 0x240) == '\0',0);
      FUN_004652d6();
      FUN_0046537e(&param_2);
      uVar4 = *(undefined1 *)(*(int *)(in_ECX + 0xd4) + 0x240);
      bVar3 = false;
      uVar1 = 0x66;
    }
    FUN_004e2314(param_1,uVar1,&param_2,uVar4,bVar3);
    FUN_004652d6();
  }
  return param_1;
}

