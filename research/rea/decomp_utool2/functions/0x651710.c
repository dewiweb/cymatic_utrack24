// rea decompile_all
// name: FUN_00651710
// address: 0x651710
// body: available
// range: 0x651710-0x651af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00651710(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int *in_ECX;
  byte *in_EDX;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  iVar10 = *(int *)(param_1 + 0x148);
  iVar9 = *in_ECX;
  iVar4 = *(int *)(param_1 + 0x144);
  bVar1 = *(byte *)((int)in_ECX + 9);
  if (((bVar1 < 9) && (iVar4 != 0)) || ((bVar1 == 0x10 && (iVar10 != 0)))) {
    param_1._0_1_ = (byte)*(undefined4 *)(param_1 + 0x13c);
    switch((char)in_ECX[2]) {
    case '\0':
      if ((bVar1 == 2) && (iVar9 != 0)) {
        iVar5 = (iVar9 - 1U >> 2) + 1;
        pbVar8 = in_EDX;
        do {
          uVar12 = (uint)*pbVar8;
          uVar6 = uVar12 & 0xc0;
          uVar11 = uVar12 & 0xc;
          uVar7 = uVar12 & 0x30;
          uVar12 = uVar12 & 3;
          *pbVar8 = (byte)((byte)(*(byte *)(((uVar11 * 4 | uVar11) << 2 | uVar11 >> 2 | uVar11) +
                                           iVar4) & 0xcf |
                                 *(byte *)((((uVar12 * 4 | uVar12) << 2 | uVar12) << 2 | uVar12) +
                                          iVar4) >> 2) >> 2 |
                          *(byte *)(((uVar7 >> 2 | uVar7) >> 2 | uVar7 * 4 | uVar7) + iVar4) & 0xc3)
                    >> 2 | *(byte *)((((uVar6 >> 2 | uVar6) >> 2 | uVar6) >> 2 | uVar6) + iVar4) &
                           0xc0;
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      cVar2 = *(char *)((int)in_ECX + 9);
      if (cVar2 == '\x04') {
        if (iVar9 != 0) {
          iVar10 = (iVar9 - 1U >> 1) + 1;
          do {
            bVar1 = *in_EDX;
            uVar6 = bVar1 & 0xf;
            *in_EDX = *(byte *)(((uint)(bVar1 >> 4) | bVar1 & 0xf0) + iVar4) & 0xf0 |
                      *(byte *)((uVar6 << 4 | uVar6) + iVar4) >> 4;
            iVar10 = iVar10 + -1;
            in_EDX = in_EDX + 1;
          } while (iVar10 != 0);
          return;
        }
      }
      else if (cVar2 == '\b') {
        if (iVar9 != 0) {
          do {
            *in_EDX = *(byte *)((uint)*in_EDX + iVar4);
            iVar9 = iVar9 + -1;
            in_EDX = in_EDX + 1;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (cVar2 == '\x10') {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[1] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)*in_EDX * 2);
          in_EDX[1] = (byte)uVar3;
          *in_EDX = (byte)((ushort)uVar3 >> 8);
          in_EDX = in_EDX + 2;
        }
      }
      break;
    case '\x02':
      if (bVar1 == 8) {
        if (iVar9 != 0) {
          do {
            *in_EDX = *(byte *)((uint)*in_EDX + iVar4);
            in_EDX[1] = *(byte *)((uint)in_EDX[1] + iVar4);
            in_EDX[2] = *(byte *)((uint)in_EDX[2] + iVar4);
            iVar9 = iVar9 + -1;
            in_EDX = in_EDX + 3;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (iVar9 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[1] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)*in_EDX * 2);
          in_EDX[1] = (byte)uVar3;
          *in_EDX = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[3] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)in_EDX[2] * 2);
          in_EDX[3] = (byte)uVar3;
          in_EDX[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[5] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)in_EDX[4] * 2);
          in_EDX[5] = (byte)uVar3;
          in_EDX[4] = (byte)((ushort)uVar3 >> 8);
          iVar9 = iVar9 + -1;
          in_EDX = in_EDX + 6;
        } while (iVar9 != 0);
        return;
      }
      break;
    case '\x04':
      if (bVar1 == 8) {
        if (iVar9 != 0) {
          do {
            *in_EDX = *(byte *)((uint)*in_EDX + iVar4);
            iVar9 = iVar9 + -1;
            in_EDX = in_EDX + 2;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (iVar9 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[1] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)*in_EDX * 2);
          in_EDX[1] = (byte)uVar3;
          *in_EDX = (byte)((ushort)uVar3 >> 8);
          iVar9 = iVar9 + -1;
          in_EDX = in_EDX + 4;
        } while (iVar9 != 0);
        return;
      }
      break;
    case '\x06':
      if (bVar1 == 8) {
        if (iVar9 != 0) {
          do {
            *in_EDX = *(byte *)((uint)*in_EDX + iVar4);
            in_EDX[1] = *(byte *)((uint)in_EDX[1] + iVar4);
            in_EDX[2] = *(byte *)((uint)in_EDX[2] + iVar4);
            iVar9 = iVar9 + -1;
            in_EDX = in_EDX + 4;
          } while (iVar9 != 0);
          return;
        }
      }
      else if (iVar9 != 0) {
        do {
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[1] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)*in_EDX * 2);
          in_EDX[1] = (byte)uVar3;
          *in_EDX = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[3] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)in_EDX[2] * 2);
          in_EDX[3] = (byte)uVar3;
          in_EDX[2] = (byte)((ushort)uVar3 >> 8);
          uVar3 = *(undefined2 *)
                   (*(int *)(iVar10 + (uint)(in_EDX[5] >> ((byte)param_1 & 0x1f)) * 4) +
                   (uint)in_EDX[4] * 2);
          in_EDX[5] = (byte)uVar3;
          in_EDX[4] = (byte)((ushort)uVar3 >> 8);
          iVar9 = iVar9 + -1;
          in_EDX = in_EDX + 8;
        } while (iVar9 != 0);
        return;
      }
    }
  }
  return;
}

