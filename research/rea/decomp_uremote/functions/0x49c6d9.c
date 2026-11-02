// rea decompile_all
// name: FUN_0049c6d9
// address: 0x49c6d9
// body: available
// range: 0x49c6d9-0x49c8f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c6d9(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *unaff_EBX;
  int unaff_ESI;
  uint *unaff_EDI;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int local_8;
  
  if (5 < unaff_ESI) {
    return;
  }
  bVar1 = *(byte *)((int)unaff_EDI + 0xb);
  puVar6 = unaff_EBX;
  if (bVar1 == 1) {
    uVar3 = (uint)(byte)(&DAT_00919fe8)[unaff_ESI];
    uVar2 = *unaff_EDI;
    uVar4 = 0;
    local_8 = 7;
    if (uVar2 <= uVar3) goto LAB_0049c8b7;
    do {
      uVar4 = uVar4 | ((byte)unaff_EBX[uVar3 >> 3] >> (7 - ((byte)uVar3 & 7) & 0x1f) & 1) <<
                      ((byte)local_8 & 0x1f);
      if (local_8 == 0) {
        uVar7 = (undefined1)uVar4;
        uVar4 = 0;
        local_8 = 7;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      }
      else {
        local_8 = local_8 + -1;
      }
      uVar7 = (undefined1)uVar4;
      uVar3 = uVar3 + (byte)(&DAT_0091a74c)[unaff_ESI];
    } while (uVar3 < uVar2);
    bVar5 = local_8 == 7;
  }
  else if (bVar1 == 2) {
    uVar3 = (uint)(byte)(&DAT_00919fe8)[unaff_ESI];
    uVar2 = *unaff_EDI;
    uVar4 = 0;
    local_8 = 6;
    if (uVar2 <= uVar3) goto LAB_0049c8b7;
    do {
      uVar4 = uVar4 | ((byte)unaff_EBX[uVar3 >> 2] >> (('\x03' - ((byte)uVar3 & 3)) * '\x02' & 0x1f)
                      & 3) << ((byte)local_8 & 0x1f);
      if (local_8 == 0) {
        uVar7 = (undefined1)uVar4;
        uVar4 = 0;
        local_8 = 6;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      }
      else {
        local_8 = local_8 + -2;
      }
      uVar7 = (undefined1)uVar4;
      uVar3 = uVar3 + (byte)(&DAT_0091a74c)[unaff_ESI];
    } while (uVar3 < uVar2);
    bVar5 = local_8 == 6;
  }
  else {
    uVar4 = *unaff_EDI;
    if (bVar1 != 4) {
      uVar2 = (uint)(bVar1 >> 3);
      for (uVar3 = (uint)(byte)(&DAT_00919fe8)[unaff_ESI]; uVar3 < uVar4;
          uVar3 = uVar3 + (byte)(&DAT_0091a74c)[unaff_ESI]) {
        if (puVar6 != unaff_EBX + uVar3 * uVar2) {
          _memcpy(puVar6,unaff_EBX + uVar3 * uVar2,uVar2);
        }
        puVar6 = puVar6 + uVar2;
      }
      goto LAB_0049c8b7;
    }
    uVar3 = (uint)(byte)(&DAT_00919fe8)[unaff_ESI];
    uVar2 = 0;
    local_8 = 4;
    if (uVar4 <= uVar3) goto LAB_0049c8b7;
    do {
      uVar2 = uVar2 | ((byte)unaff_EBX[uVar3 >> 1] >> (((byte)uVar3 & 1) * -4 + 4 & 0x1f) & 0xf) <<
                      ((byte)local_8 & 0x1f);
      if (local_8 == 0) {
        uVar7 = (undefined1)uVar2;
        uVar2 = 0;
        local_8 = 4;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      }
      else {
        local_8 = local_8 + -4;
      }
      uVar7 = (undefined1)uVar2;
      uVar3 = uVar3 + (byte)(&DAT_0091a74c)[unaff_ESI];
    } while (uVar3 < uVar4);
    bVar5 = local_8 == 4;
  }
  if (!bVar5) {
    *puVar6 = uVar7;
  }
LAB_0049c8b7:
  uVar4 = (((uint)(byte)(&DAT_0091a74c)[unaff_ESI] - (uint)(byte)(&DAT_00919fe8)[unaff_ESI]) + -1 +
          *unaff_EDI) / (uint)(byte)(&DAT_0091a74c)[unaff_ESI];
  bVar1 = *(byte *)((int)unaff_EDI + 0xb);
  *unaff_EDI = uVar4;
  if (bVar1 < 8) {
    uVar4 = bVar1 * uVar4 + 7 >> 3;
  }
  else {
    uVar4 = (bVar1 >> 3) * uVar4;
  }
  unaff_EDI[1] = uVar4;
  return;
}

