// rea decompile_all
// name: FUN_004e1b15
// address: 0x4e1b15
// body: available
// range: 0x4e1b15-0x4e1c56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e1b15(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int unaff_EDI;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_004c08d2(*(undefined4 *)(unaff_EDI + 0x14),0,param_1,param_2);
  uVar4 = FUN_00467ec4();
  if (*(int *)(*(int *)(unaff_EDI + 0x14) + 0xec) + 100U < uVar4) {
    cVar2 = FUN_004c0ee2(1,local_18,local_14);
    if (cVar2 != '\0') {
      cVar2 = FUN_004f5fe9(0);
      if (((cVar2 != '\0') && (*(char *)(*(int *)(unaff_EDI + 0x14) + 0xc0) == '\0')) &&
         ((iVar1 = *(int *)(*(int *)(unaff_EDI + 0x14) + 0xd4), iVar1 == 0 ||
          ((*(byte *)(iVar1 + 0x68) & 2) == 0)))) {
        FUN_004f7a5c();
        FUN_004e1801();
      }
    }
  }
  FUN_004e1d88(uVar4,param_1,param_2,local_18,local_14);
  uVar3 = FUN_004e201f(uVar4,local_18,local_14);
  if (*(int *)(*(int *)(unaff_EDI + 0x14) + 0x70) == 0) {
    cVar2 = FUN_004e0f47();
  }
  else {
    cVar2 = FUN_004e0f2f();
  }
  if (((*(char *)(*(int *)(unaff_EDI + 0x14) + 0xbf) == '\0') ||
      (*(char *)(*(int *)(unaff_EDI + 0x14) + 0xbc) == '\0')) || (cVar2 != '\0')) {
    FUN_004e1c57(uVar4,*(undefined1 *)(unaff_EDI + 0x38),uVar3,cVar2,local_18,local_14);
  }
  else {
    FUN_004e09c5(1);
  }
  return;
}

