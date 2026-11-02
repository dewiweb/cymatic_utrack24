// rea decompile_all
// name: FUN_00569fa0
// address: 0x569fa0
// body: available
// range: 0x569fa0-0x56a02e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00569fa0(undefined4 *param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  int local_c;
  undefined4 local_8;
  
  local_8 = *param_1;
  local_c = 0;
  while ((*param_2 != 0 && (local_c == 0))) {
    sVar1 = FUN_00568610(local_8,*param_2);
    local_c = 0x10;
    if ((sVar1 != -1) && (piVar2 = (int *)FUN_0056a030(sVar1), piVar2 != (int *)0x0)) {
      local_c = (**(code **)(*piVar2 + 0x44))(&local_8,param_2);
    }
  }
  *param_1 = local_8;
  return local_c;
}

