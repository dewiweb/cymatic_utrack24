// rea decompile_all
// name: FUN_00443d2a
// address: 0x443d2a
// body: available
// range: 0x443d2a-0x443d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443d2a(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  uVar1 = FUN_005b3fb0();
  FUN_004c0be5(uVar1);
  iVar2 = FUN_005b3fb0();
  *(int *)(in_ECX + 0x74) = iVar2;
  iVar3 = FUN_005b3fb0();
  *(int *)(in_ECX + 0x78) = iVar3;
  *(int *)(in_ECX + 0x7c) = iVar3 - iVar2;
  FUN_00443d80();
  return;
}

