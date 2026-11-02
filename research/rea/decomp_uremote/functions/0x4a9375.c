// rea decompile_all
// name: FUN_004a9375
// address: 0x4a9375
// body: available
// range: 0x4a9375-0x4a93ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9375(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int unaff_EBX;
  int iVar3;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x10);
  iVar2 = *(int *)(in_EAX + 0x14);
  FUN_00478405();
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_004a99c6(param_1,iVar3 + unaff_EBX,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

