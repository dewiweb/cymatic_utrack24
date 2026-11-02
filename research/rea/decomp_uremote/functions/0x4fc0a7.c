// rea decompile_all
// name: FUN_004fc0a7
// address: 0x4fc0a7
// body: available
// range: 0x4fc0a7-0x4fc133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc0a7(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *unaff_EDI;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*unaff_EDI != 0) {
    FUN_004fba64();
    iVar1 = *(int *)(in_EAX + 100);
    iVar2 = unaff_EDI[0x16];
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
    iVar1 = *(int *)(in_EAX + 100);
    if ((iVar1 != 0) && (*(undefined4 *)(in_EAX + 100) = 0, iVar1 != 0)) {
      FUN_005af7b6(iVar1);
    }
    FUN_004facef();
    (**(code **)(*(int *)*unaff_EDI + 0x2c))(&local_18);
    iVar1 = *(int *)*unaff_EDI;
    FUN_005b3fb0(local_18,local_14,0);
    (**(code **)(iVar1 + 0x44))();
  }
  return;
}

