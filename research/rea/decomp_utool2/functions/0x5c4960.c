// rea decompile_all
// name: FUN_005c4960
// address: 0x5c4960
// body: available
// range: 0x5c4960-0x5c4b9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4960(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  void *pvVar8;
  int *in_ECX;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  int local_40;
  uint local_38;
  void *local_2c;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071a933;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (0 < in_ECX[2]) {
    local_38 = 1;
    local_40 = 0;
    uVar14 = uVar6;
    do {
      pbVar9 = *(byte **)(local_40 + *in_ECX);
      pbVar10 = pbVar9;
      if (4 < *(int *)(pbVar9 + 0x10)) {
        pbVar10 = *(byte **)pbVar9;
      }
      if (((*pbVar10 & 0xf0) == 0x90) && (pbVar10[2] != 0)) {
        pbVar10 = pbVar9 + 0x18;
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar7 = pbVar9;
        if (4 < *(int *)(pbVar9 + 0x10)) {
          pbVar7 = *(byte **)pbVar9;
        }
        bVar1 = pbVar7[1];
        if (4 < *(int *)(pbVar9 + 0x10)) {
          pbVar9 = *(byte **)pbVar9;
        }
        if ((*pbVar9 & 0xf0) == 0xf0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = (*pbVar9 & 0xf) + 1;
        }
        if ((int)local_38 < in_ECX[2]) {
          puVar12 = (undefined4 *)(local_40 + 4 + *in_ECX);
          uVar11 = local_38;
          do {
            pbVar9 = (byte *)*puVar12;
            iVar2 = *(int *)(pbVar9 + 0x10);
            pbVar7 = pbVar9;
            if (4 < iVar2) {
              pbVar7 = *(byte **)pbVar9;
            }
            if (pbVar7[1] == bVar1) {
              pbVar7 = pbVar9;
              if (4 < iVar2) {
                pbVar7 = *(byte **)pbVar9;
              }
              if ((*pbVar7 & 0xf0) == 0xf0) {
                cVar5 = '\0';
              }
              else {
                cVar5 = (*pbVar7 & 0xf) + 1;
              }
              if (cVar5 == cVar4) {
                pbVar7 = pbVar9;
                if (4 < iVar2) {
                  pbVar7 = *(byte **)pbVar9;
                }
                if (((*pbVar7 & 0xf0) == 0x80) || ((pbVar7[2] == 0 && ((*pbVar7 & 0xf0) == 0x90))))
                {
                  if (uVar11 < (uint)in_ECX[2]) {
                    *(undefined4 *)pbVar10 = *(undefined4 *)(*in_ECX + uVar11 * 4);
                  }
                  else {
                    pbVar10[0] = 0;
                    pbVar10[1] = 0;
                    pbVar10[2] = 0;
                    pbVar10[3] = 0;
                  }
                  break;
                }
                pbVar7 = pbVar9;
                if (4 < iVar2) {
                  pbVar7 = *(byte **)pbVar9;
                }
                if (((*pbVar7 & 0xf0) == 0x90) && (pbVar7[2] != 0)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if (bVar3) {
                  uVar13 = 0x20;
                  pvVar8 = operator_new(0x20);
                  uVar13 = FUN_005c4fd0(bVar1,uVar13,uVar14);
                  FUN_005c5670(uVar13);
                  *(undefined4 *)((int)pvVar8 + 0x18) = 0;
                  if (4 < local_1c) {
                    FID_conflict__free(local_2c);
                  }
                  FUN_00411110(uVar11,pvVar8);
                  *(undefined8 *)((int)pvVar8 + 8) = *(undefined8 *)(pbVar9 + 8);
                  *(void **)pbVar10 = pvVar8;
                  break;
                }
              }
            }
            uVar11 = uVar11 + 1;
            puVar12 = puVar12 + 1;
          } while ((int)uVar11 < in_ECX[2]);
        }
      }
      local_40 = local_40 + 4;
      bVar3 = (int)local_38 < in_ECX[2];
      local_38 = local_38 + 1;
    } while (bVar3);
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}

