// rea decompile_all
// name: FUN_00418efc
// address: 0x418efc
// body: available
// range: 0x418efc-0x418fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00418efc(undefined4 *param_1,int param_2,undefined2 *param_3)

{
  char *pcVar1;
  char *in_EAX;
  undefined2 extraout_var;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_14;
  char *local_10;
  undefined2 local_c [3];
  char local_5;
  
  local_14 = 0;
  local_10 = (char *)*param_1;
  if (in_EAX <= local_10) goto LAB_00418fa9;
  local_5 = '\0';
  if (*local_10 == '[') {
    local_5 = ']';
LAB_00418f33:
    local_10 = local_10 + 1;
  }
  else if (*local_10 == '{') {
    local_5 = '}';
    goto LAB_00418f33;
  }
  if (local_10 < in_EAX) {
    local_18 = param_3;
    while (FUN_00418a36(), pcVar1 = local_10, local_10 < in_EAX) {
      if (*local_10 == local_5) {
        local_10 = local_10 + 1;
        break;
      }
      if (param_3 == (undefined2 *)0x0) {
        puVar2 = local_c;
      }
      else {
        puVar2 = local_18;
        if (param_2 <= local_14) break;
      }
      FUN_0041b290(&local_10,0);
      *puVar2 = extraout_var;
      if (pcVar1 == local_10) {
        local_14 = -1;
        break;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
      if ((local_5 == '\0') || (in_EAX <= local_10)) break;
    }
  }
LAB_00418fa9:
  *param_1 = local_10;
  return local_14;
}

