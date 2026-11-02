// rea decompile_all
// name: FUN_004f1a79
// address: 0x4f1a79
// body: available
// range: 0x4f1a79-0x4f1ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004f1a79(void)

{
  char cVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  int in_ECX;
  tagMSG local_30;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4f1a85;
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x68) & 2) != 0) {
    FUN_004f5fb6();
    local_8 = 0;
    cVar1 = FUN_004c04c2();
    if (((cVar1 == '\0') ||
        (BVar2 = PeekMessageW(&local_30,*(HWND *)(in_ECX + 0x38),0xf,0xf,1), BVar2 != 0)) &&
       (cVar1 = FUN_004f5fe9(0), cVar1 != '\0')) {
      FUN_004f2652();
    }
    puVar3 = (undefined1 *)FUN_00474d0f();
    return puVar3;
  }
  return &LAB_005de3b4;
}

