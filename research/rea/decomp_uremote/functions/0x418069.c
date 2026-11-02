// rea decompile_all
// name: FUN_00418069
// address: 0x418069
// body: available
// range: 0x418069-0x41813c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418069(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int *in_EAX;
  undefined1 *puVar4;
  uint uVar5;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_c;
  uint local_8;
  
  local_14 = in_EAX[2];
  local_18 = in_EAX[4];
  uVar5 = 0;
  local_1c = 0;
  local_c = 0;
  bVar2 = true;
  puVar4 = (undefined1 *)*in_EAX;
  local_8 = 0x80;
  bVar3 = true;
  if (0 < local_18) {
    do {
      if (bVar2) {
        do {
          if (bVar3) {
            if (param_2 <= param_1) break;
            bVar1 = *param_1;
            param_1 = param_1 + 1;
            local_c = (int)(uint)bVar1 >> 4;
            local_1c = bVar1 & 0xf;
            bVar3 = false;
          }
          else {
            bVar3 = true;
            local_c = local_1c;
          }
        } while (local_c == 0);
      }
      if (bVar3) {
        uVar5 = uVar5 | local_8;
      }
      local_8 = local_8 >> 1;
      local_14 = local_14 + -1;
      if (local_14 < 1) {
        *puVar4 = (char)uVar5;
        local_14 = in_EAX[2];
        *in_EAX = *in_EAX + in_EAX[1];
        puVar4 = (undefined1 *)*in_EAX;
LAB_00418114:
        uVar5 = 0;
        local_8 = 0x80;
      }
      else if (local_8 == 0) {
        *puVar4 = (char)uVar5;
        puVar4 = puVar4 + 1;
        goto LAB_00418114;
      }
      local_c = local_c - 1;
      bVar2 = (int)local_c < 1;
      local_18 = local_18 + -1;
    } while (0 < local_18);
    if (local_8 != 0x80) {
      *puVar4 = (char)uVar5;
    }
  }
  return;
}

