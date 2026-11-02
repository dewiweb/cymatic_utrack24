// rea decompile_all
// name: FUN_00418fb4
// address: 0x418fb4
// body: available
// range: 0x418fb4-0x419068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00418fb4(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  char *in_EAX;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  char *local_c;
  char local_5;
  
  local_10 = 0;
  local_c = (char *)*param_1;
  if (in_EAX <= local_c) goto LAB_0041905e;
  local_5 = '\0';
  if (*local_c == '[') {
    local_5 = ']';
LAB_00418feb:
    local_c = local_c + 1;
  }
  else if (*local_c == '{') {
    local_5 = '}';
    goto LAB_00418feb;
  }
  if (local_c < in_EAX) {
    local_14 = param_3;
    while (FUN_00418a36(), pcVar1 = local_c, local_c < in_EAX) {
      if (*local_c == local_5) {
        local_c = local_c + 1;
        break;
      }
      if (param_3 == (undefined4 *)0x0) {
        puVar3 = &local_18;
      }
      else {
        puVar3 = local_14;
        if (param_2 <= local_10) break;
      }
      uVar2 = FUN_0041b290(&local_c,param_4);
      *puVar3 = uVar2;
      if (pcVar1 == local_c) {
        local_10 = -1;
        break;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 1;
      if ((local_5 == '\0') || (in_EAX <= local_c)) break;
    }
  }
LAB_0041905e:
  *param_1 = local_c;
  return local_10;
}

