// rea decompile_all
// name: FUN_0050cc60
// address: 0x50cc60
// body: available
// range: 0x50cc60-0x50cda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050cc60(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined8 uVar4;
  
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0x28))();
  uVar4 = FUN_0052e670();
  iVar2 = FUN_0052e6e0();
  *(undefined4 *)(in_ECX + 0xc4) = 0x28;
  FUN_00515860();
  sVar1 = FUN_0052a220();
  if (sVar1 == 0x10) {
    FUN_00515830();
    SetEvent(*(HANDLE *)(in_ECX + 0x3b8));
  }
  FUN_00522210();
  FUN_0050cdb0(uVar4,iVar2);
  iVar3 = FUN_0052e6e0();
  if ((uint)(iVar3 - iVar2) < *(uint *)(in_ECX + 0xc4)) {
    *(int *)(in_ECX + 0xc4) = *(int *)(in_ECX + 0xc4) - (iVar3 - iVar2);
  }
  else {
    *(undefined4 *)(in_ECX + 0xc4) = 1;
  }
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(in_ECX + 0xc4);
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0x2c))();
  return;
}

