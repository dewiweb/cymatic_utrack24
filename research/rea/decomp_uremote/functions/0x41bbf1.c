// rea decompile_all
// name: FUN_0041bbf1
// address: 0x41bbf1
// body: available
// range: 0x41bbf1-0x41bc9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bbf1(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puVar1 = param_1;
  if (param_1[1] == 0) {
    local_c = *param_1;
    if (param_1[3] == 1) {
      local_8 = 0;
      param_1 = &local_18;
      do {
        FUN_0040d211(local_c,param_1);
        iVar2 = FUN_0040d211();
        iVar2 = FUN_0041b9ec(iVar2 >> 0x10);
        if (iVar2 != 0) goto LAB_0041bc96;
        local_8 = local_8 + 1;
        param_1 = param_1 + 1;
      } while (local_8 < 3);
      iVar2 = FUN_0041ba9f(local_18,local_14,local_10,local_c);
      if (iVar2 == 0) {
        return;
      }
    }
    else {
      iVar2 = 6;
    }
LAB_0041bc96:
    puVar1[1] = iVar2;
  }
  return;
}

