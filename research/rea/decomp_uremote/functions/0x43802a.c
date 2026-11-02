// rea decompile_all
// name: FUN_0043802a
// address: 0x43802a
// body: available
// range: 0x43802a-0x4380af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0043802a(void)

{
  undefined4 uVar1;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  int local_8;
  
  uVar1 = *(undefined4 *)(unaff_EBX + 0x1c);
  local_8 = FUN_00437dcb();
  if (local_8 == 0) {
    _memset(unaff_ESI,0,0x28);
    unaff_ESI[7] = uVar1;
    uVar1 = FUN_00411912(0x10c4,&local_8);
    if (local_8 == 0) {
      local_8 = FUN_00437e04();
      if (local_8 != 0) {
        FUN_00411a5c(uVar1);
        return local_8;
      }
      unaff_ESI[3] = uVar1;
      local_8 = 0;
    }
    unaff_ESI[2] = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = 0x7fffffff;
    unaff_ESI[5] = &LAB_0043800f;
    unaff_ESI[6] = &LAB_00437fe8;
  }
  return local_8;
}

