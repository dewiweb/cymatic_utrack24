// rea decompile_all
// name: FUN_0041813d
// address: 0x41813d
// body: available
// range: 0x41813d-0x4181e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041813d(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  int *in_EAX;
  undefined1 *puVar3;
  uint uVar4;
  int local_18;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = in_EAX[2];
  local_18 = in_EAX[4];
  uVar4 = 0;
  local_10 = 0;
  bVar1 = true;
  puVar3 = (undefined1 *)*in_EAX;
  local_8 = 0x80;
  bVar2 = true;
  if (0 < local_18) {
    do {
      if (bVar1) {
        do {
          if (param_2 <= param_1) break;
          local_10 = (uint)*param_1;
          bVar2 = (bool)(bVar2 ^ 1);
          param_1 = param_1 + 1;
        } while (local_10 == 0);
      }
      if (bVar2) {
        uVar4 = uVar4 | local_8;
      }
      local_8 = local_8 >> 1;
      local_c = local_c + -1;
      if (local_c < 1) {
        *puVar3 = (char)uVar4;
        local_c = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar3 = (undefined1 *)*in_EAX;
LAB_004181bf:
        uVar4 = 0;
        local_8 = 0x80;
      }
      else if (local_8 == 0) {
        *puVar3 = (char)uVar4;
        puVar3 = puVar3 + 1;
        goto LAB_004181bf;
      }
      local_10 = local_10 - 1;
      bVar1 = (int)local_10 < 1;
      local_18 = local_18 + -1;
    } while (0 < local_18);
    if (local_8 != 0x80) {
      *puVar3 = (char)uVar4;
    }
  }
  return;
}

