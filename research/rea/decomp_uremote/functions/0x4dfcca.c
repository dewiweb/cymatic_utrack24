// rea decompile_all
// name: FUN_004dfcca
// address: 0x4dfcca
// body: available
// range: 0x4dfcca-0x4dfd62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dfcca(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_004c6c2a();
  FUN_004c6d53();
  cVar1 = FUN_004f5e38();
  if (cVar1 != '\0') {
    if (*(int *)(in_ECX + 0xb0) < 0) {
      FUN_004c6d53();
      FUN_004df993();
    }
    else {
      FUN_004c6d53();
      iVar2 = FUN_004df88c();
      if (-1 < iVar2) {
        FUN_004df9bd();
      }
    }
    puVar3 = (undefined4 *)FUN_004c6d53();
    *(undefined4 *)(in_ECX + 0xa4) = *puVar3;
    *(undefined4 *)(in_ECX + 0xa8) = puVar3[1];
  }
  return;
}

