// rea decompile_all
// name: FUN_00465b3c
// address: 0x465b3c
// body: available
// range: 0x465b3c-0x465ba5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465b3c(void)

{
  int iVar1;
  int *unaff_EBX;
  int iVar2;
  int *piVar3;
  int local_14 [4];
  
  iVar2 = 0;
  local_14[1] = 0;
  local_14[3] = 1;
  for (piVar3 = local_14; *piVar3 != 0; piVar3 = piVar3 + 1) {
    iVar1 = FUN_0046089e();
    iVar2 = iVar2 + iVar1;
    local_14[3] = local_14[3] + 1;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_00465935();
    FUN_00465353();
    local_14[2] = *unaff_EBX + iVar2;
    FUN_0047152d(local_14);
  }
  return;
}

