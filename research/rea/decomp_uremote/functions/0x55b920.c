// rea decompile_all
// name: FUN_0055b920
// address: 0x55b920
// body: available
// range: 0x55b920-0x55ba04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_0055b920(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  bool bVar2;
  uint local_c;
  byte local_5;
  
  local_5 = 0;
  local_c = 0;
  do {
    if (*(ushort *)(in_ECX + 1) <= local_c) {
      return local_5;
    }
    cVar1 = FUN_005039c0();
    if (cVar1 == '\0') {
      cVar1 = FUN_005034a0(local_c * 0x18 + *in_ECX);
      if (cVar1 != '\0') goto LAB_0055b9a7;
      cVar1 = FUN_005039a0();
      if (cVar1 != '\0') {
        cVar1 = FUN_00503830(local_c * 0x18 + *in_ECX,param_1);
        if (cVar1 != '\0') goto LAB_0055b9a7;
      }
    }
    else {
LAB_0055b9a7:
      bVar2 = *(int *)(*in_ECX + 0x10 + local_c * 0x18) != 1;
      if (bVar2) {
        *(undefined4 *)(*in_ECX + 0x10 + local_c * 0x18) = 1;
        *(undefined1 *)(*in_ECX + 0x14 + local_c * 0x18) = 0;
      }
      local_5 = local_5 | bVar2;
    }
    local_c = local_c + 1;
  } while( true );
}

