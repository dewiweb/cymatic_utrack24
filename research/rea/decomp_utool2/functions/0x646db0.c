// rea decompile_all
// name: FUN_00646db0
// address: 0x646db0
// body: available
// range: 0x646db0-0x647007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00646db0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  uint *in_ECX;
  uint uVar4;
  undefined1 *in_EDX;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;
  uint local_c;
  uint local_8;
  
  if (5 < param_1) {
    return;
  }
  bVar1 = *(byte *)((int)in_ECX + 0xb);
  puVar7 = in_EDX;
  if (bVar1 == 1) {
    uVar2 = *in_ECX;
    local_8 = (uint)(byte)(&DAT_00c184e8)[param_1];
    iVar5 = 7;
    local_c = 0;
    if (uVar2 <= local_8) goto LAB_00646fbd;
    bVar1 = (&DAT_00c18760)[param_1];
    uVar6 = local_8;
    do {
      local_c = local_c | ((byte)in_EDX[uVar6 >> 3] >> (7 - ((byte)uVar6 & 7) & 0x1f) & 1) <<
                          ((byte)iVar5 & 0x1f);
      uVar3 = (undefined1)local_c;
      if (iVar5 == 0) {
        *puVar7 = uVar3;
        iVar5 = 7;
        puVar7 = puVar7 + 1;
        uVar3 = 0;
        local_c = 0;
      }
      else {
        iVar5 = iVar5 + -1;
      }
      uVar6 = uVar6 + bVar1;
    } while (uVar6 < uVar2);
    bVar8 = iVar5 == 7;
  }
  else if (bVar1 == 2) {
    uVar2 = *in_ECX;
    local_8 = (uint)(byte)(&DAT_00c184e8)[param_1];
    iVar5 = 6;
    local_c = 0;
    if (uVar2 <= local_8) goto LAB_00646fbd;
    bVar1 = (&DAT_00c18760)[param_1];
    uVar6 = local_8;
    do {
      local_c = local_c | ((byte)in_EDX[uVar6 >> 2] >>
                           (('\x03' - ((byte)uVar6 & 3)) * '\x02' & 0x1f) & 3) <<
                          ((byte)iVar5 & 0x1f);
      uVar3 = (undefined1)local_c;
      if (iVar5 == 0) {
        *puVar7 = uVar3;
        iVar5 = 6;
        puVar7 = puVar7 + 1;
        uVar3 = 0;
        local_c = 0;
      }
      else {
        iVar5 = iVar5 + -2;
      }
      uVar6 = uVar6 + bVar1;
    } while (uVar6 < uVar2);
    bVar8 = iVar5 == 6;
  }
  else {
    uVar2 = *in_ECX;
    if (bVar1 != 4) {
      local_8 = (uint)(byte)(&DAT_00c184e8)[param_1];
      uVar6 = (uint)(bVar1 >> 3);
      if (local_8 < uVar2) {
        bVar1 = (&DAT_00c18760)[param_1];
        puVar7 = in_EDX + local_8 * uVar6;
        uVar4 = local_8;
        do {
          if (in_EDX != puVar7) {
            FUN_004c2c30(in_EDX,puVar7,uVar6);
          }
          uVar4 = uVar4 + bVar1;
          in_EDX = in_EDX + uVar6;
          puVar7 = puVar7 + bVar1 * uVar6;
        } while (uVar4 < uVar2);
      }
      goto LAB_00646fbd;
    }
    local_8 = (uint)(byte)(&DAT_00c184e8)[param_1];
    iVar5 = 4;
    local_c = 0;
    if (uVar2 <= local_8) goto LAB_00646fbd;
    bVar1 = (&DAT_00c18760)[param_1];
    uVar6 = local_8;
    do {
      local_c = local_c | ((byte)in_EDX[uVar6 >> 1] >> (((byte)uVar6 & 1) * -4 + 4 & 0x1f) & 0xf) <<
                          ((byte)iVar5 & 0x1f);
      uVar3 = (undefined1)local_c;
      if (iVar5 == 0) {
        *puVar7 = uVar3;
        iVar5 = 4;
        puVar7 = puVar7 + 1;
        uVar3 = 0;
        local_c = 0;
      }
      else {
        iVar5 = iVar5 + -4;
      }
      uVar6 = uVar6 + bVar1;
    } while (uVar6 < uVar2);
    bVar8 = iVar5 == 4;
  }
  if (!bVar8) {
    *puVar7 = uVar3;
  }
LAB_00646fbd:
  bVar1 = *(byte *)((int)in_ECX + 0xb);
  uVar2 = ((*in_ECX - 1) + ((byte)(&DAT_00c18760)[param_1] - local_8)) /
          (uint)(byte)(&DAT_00c18760)[param_1];
  *in_ECX = uVar2;
  if (bVar1 < 8) {
    in_ECX[1] = bVar1 * uVar2 + 7 >> 3;
    return;
  }
  in_ECX[1] = (bVar1 >> 3) * uVar2;
  return;
}

