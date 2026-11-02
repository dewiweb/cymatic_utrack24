// rea decompile_all
// name: FUN_0044956d
// address: 0x44956d
// body: available
// range: 0x44956d-0x449630 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044956d(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x18);
  FUN_0044bfc5();
  FUN_0047d535(0,0,(float)iVar2,(float)iVar1);
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047cda7();
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = *(int *)(in_ECX + 0x18);
  iVar3 = FUN_0044bfc5();
  FUN_0047d5bd(param_1,0,0,(float)iVar2,(float)iVar1,(float)*(int *)(iVar3 + 0x14));
  return;
}

