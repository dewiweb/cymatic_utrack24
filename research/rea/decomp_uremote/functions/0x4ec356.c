// rea decompile_all
// name: FUN_004ec356
// address: 0x4ec356
// body: available
// range: 0x4ec356-0x4ec408 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ec356(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  FUN_00439b5a();
  (**(code **)(*(int *)(param_1 + 0x70) + 0x14))(&param_1,&stack0xfffffff4);
  iVar2 = thunk_FUN_0046087d();
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      uVar3 = thunk_FUN_0046085c(iVar6);
      cVar1 = FUN_00464f6b(uVar3);
      if (cVar1 == '\0') break;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  uVar3 = thunk_FUN_0046085c(iVar6);
  iVar4 = FUN_004e936e(uVar3);
  if (iVar2 <= iVar6) {
LAB_004ec3f8:
    FUN_004652d6();
    return iVar6 + unaff_EDI;
  }
  do {
    uVar3 = thunk_FUN_0046085c(iVar6);
    iVar5 = FUN_004e936e(uVar3);
    if (iVar4 != iVar5) break;
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar2);
  do {
    if (iVar2 <= iVar6) goto LAB_004ec3f8;
    uVar3 = thunk_FUN_0046085c(iVar6);
    cVar1 = FUN_00464f6b(uVar3);
    if (cVar1 == '\0') goto LAB_004ec3f8;
    iVar6 = iVar6 + 1;
  } while( true );
}

