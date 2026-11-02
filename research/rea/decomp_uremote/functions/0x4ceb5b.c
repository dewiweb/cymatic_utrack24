// rea decompile_all
// name: FUN_004ceb5b
// address: 0x4ceb5b
// body: available
// range: 0x4ceb5b-0x4cebfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004ceb5b(float param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_8;
  
  fVar3 = (float10)FUN_00466960();
  local_8 = (float)fVar3;
  iVar1 = thunk_FUN_0046087d();
  if (2 < iVar1) {
    iVar2 = thunk_FUN_0046085c(iVar1 + -2);
    iVar1 = thunk_FUN_0046085c(iVar1 + -1);
    if (iVar2 == 0x69) {
      if (iVar1 == 0x6e) {
        local_8 = local_8 * 96.0;
        goto LAB_004cebf6;
      }
    }
    else if (iVar2 == 0x6d) {
      if (iVar1 == 0x6d) {
        local_8 = local_8 * 3.7795277;
        goto LAB_004cebf6;
      }
    }
    else if (iVar2 == 99) {
      if (iVar1 == 0x6d) {
        local_8 = local_8 * 37.795277;
        goto LAB_004cebf6;
      }
    }
    else if ((iVar2 == 0x70) && (iVar1 == 99)) {
      local_8 = local_8 * 15.0;
      goto LAB_004cebf6;
    }
    if (iVar1 == 0x25) {
      local_8 = param_1 * 0.01 * local_8;
    }
  }
LAB_004cebf6:
  return (float10)local_8;
}

