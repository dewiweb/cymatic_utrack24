// rea decompile_all
// name: FUN_0040f0de
// address: 0x40f0de
// body: available
// range: 0x40f0de-0x40f18d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040f0de(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_EBX;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (unaff_EBX == 0) {
    return 0x23;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = *(int *)(unaff_EBX + 0x60);
    if (iVar1 == 0) {
      return 0x22;
    }
    *param_1 = 0;
    iVar1 = *(int *)(iVar1 + 0xc);
    piVar3 = (int *)FUN_00411912(*(undefined4 *)(iVar1 + 0x28),&local_8);
    if ((local_8 == 0) && (local_c = FUN_00411912(0xc,&local_8), local_8 == 0)) {
      piVar3[10] = 0;
      *piVar3 = unaff_EBX;
      pcVar2 = *(code **)(iVar1 + 0x38);
      if ((pcVar2 == (code *)0x0) || (local_8 = (*pcVar2)(piVar3), local_8 == 0)) {
        *param_1 = (int)piVar3;
        *(int **)(local_c + 8) = piVar3;
        FUN_00411b09();
        return local_8;
      }
    }
    FUN_00411a5c(local_c);
    FUN_00411a5c(piVar3);
    return local_8;
  }
  return 0x24;
}

