// rea decompile_all
// name: FUN_0054ece0
// address: 0x54ece0
// body: available
// range: 0x54ece0-0x54ee29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0054ed4a) */
/* WARNING: Removing unreachable block (ram,0x0054ed62) */
/* WARNING: Removing unreachable block (ram,0x0054ed2d) */

undefined4 FUN_0054ece0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int in_ECX;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_8;
  
  if (*(char *)(in_ECX + 0xc) == '\0') {
    local_8 = 2;
  }
  else {
    local_8 = 0;
    *param_3 = 0;
    uStack_110 = *(undefined4 *)(in_ECX + 8);
    local_8 = 0;
    local_114 = 1;
    iVar1 = Ordinal_18(0,&local_114,0,0,0);
    if (0 < iVar1) {
      iVar1 = Ordinal_16(*(undefined4 *)(in_ECX + 8),param_1,param_2,0);
      if ((iVar1 == 0) || (iVar1 == -1)) {
        iVar1 = Ordinal_111();
        if (iVar1 != 0x2733) {
          local_8 = 2;
        }
      }
      else {
        *param_3 = iVar1;
      }
    }
  }
  return local_8;
}

