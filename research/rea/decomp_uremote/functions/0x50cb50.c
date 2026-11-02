// rea decompile_all
// name: FUN_0050cb50
// address: 0x50cb50
// body: available
// range: 0x50cb50-0x50cc50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050cb50(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined8 uVar3;
  
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0x28))();
  uVar3 = FUN_0052e670();
  iVar1 = FUN_0052e6e0();
  *(undefined4 *)(in_ECX + 0xc4) = 0x28;
  FUN_0050cdb0(uVar3,iVar1);
  FUN_00515f60(iVar1);
  iVar2 = FUN_0052e6e0();
  if ((uint)(iVar2 - iVar1) < *(uint *)(in_ECX + 0xc4)) {
    *(int *)(in_ECX + 0xc4) = *(int *)(in_ECX + 0xc4) - (iVar2 - iVar1);
  }
  else {
    *(undefined4 *)(in_ECX + 0xc4) = 1;
  }
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(in_ECX + 0xc4);
  (**(code **)(*(int *)(in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4)) + 0x2c))();
  return;
}

