// rea decompile_all
// name: FUN_004618b9
// address: 0x4618b9
// body: available
// range: 0x4618b9-0x461915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004618b9(void)

{
  char cVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4618c5;
  iVar2 = FUN_00461792();
  if (iVar2 == 0) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    cVar1 = FUN_00461733();
    if (cVar1 == '\0') {
      FUN_0046e594(in_ECX);
    }
    FUN_00461829(&local_1c);
    iVar2 = FUN_00461792();
    FUN_0046e56c();
  }
  return iVar2;
}

