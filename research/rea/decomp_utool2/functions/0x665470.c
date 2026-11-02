// rea decompile_all
// name: FUN_00665470
// address: 0x665470
// body: available
// range: 0x665470-0x665701 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00665470(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  int *in_ECX;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  ushort *puVar13;
  int *local_10;
  
  puVar2 = (undefined4 *)in_ECX[6];
  iVar9 = puVar2[1];
  pbVar11 = (byte *)*puVar2;
  if (iVar9 == 0) {
    cVar4 = (*(code *)puVar2[3])();
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar11 = (byte *)*puVar2;
    iVar9 = puVar2[1];
  }
  bVar1 = *pbVar11;
  pbVar11 = pbVar11 + 1;
  iVar9 = iVar9 + -1;
  if (iVar9 == 0) {
    cVar4 = (*(code *)puVar2[3])(in_ECX);
    if (cVar4 == '\0') {
      return 0;
    }
    pbVar11 = (byte *)*puVar2;
    iVar9 = puVar2[1];
  }
  iVar9 = iVar9 + -1;
  pbVar12 = pbVar11 + 1;
  iVar3 = (uint)bVar1 * 0x100 + -2 + (uint)*pbVar11;
  do {
    if (iVar3 < 1) {
      if (iVar3 != 0) {
        *(undefined4 *)(*in_ECX + 0x14) = 0xb;
        (**(code **)*in_ECX)(in_ECX);
      }
      *puVar2 = pbVar12;
      puVar2[1] = iVar9;
      return 1;
    }
    if (iVar9 == 0) {
      cVar4 = (*(code *)puVar2[3])(in_ECX);
      if (cVar4 == '\0') {
        return 0;
      }
      pbVar12 = (byte *)*puVar2;
      iVar9 = puVar2[1];
    }
    iVar9 = iVar9 + -1;
    uVar5 = (uint)(*pbVar12 >> 4);
    uVar8 = *pbVar12 & 0xf;
    pbVar12 = pbVar12 + 1;
    *(undefined4 *)(*in_ECX + 0x14) = 0x51;
    *(uint *)(*in_ECX + 0x18) = uVar8;
    *(uint *)(*in_ECX + 0x1c) = uVar5;
    (**(code **)(*in_ECX + 4))(in_ECX,1);
    if (3 < uVar8) {
      *(undefined4 *)(*in_ECX + 0x14) = 0x1f;
      *(uint *)(*in_ECX + 0x18) = uVar8;
      (**(code **)*in_ECX)(in_ECX);
    }
    if (in_ECX[uVar8 + 0x24] == 0) {
      iVar6 = (**(code **)in_ECX[1])(in_ECX,0,0x82);
      *(undefined1 *)(iVar6 + 0x80) = 0;
      in_ECX[uVar8 + 0x24] = iVar6;
    }
    iVar6 = in_ECX[uVar8 + 0x24];
    local_10 = &DAT_00c02140;
    do {
      if (uVar5 == 0) {
        if (iVar9 == 0) {
          cVar4 = (*(code *)puVar2[3])(in_ECX);
          if (cVar4 == '\0') {
            return 0;
          }
          pbVar12 = (byte *)*puVar2;
          iVar9 = puVar2[1];
        }
        uVar7 = (ushort)*pbVar12;
      }
      else {
        if (iVar9 == 0) {
          cVar4 = (*(code *)puVar2[3])(in_ECX);
          if (cVar4 == '\0') {
            return 0;
          }
          pbVar12 = (byte *)*puVar2;
          iVar9 = puVar2[1];
        }
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) {
          cVar4 = (*(code *)puVar2[3])(in_ECX);
          if (cVar4 == '\0') {
            return 0;
          }
          pbVar12 = (byte *)*puVar2;
          iVar9 = puVar2[1];
        }
        uVar7 = (ushort)bVar1 * 0x100 + (ushort)*pbVar12;
      }
      iVar9 = iVar9 + -1;
      iVar10 = *local_10;
      pbVar12 = pbVar12 + 1;
      local_10 = local_10 + 1;
      *(ushort *)(iVar6 + iVar10 * 2) = uVar7;
    } while ((int)local_10 < 0xc02240);
    if (1 < *(int *)(*in_ECX + 0x68)) {
      iVar10 = 8;
      puVar13 = (ushort *)(iVar6 + 4);
      do {
        iVar6 = *in_ECX;
        *(uint *)(iVar6 + 0x18) = (uint)puVar13[-2];
        *(uint *)(iVar6 + 0x1c) = (uint)puVar13[-1];
        *(uint *)(iVar6 + 0x20) = (uint)*puVar13;
        *(uint *)(iVar6 + 0x24) = (uint)puVar13[1];
        *(uint *)(iVar6 + 0x28) = (uint)puVar13[2];
        *(uint *)(iVar6 + 0x2c) = (uint)puVar13[3];
        *(uint *)(iVar6 + 0x30) = (uint)puVar13[4];
        *(uint *)(iVar6 + 0x34) = (uint)puVar13[5];
        *(undefined4 *)(*in_ECX + 0x14) = 0x5d;
        (**(code **)(*in_ECX + 4))(in_ECX,2);
        puVar13 = puVar13 + 8;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar6 = iVar3 + -0x41;
    iVar3 = iVar3 + -0x81;
    if (uVar5 == 0) {
      iVar3 = iVar6;
    }
  } while( true );
}

