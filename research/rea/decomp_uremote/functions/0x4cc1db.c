// rea decompile_all
// name: FUN_004cc1db
// address: 0x4cc1db
// body: available
// range: 0x4cc1db-0x4cc291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004cc1db(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  char local_12;
  undefined1 local_11;
  float local_10;
  float local_c;
  
  uVar2 = FUN_004c0e2f(&local_11);
  if (local_12 != '\0') {
    local_c = (float)(param_1 - *(int *)(in_ECX + 0x70));
    local_10 = (float)(param_2 - *(int *)(in_ECX + 0x74));
    cVar1 = FUN_0047a837(local_c,local_10,0x3f800000);
    if ((cVar1 == '\0') &&
       ((cVar1 = FUN_004cc02a(), cVar1 == '\0' ||
        (cVar1 = FUN_0047a837(local_c,local_10,0x3f800000), cVar1 == '\0')))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

