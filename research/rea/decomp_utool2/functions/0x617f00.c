// rea decompile_all
// name: FUN_00617f00
// address: 0x617f00
// body: available
// range: 0x617f00-0x6183cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00617f00(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  uint local_8;
  
  uVar9 = 0;
  local_8 = 0;
LAB_00617f14:
  do {
    uVar11 = param_1[0x1d];
    if (uVar11 < 0x106) {
      FUN_00618990();
      uVar11 = param_1[0x1d];
      if ((uVar11 < 0x106) && (param_2 == 0)) {
        return '\0';
      }
      if (uVar11 == 0) {
        if (param_1[0x1a] != 0) {
          bVar8 = *(byte *)(param_1[0x1b] + -1 + param_1[0xe]);
          *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
          *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar8;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(short *)(param_1 + bVar8 + 0x25) = (short)param_1[bVar8 + 0x25] + 1;
          param_1[0x1a] = 0;
        }
        FUN_006147d0(param_1[0x1b] - param_1[0x17],param_2 == 4);
        iVar7 = *param_1;
        param_1[0x17] = param_1[0x1b];
        uVar9 = *(uint *)(*(int *)(iVar7 + 0x1c) + 0x14);
        if (*(uint *)(iVar7 + 0x10) < uVar9) {
          uVar9 = *(uint *)(iVar7 + 0x10);
        }
        if (uVar9 != 0) {
          FUN_004c2c30(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x10),
                       uVar9);
          *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + uVar9;
          piVar1 = (int *)(*(int *)(iVar7 + 0x1c) + 0x10);
          *piVar1 = *piVar1 + uVar9;
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + uVar9;
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) - uVar9;
          piVar1 = (int *)(*(int *)(iVar7 + 0x1c) + 0x14);
          *piVar1 = *piVar1 - uVar9;
          iVar7 = *(int *)(iVar7 + 0x1c);
          if (*(int *)(iVar7 + 0x14) == 0) {
            *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 8);
          }
        }
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (param_2 == 4) * '\x02' + '\x01';
        }
        cVar5 = '\0';
        if (param_2 == 4) {
          cVar5 = '\x02';
        }
        return cVar5;
      }
    }
    if (2 < uVar11) {
      uVar9 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar9;
      *(undefined2 *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2) =
           *(undefined2 *)(param_1[0x11] + uVar9 * 2);
      uVar9 = (uint)*(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2);
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
      local_8 = uVar9;
    }
    param_1[0x1e] = param_1[0x18];
    param_1[0x19] = param_1[0x1c];
    param_1[0x18] = 2;
    if (((uVar9 != 0) && ((uint)param_1[0x1e] < (uint)param_1[0x20])) &&
       (param_1[0x1b] - uVar9 <= param_1[0xb] - 0x106U)) {
      if (param_1[0x22] != 2) {
        if (param_1[0x22] == 3) {
          if (param_1[0x1b] - uVar9 != 1) goto LAB_00617ff5;
          iVar7 = FUN_00618af0();
        }
        else {
          iVar7 = FUN_00618ba0();
        }
        param_1[0x18] = iVar7;
      }
LAB_00617ff5:
      if (((uint)param_1[0x18] < 6) &&
         ((param_1[0x22] == 1 ||
          ((param_1[0x18] == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c]))))))) {
        param_1[0x18] = 2;
      }
    }
    if (((uint)param_1[0x1e] < 3) || ((uint)param_1[0x1e] < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] + -1;
        param_1[0x1a] = 1;
        goto LAB_00617f14;
      }
      bVar8 = *(byte *)(param_1[0x1b] + -1 + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar8;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar8 + 0x25) = (short)param_1[bVar8 + 0x25] + 1;
      if (param_1[0x5a8] == param_1[0x5a7] + -1) {
        FUN_006147d0(param_1[0x1b] - param_1[0x17],0);
        iVar7 = *param_1;
        param_1[0x17] = param_1[0x1b];
        uVar11 = *(uint *)(*(int *)(iVar7 + 0x1c) + 0x14);
        if (*(uint *)(iVar7 + 0x10) < uVar11) {
          uVar11 = *(uint *)(iVar7 + 0x10);
        }
        uVar9 = local_8;
        if (uVar11 != 0) {
          FUN_004c2c30(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x10),
                       uVar11);
          *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + uVar11;
          piVar1 = (int *)(*(int *)(iVar7 + 0x1c) + 0x10);
          *piVar1 = *piVar1 + uVar11;
          *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + uVar11;
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) - uVar11;
          piVar1 = (int *)(*(int *)(iVar7 + 0x1c) + 0x14);
          *piVar1 = *piVar1 - uVar11;
          iVar7 = *(int *)(iVar7 + 0x1c);
          if (*(int *)(iVar7 + 0x14) == 0) {
            *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 8);
          }
        }
      }
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] + -1;
      iVar7 = *(int *)(*param_1 + 0x10);
    }
    else {
      iVar7 = param_1[0x1b];
      iVar2 = param_1[0x1d];
      bVar8 = (char)param_1[0x1e] - 3;
      sVar6 = (short)param_1[0x1b] - (short)param_1[0x19];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar6 + -1;
      uVar10 = sVar6 - 2;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar8;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&DAT_00c00b50)[bVar8] + 0x126) =
           (short)param_1[(byte)(&DAT_00c00b50)[bVar8] + 0x126] + 1;
      if (uVar10 < 0x100) {
        bVar8 = (&DAT_00c00860)[uVar10];
      }
      else {
        bVar8 = (&DAT_00c00960)[uVar10 >> 7];
      }
      *(short *)(param_1 + bVar8 + 0x262) = (short)param_1[bVar8 + 0x262] + 1;
      iVar3 = param_1[0x5a7];
      iVar4 = param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] + (1 - param_1[0x1e]);
      param_1[0x1e] = param_1[0x1e] + -2;
      do {
        param_1[0x1b] = param_1[0x1b] + 1;
        uVar9 = param_1[0x1b];
        if (uVar9 <= (uint)(iVar2 + iVar7 + -3)) {
          uVar11 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                   (uint)*(byte *)(param_1[0xe] + 2 + uVar9)) & param_1[0x15];
          param_1[0x12] = uVar11;
          *(undefined2 *)(param_1[0x10] + (param_1[0xd] & uVar9) * 2) =
               *(undefined2 *)(param_1[0x11] + uVar11 * 2);
          local_8 = (uint)*(ushort *)(param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      uVar9 = local_8;
      if (iVar4 != iVar3 + -1) goto LAB_00617f14;
      FUN_006147d0(param_1[0x1b] - param_1[0x17],0);
      iVar7 = *param_1;
      param_1[0x17] = param_1[0x1b];
      uVar11 = *(uint *)(*(int *)(iVar7 + 0x1c) + 0x14);
      if (*(uint *)(iVar7 + 0x10) < uVar11) {
        uVar11 = *(uint *)(iVar7 + 0x10);
      }
      if (uVar11 != 0) {
        FUN_004c2c30(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x10),
                     uVar11);
        *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + uVar11;
        piVar1 = (int *)(*(int *)(iVar7 + 0x1c) + 0x10);
        *piVar1 = *piVar1 + uVar11;
        *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) + uVar11;
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) - uVar11;
        piVar1 = (int *)(*(int *)(iVar7 + 0x1c) + 0x14);
        *piVar1 = *piVar1 - uVar11;
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (*(int *)(iVar7 + 0x14) == 0) {
          *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar7 + 8);
        }
      }
      iVar7 = *(int *)(*param_1 + 0x10);
    }
    if (iVar7 == 0) {
      return '\0';
    }
  } while( true );
}

