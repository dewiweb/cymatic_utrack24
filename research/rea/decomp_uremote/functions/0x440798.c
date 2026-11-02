// rea decompile_all
// name: FUN_00440798
// address: 0x440798
// body: available
// range: 0x440798-0x440830 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00440798(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int *piVar3;
  int local_8;
  
  local_8 = 0;
  cVar2 = FUN_004c32c9();
  if (cVar2 == '\0') {
    FUN_0044bfc5();
  }
  else {
    piVar3 = &local_8;
    FUN_0044bfc5(piVar3);
    FUN_004764ae(piVar3);
  }
  FUN_004d076d();
  FUN_0047cda7();
  iVar1 = *(int *)(in_ECX + 0x1c);
  local_8 = *(int *)(in_ECX + 0x18);
  FUN_0044bfc5();
  FUN_0047d535(0,0,(float)local_8,(float)iVar1);
  return 1;
}

