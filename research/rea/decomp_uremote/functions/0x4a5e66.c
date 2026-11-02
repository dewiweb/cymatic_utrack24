// rea decompile_all
// name: FUN_004a5e66
// address: 0x4a5e66
// body: available
// range: 0x4a5e66-0x4a5ed1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint * FUN_004a5e66(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint in_ECX;
  undefined1 local_34 [32];
  undefined4 local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4a5e72;
  local_14 = 0;
  FUN_004776af(local_34,in_ECX + 0xc,param_2,param_3);
  local_8 = 1;
  FUN_00478556(local_34);
  cVar1 = FUN_004786d2();
  uVar2 = ~-(uint)(cVar1 != '\0') & in_ECX;
  *param_1 = uVar2;
  if (uVar2 != 0) {
    *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
  }
  local_14 = 1;
  local_8 = local_8 & 0xffffff00;
  FUN_004f7994();
  return param_1;
}

