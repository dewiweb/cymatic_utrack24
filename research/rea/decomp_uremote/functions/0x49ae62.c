// rea decompile_all
// name: FUN_0049ae62
// address: 0x49ae62
// body: available
// range: 0x49ae62-0x49af99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0049ae62(void)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = *(uint *)(in_EAX + 0xb8);
  if ((*(uint *)(in_EAX + 0xc4) < 0x8000) && (uVar2 < 0x8000)) {
    if (*(char *)(in_EAX + 0x108) == '\0') {
      local_8 = (*(uint *)(in_EAX + 0xc4) + 1) * uVar2;
    }
    else {
      bVar1 = *(byte *)(in_EAX + 0x10e);
      local_8 = 0;
      local_c = 8;
      uVar5 = 0;
      do {
        if ((int)uVar5 < 2) {
          bVar3 = 3;
          bVar6 = 3;
        }
        else {
          bVar3 = (byte)(local_c + -1 >> 1);
          bVar6 = (byte)(local_c + -1 >> 1);
        }
        uVar4 = ((1 << (bVar3 & 0x1f)) -
                ((uVar5 & 1) << (3U - (char)((int)(uVar5 + 1) >> 1) & 0x1f) & 7)) + -1 +
                *(int *)(in_EAX + 0xb4) >> (bVar6 & 0x1f);
        if (uVar4 != 0) {
          if (bVar1 < 8) {
            uVar4 = uVar4 * bVar1 + 7 >> 3;
          }
          else {
            uVar4 = (bVar1 >> 3) * uVar4;
          }
          bVar3 = (byte)(local_c >> 1);
          if ((int)uVar5 < 3) {
            bVar3 = 3;
          }
          local_8 = local_8 + (((1 << (bVar3 & 0x1f)) -
                               ((~uVar5 & 1) << (3U - (char)((int)uVar5 >> 1) & 0x1f) & 7)) + -1 +
                               uVar2 >> (bVar3 & 0x1f)) * (uVar4 + 1);
        }
        local_c = local_c + -1;
        uVar5 = uVar5 + 1;
      } while (1 < local_c);
    }
  }
  else {
    local_8 = -1;
  }
  return local_8;
}

