// rea decompile_all
// name: FUN_00417fc8
// address: 0x417fc8
// body: available
// range: 0x417fc8-0x418068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417fc8(byte *param_1)

{
  int *in_EAX;
  int in_ECX;
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = in_EAX[2];
  local_10 = 0;
  local_8 = (in_ECX - (int)param_1) * 8;
  puVar2 = (undefined1 *)*in_EAX;
  uVar1 = 0;
  local_c = 0x80;
  if (in_EAX[4] < (int)local_8) {
    local_8 = in_EAX[4];
  }
  uVar3 = local_8 & 7;
  if (0 < (int)local_8) {
    do {
      if ((local_8 & 7) == uVar3) {
        local_10 = (uint)*param_1;
        param_1 = param_1 + 1;
      }
      if ((local_10 & 0x80) != 0) {
        uVar1 = uVar1 | local_c;
      }
      local_10 = local_10 << 1;
      local_c = local_c >> 1;
      local_14 = local_14 + -1;
      if (local_14 < 1) {
        local_14 = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        *puVar2 = (char)uVar1;
        puVar2 = (undefined1 *)*in_EAX;
LAB_00418051:
        uVar1 = 0;
        local_c = 0x80;
      }
      else if (local_c == 0) {
        *puVar2 = (char)uVar1;
        puVar2 = puVar2 + 1;
        goto LAB_00418051;
      }
      local_8 = local_8 - 1;
    } while (0 < (int)local_8);
    if (local_c != 0x80) {
      *puVar2 = (char)uVar1;
    }
  }
  return;
}

