// rea decompile_all
// name: FUN_00401355
// address: 0x401355
// body: available
// range: 0x401355-0x4013ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00401355(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *unaff_ESI;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar1 = unaff_ESI[1];
  iVar2 = 0;
  local_8 = 0;
  if (iVar1 <= *unaff_ESI) {
    if (0x2aaaaa9 < iVar1) {
      local_8 = 0x40;
      goto LAB_004013c3;
    }
    local_c = (iVar1 >> 2) + 4 + iVar1;
    if ((local_c < iVar1) || (0x2aaaaaa < local_c)) {
      local_c = 0x2aaaaaa;
    }
    iVar1 = FUN_00411976(0x30,unaff_ESI[2],&local_8);
    unaff_ESI[2] = iVar1;
    if (local_8 != 0) goto LAB_004013c3;
    unaff_ESI[1] = local_c;
  }
  iVar2 = *unaff_ESI * 0x30 + unaff_ESI[2];
  *unaff_ESI = *unaff_ESI + 1;
LAB_004013c3:
  *param_2 = iVar2;
  return local_8;
}

