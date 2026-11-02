// rea decompile_all
// name: FUN_006183d0
// address: 0x6183d0
// body: available
// range: 0x6183d0-0x618767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_006183d0(int *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  bool bVar9;
  uint local_8;
  
  local_8 = 0;
  uVar7 = local_8;
  do {
    uVar6 = param_1[0x1d];
    if (uVar6 < 0x106) {
      FUN_00618990();
      uVar6 = param_1[0x1d];
      if ((uVar6 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar6 == 0) {
        FUN_006147d0(param_1[0x1b] - param_1[0x17],param_2 == 4);
        iVar4 = *param_1;
        param_1[0x17] = param_1[0x1b];
        uVar7 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x14);
        if (*(uint *)(iVar4 + 0x10) < uVar7) {
          uVar7 = *(uint *)(iVar4 + 0x10);
        }
        if (uVar7 != 0) {
          FUN_004c2c30(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0x10),
                       uVar7);
          *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + uVar7;
          piVar1 = (int *)(*(int *)(iVar4 + 0x1c) + 0x10);
          *piVar1 = *piVar1 + uVar7;
          *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + uVar7;
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) - uVar7;
          piVar1 = (int *)(*(int *)(iVar4 + 0x1c) + 0x14);
          *piVar1 = *piVar1 - uVar7;
          iVar4 = *(int *)(iVar4 + 0x1c);
          if (*(int *)(iVar4 + 0x14) == 0) {
            *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
          }
        }
        if (*(int *)(*param_1 + 0x10) == 0) {
          cVar2 = '\0';
          if (param_2 == 4) {
            cVar2 = '\x02';
          }
          return cVar2;
        }
        return (param_2 == 4) * '\x02' + '\x01';
      }
    }
    if (2 < uVar6) {
      uVar7 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar7;
      *(undefined2 *)(param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar7 * 2);
      uVar7 = (uint)*(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
      local_8 = uVar7;
    }
    if (((uVar7 != 0) && (param_1[0x1b] - uVar7 <= param_1[0xb] - 0x106U)) && (param_1[0x22] != 2))
    {
      if (param_1[0x22] == 3) {
        if (param_1[0x1b] - uVar7 != 1) goto LAB_006184a4;
        iVar4 = FUN_00618af0();
      }
      else {
        iVar4 = FUN_00618ba0();
      }
      param_1[0x18] = iVar4;
    }
LAB_006184a4:
    if ((uint)param_1[0x18] < 3) {
      bVar5 = *(byte *)(param_1[0x1b] + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
      bVar9 = param_1[0x5a8] == param_1[0x5a7] + -1;
      param_1[0x1d] = param_1[0x1d] + -1;
LAB_00618626:
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar3 = (short)param_1[0x1b] - (short)param_1[0x1c];
      bVar5 = (char)param_1[0x18] - 3;
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar3;
      uVar8 = sVar3 - 1;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&DAT_00c00b50)[bVar5] + 0x126) =
           (short)param_1[(byte)(&DAT_00c00b50)[bVar5] + 0x126] + 1;
      if (uVar8 < 0x100) {
        bVar5 = (&DAT_00c00860)[uVar8];
      }
      else {
        bVar5 = (&DAT_00c00960)[uVar8 >> 7];
      }
      *(short *)(param_1 + bVar5 + 0x262) = (short)param_1[bVar5 + 0x262] + 1;
      bVar9 = param_1[0x5a8] == param_1[0x5a7] + -1;
      uVar6 = param_1[0x18];
      param_1[0x1d] = param_1[0x1d] - uVar6;
      if ((uVar6 <= (uint)param_1[0x20]) && (2 < (uint)param_1[0x1d])) {
        param_1[0x18] = uVar6 - 1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar7 = ((uint)*(byte *)(param_1[0x1b] + 2U + param_1[0xe]) ^
                  param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
          param_1[0x12] = uVar7;
          *(undefined2 *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) =
               *(undefined2 *)(param_1[0x11] + uVar7 * 2);
          uVar7 = (uint)*(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 + -1;
          local_8 = uVar7;
        } while (*piVar1 != 0);
        goto LAB_00618626;
      }
      param_1[0x1b] = param_1[0x1b] + uVar6;
      param_1[0x18] = 0;
      uVar6 = (uint)*(byte *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = uVar6;
      param_1[0x12] =
           (uVar6 << ((byte)param_1[0x16] & 0x1f) ^
           (uint)((byte *)(param_1[0xe] + param_1[0x1b]))[1]) & param_1[0x15];
    }
    if (bVar9) {
      FUN_006147d0(param_1[0x1b] - param_1[0x17],0);
      iVar4 = *param_1;
      param_1[0x17] = param_1[0x1b];
      uVar7 = *(uint *)(*(int *)(iVar4 + 0x1c) + 0x14);
      if (*(uint *)(iVar4 + 0x10) < uVar7) {
        uVar7 = *(uint *)(iVar4 + 0x10);
      }
      if (uVar7 != 0) {
        FUN_004c2c30(*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0x10),
                     uVar7);
        *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + uVar7;
        piVar1 = (int *)(*(int *)(iVar4 + 0x1c) + 0x10);
        *piVar1 = *piVar1 + uVar7;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + uVar7;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) - uVar7;
        piVar1 = (int *)(*(int *)(iVar4 + 0x1c) + 0x14);
        *piVar1 = *piVar1 - uVar7;
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (*(int *)(iVar4 + 0x14) == 0) {
          *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 8);
        }
      }
      uVar7 = local_8;
      if (*(int *)(*param_1 + 0x10) == 0) {
        return '\0';
      }
    }
  } while( true );
}

