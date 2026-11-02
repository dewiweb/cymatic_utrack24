// rea decompile_all
// name: FUN_006143c0
// address: 0x6143c0
// body: available
// range: 0x6143c0-0x6147cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006143c0(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort *puVar10;
  
  uVar6 = 0;
  if (*(int *)(in_ECX + 0x16a0) != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(in_ECX + 0x16a4) + uVar6 * 2);
      bVar3 = *(byte *)(uVar6 + *(int *)(in_ECX + 0x1698));
      uVar9 = (uint)bVar3;
      uVar6 = uVar6 + 1;
      if (uVar7 == 0) {
        uVar7 = (uint)*(ushort *)(in_EDX + 2 + uVar9 * 4);
        puVar10 = (ushort *)(in_EDX + uVar9 * 4);
        iVar4 = *(int *)(in_ECX + 0x16bc);
        if ((int)(0x10 - uVar7) < iVar4) {
          uVar8 = *puVar10;
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar4 & 0x1f);
          *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
               *(undefined1 *)(in_ECX + 0x16b8);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
               *(undefined1 *)(in_ECX + 0x16b9);
          cVar1 = *(char *)(in_ECX + 0x16bc);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar7 - 0x10);
          *(ushort *)(in_ECX + 0x16b8) = uVar8 >> (0x10U - cVar1 & 0x1f);
        }
        else {
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | *puVar10 << ((byte)iVar4 & 0x1f);
          iVar4 = iVar4 + uVar7;
LAB_00614707:
          *(int *)(in_ECX + 0x16bc) = iVar4;
        }
      }
      else {
        uVar9 = (uint)(byte)(&DAT_00c00b50)[uVar9];
        uVar5 = (uint)*(ushort *)(in_EDX + 0x406 + uVar9 * 4);
        iVar2 = *(int *)(in_ECX + 0x16bc);
        if ((int)(0x10 - uVar5) < iVar2) {
          uVar8 = *(ushort *)(in_EDX + 0x404 + uVar9 * 4);
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar2 & 0x1f);
          *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
               *(undefined1 *)(in_ECX + 0x16b8);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
               *(undefined1 *)(in_ECX + 0x16b9);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(ushort *)(in_ECX + 0x16b8) = uVar8 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
          *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar5 - 0x10);
        }
        else {
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) |
               *(short *)(in_EDX + 0x404 + uVar9 * 4) << ((byte)iVar2 & 0x1f);
          *(uint *)(in_ECX + 0x16bc) = iVar2 + uVar5;
        }
        iVar2 = *(int *)(&DAT_00bfe1c0 + uVar9 * 4);
        if (iVar2 != 0) {
          uVar8 = (ushort)bVar3 - (short)*(undefined4 *)(&DAT_00c00ad0 + uVar9 * 4);
          iVar4 = *(int *)(in_ECX + 0x16bc);
          if (0x10 - iVar2 < iVar4) {
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar4 & 0x1f);
            *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
                 *(undefined1 *)(in_ECX + 0x16b8);
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
                 *(undefined1 *)(in_ECX + 0x16b9);
            *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
            *(ushort *)(in_ECX + 0x16b8) = uVar8 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
            *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + iVar2 + -0x10;
          }
          else {
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar4 & 0x1f);
            *(int *)(in_ECX + 0x16bc) = iVar4 + iVar2;
          }
        }
        uVar9 = uVar7 - 1;
        if (uVar9 < 0x100) {
          bVar3 = (&DAT_00c0085f)[uVar7];
        }
        else {
          bVar3 = (&DAT_00c00960)[uVar9 >> 7];
        }
        iVar4 = (uint)bVar3 * 4;
        puVar10 = (ushort *)(param_1 + iVar4);
        uVar7 = (uint)puVar10[1];
        iVar2 = *(int *)(in_ECX + 0x16bc);
        if ((int)(0x10 - uVar7) < iVar2) {
          uVar8 = *puVar10;
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar2 & 0x1f);
          *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
               *(undefined1 *)(in_ECX + 0x16b8);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
               *(undefined1 *)(in_ECX + 0x16b9);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(ushort *)(in_ECX + 0x16b8) = uVar8 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
          *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar7 - 0x10);
        }
        else {
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | *puVar10 << ((byte)iVar2 & 0x1f);
          *(uint *)(in_ECX + 0x16bc) = iVar2 + uVar7;
        }
        iVar2 = *(int *)(&DAT_00c00c50 + iVar4);
        if (iVar2 != 0) {
          uVar8 = (short)uVar9 - (short)*(undefined4 *)(&DAT_00bfe2b0 + iVar4);
          iVar4 = *(int *)(in_ECX + 0x16bc);
          if (iVar4 <= 0x10 - iVar2) {
            *(ushort *)(in_ECX + 0x16b8) =
                 *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar4 & 0x1f);
            iVar4 = iVar4 + iVar2;
            goto LAB_00614707;
          }
          *(ushort *)(in_ECX + 0x16b8) =
               *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar4 & 0x1f);
          *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) =
               *(undefined1 *)(in_ECX + 0x16b8);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) =
               *(undefined1 *)(in_ECX + 0x16b9);
          cVar1 = *(char *)(in_ECX + 0x16bc);
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + iVar2 + -0x10;
          *(ushort *)(in_ECX + 0x16b8) = uVar8 >> (0x10U - cVar1 & 0x1f);
        }
      }
    } while (uVar6 < *(uint *)(in_ECX + 0x16a0));
  }
  uVar6 = (uint)*(ushort *)(in_EDX + 0x402);
  iVar2 = *(int *)(in_ECX + 0x16bc);
  if (iVar2 <= (int)(0x10 - uVar6)) {
    *(ushort *)(in_ECX + 0x16b8) =
         *(ushort *)(in_ECX + 0x16b8) | *(short *)(in_EDX + 0x400) << ((byte)iVar2 & 0x1f);
    *(uint *)(in_ECX + 0x16bc) = iVar2 + uVar6;
    *(uint *)(in_ECX + 0x16b4) = (uint)*(ushort *)(in_EDX + 0x402);
    return;
  }
  uVar8 = *(ushort *)(in_EDX + 0x400);
  *(ushort *)(in_ECX + 0x16b8) = *(ushort *)(in_ECX + 0x16b8) | uVar8 << ((byte)iVar2 & 0x1f);
  *(undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x14)) = *(undefined1 *)(in_ECX + 0x16b8)
  ;
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
  *(undefined1 *)(*(int *)(in_ECX + 0x14) + *(int *)(in_ECX + 8)) = *(undefined1 *)(in_ECX + 0x16b9)
  ;
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
  *(ushort *)(in_ECX + 0x16b8) = uVar8 >> (0x10U - *(char *)(in_ECX + 0x16bc) & 0x1f);
  *(int *)(in_ECX + 0x16bc) = *(int *)(in_ECX + 0x16bc) + (uVar6 - 0x10);
  *(uint *)(in_ECX + 0x16b4) = (uint)*(ushort *)(in_EDX + 0x402);
  return;
}

