// rea decompile_all
// name: FUN_005032b0
// address: 0x5032b0
// body: available
// range: 0x5032b0-0x503377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005032b0(char *param_1,char *param_2,undefined4 param_3,int *param_4,int *param_5)

{
  char *in_EAX;
  uint uVar1;
  char local_9;
  char *local_8;
  
  if ((param_1 == (char *)0x0) || (in_EAX = param_1, *param_1 == '\0')) {
    uVar1 = (uint)in_EAX & 0xffffff00;
  }
  else {
    *param_4 = (int)param_1;
    *param_5 = *param_4;
    local_8 = param_2;
    do {
      while( true ) {
        if (*(char *)*param_5 == '\0') {
          return (uint)*param_5 & 0xffffff00;
        }
        local_9 = *(char *)*param_5;
        if (('@' < local_9) && (local_9 < '[')) {
          local_9 = local_9 + ' ';
        }
        if (local_9 == *local_8) break;
        local_8 = param_2;
        *param_4 = *param_4 + 1;
        *param_5 = *param_4;
      }
      local_8 = local_8 + 1;
      *param_5 = *param_5 + 1;
    } while (*local_8 != '\0');
    uVar1 = CONCAT31((int3)((uint)local_8 >> 8),1);
  }
  return uVar1;
}

