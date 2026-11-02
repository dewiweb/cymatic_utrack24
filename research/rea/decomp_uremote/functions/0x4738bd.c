// rea decompile_all
// name: FUN_004738bd
// address: 0x4738bd
// body: available
// range: 0x4738bd-0x47392e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004738bd(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4738c9;
  cVar1 = (**(code **)(*in_ECX + 0xc))();
  if ((cVar1 != '\0') || (cVar1 = FUN_004736fb(), cVar1 == '\0')) {
    uVar2 = FUN_00473790(local_14);
    local_8 = 0;
    (**(code **)(*in_ECX + 0x10))(uVar2);
    local_8 = 0xffffffff;
    FUN_004652d6();
    *(undefined1 *)(in_ECX + 2) = 0;
    iVar3 = FUN_00473bb8();
    if (*(char *)(iVar3 + 4) == '\0') {
      if (in_ECX[3] != 0) {
        FUN_00473bb8(in_ECX[3]);
        FUN_00473dc5();
      }
      return 1;
    }
  }
  return 0;
}

