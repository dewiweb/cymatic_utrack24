// rea decompile_all
// name: FUN_0049a730
// address: 0x49a730
// body: available
// range: 0x49a730-0x49a84c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049a730(int param_1)

{
  byte bVar1;
  byte *in_ECX;
  int iVar2;
  int *in_EDX;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int local_c;
  byte *local_8;
  
  if (*(char *)((int)in_EDX + 9) != '\b') {
    return;
  }
  if (*(char *)((int)in_EDX + 10) != '\x01') {
    return;
  }
  local_8 = in_ECX;
  if (param_1 == 1) {
    local_c = *in_EDX;
    uVar4 = 0;
    uVar3 = 0x80;
    if (local_c != 0) {
      do {
        if (*local_8 != 0) {
          uVar4 = uVar4 | uVar3;
        }
        local_8 = local_8 + 1;
        if (uVar3 < 2) {
          *in_ECX = (byte)uVar4;
          in_ECX = in_ECX + 1;
          uVar3 = 0x80;
          uVar4 = 0;
        }
        else {
          uVar3 = (int)uVar3 >> 1;
        }
        local_c = local_c + -1;
      } while (local_c != 0);
      if (uVar3 != 0x80) {
        *in_ECX = (byte)uVar4;
      }
    }
    goto LAB_0049a821;
  }
  if (param_1 == 2) {
    local_c = *in_EDX;
    uVar3 = 0;
    iVar2 = 6;
    if (local_c == 0) goto LAB_0049a821;
    do {
      uVar3 = uVar3 | (*local_8 & 3) << ((byte)iVar2 & 0x1f);
      if (iVar2 == 0) {
        *in_ECX = (byte)uVar3;
        in_ECX = in_ECX + 1;
        iVar2 = 6;
        uVar3 = 0;
      }
      else {
        iVar2 = iVar2 + -2;
      }
      bVar1 = (byte)uVar3;
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    bVar5 = iVar2 == 6;
  }
  else {
    if (param_1 != 4) goto LAB_0049a821;
    local_c = *in_EDX;
    uVar3 = 0;
    iVar2 = 4;
    if (local_c == 0) goto LAB_0049a821;
    do {
      uVar3 = uVar3 | (*local_8 & 0xf) << ((byte)iVar2 & 0x1f);
      if (iVar2 == 0) {
        *in_ECX = (byte)uVar3;
        in_ECX = in_ECX + 1;
        iVar2 = 4;
        uVar3 = 0;
      }
      else {
        iVar2 = iVar2 + -4;
      }
      bVar1 = (byte)uVar3;
      local_8 = local_8 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    bVar5 = iVar2 == 4;
  }
  if (!bVar5) {
    *in_ECX = bVar1;
  }
LAB_0049a821:
  *(char *)((int)in_EDX + 9) = (char)param_1;
  bVar1 = (char)param_1 * *(char *)((int)in_EDX + 10);
  *(byte *)((int)in_EDX + 0xb) = bVar1;
  if (bVar1 < 8) {
    uVar3 = (uint)bVar1 * *in_EDX + 7 >> 3;
  }
  else {
    uVar3 = (uint)(bVar1 >> 3) * *in_EDX;
  }
  in_EDX[1] = uVar3;
  return;
}

