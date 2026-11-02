// rea decompile_all
// name: FUN_00483f0a
// address: 0x483f0a
// body: available
// range: 0x483f0a-0x483f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483f0a(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  if (0 < *(int *)(param_1 + 0x3c)) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x154) + 0xc);
    param_4 = param_4 - (int)param_2;
    do {
      (*(code *)*puVar2)(param_1,iVar1,*param_2 + param_3 * 4,
                         *(int *)(param_4 + (int)param_2) + *(int *)(iVar1 + 0xc) * param_5 * 4);
      iVar1 = iVar1 + 0x54;
      local_8 = local_8 + 1;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    } while (local_8 < *(int *)(param_1 + 0x3c));
  }
  return;
}

