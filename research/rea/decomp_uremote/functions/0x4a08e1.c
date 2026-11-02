// rea decompile_all
// name: FUN_004a08e1
// address: 0x4a08e1
// body: available
// range: 0x4a08e1-0x4a096f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a08e1(int *param_1,int param_2,char param_3)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int local_c;
  
  if ((param_2 < 0) || (param_1[2] < param_2 + in_ECX)) {
    param_2 = param_1[2] - in_ECX;
  }
  param_2 = param_2 + -1;
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  if (-1 < param_2) {
    local_c = in_ECX * 0x1c;
    do {
      iVar2 = *param_1 + local_c;
      local_c = local_c + 0x1c;
      if ((param_3 != '\0') || (*(char *)(iVar2 + 0x18) == '\0')) {
        FUN_00474ee8();
        puVar1 = (undefined4 *)FUN_004a4fa2();
        *in_EAX = *puVar1;
        in_EAX[1] = puVar1[1];
        in_EAX[2] = puVar1[2];
        in_EAX[3] = puVar1[3];
      }
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

