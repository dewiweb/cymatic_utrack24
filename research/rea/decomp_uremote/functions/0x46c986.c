// rea decompile_all
// name: FUN_0046c986
// address: 0x46c986
// body: available
// range: 0x46c986-0x46cd38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046c986(int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int in_EAX;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar5 = 0;
  if (*(int *)(in_EAX + 0x16a0) != 0) {
    do {
      uVar12 = (uint)*(ushort *)(*(int *)(in_EAX + 0x16a4) + uVar5 * 2);
      uVar11 = (uint)*(byte *)(uVar5 + *(int *)(in_EAX + 0x1698));
      uVar5 = uVar5 + 1;
      if (uVar12 == 0) {
        iVar6 = *(int *)(in_EAX + 0x16bc);
        puVar1 = (ushort *)(param_1 + uVar11 * 4);
        uVar11 = (uint)puVar1[1];
        if ((int)(0x10 - uVar11) < iVar6) {
          uVar2 = *puVar1;
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | uVar2 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar6 = *(int *)(in_EAX + 0x16bc) + -0x10 + uVar11;
          *(ushort *)(in_EAX + 0x16b8) = uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | *puVar1 << ((byte)iVar6 & 0x1f);
          iVar6 = iVar6 + uVar11;
        }
LAB_0046cc87:
        *(int *)(in_EAX + 0x16bc) = iVar6;
      }
      else {
        uVar10 = (uint)(byte)(&DAT_00602518)[uVar11];
        iVar7 = uVar10 * 4;
        uVar8 = (uint)*(ushort *)(iVar7 + 0x406 + param_1);
        iVar9 = *(int *)(in_EAX + 0x16bc);
        if ((int)(0x10 - uVar8) < iVar9) {
          uVar2 = *(ushort *)(param_1 + 0x404 + uVar10 * 4);
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | uVar2 << ((byte)iVar9 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar9 = *(int *)(in_EAX + 0x16bc) + -0x10;
          *(ushort *)(in_EAX + 0x16b8) = uVar2 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) |
               *(short *)(param_1 + 0x404 + uVar10 * 4) << ((byte)iVar9 & 0x1f);
        }
        *(uint *)(in_EAX + 0x16bc) = iVar9 + uVar8;
        iVar9 = *(int *)(&DAT_00601ce0 + iVar7);
        if (iVar9 != 0) {
          iVar6 = uVar11 - *(int *)(&DAT_00602618 + iVar7);
          iVar7 = *(int *)(in_EAX + 0x16bc);
          if (0x10 - iVar9 < iVar7) {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar7 = *(int *)(in_EAX + 0x16bc) + -0x10;
            *(ushort *)(in_EAX + 0x16b8) =
                 (ushort)iVar6 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar6 << ((byte)iVar7 & 0x1f));
          }
          *(int *)(in_EAX + 0x16bc) = iVar7 + iVar9;
        }
        uVar11 = uVar12 - 1;
        if (uVar11 < 0x100) {
          bVar4 = (&DAT_00602317)[uVar12];
        }
        else {
          bVar4 = (&DAT_00602418)[uVar11 >> 7];
        }
        iVar7 = (uint)bVar4 * 4;
        puVar1 = (ushort *)(iVar7 + param_2);
        uVar2 = puVar1[1];
        iVar9 = *(int *)(in_EAX + 0x16bc);
        if ((int)(0x10 - (uint)uVar2) < iVar9) {
          uVar3 = *puVar1;
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | uVar3 << ((byte)iVar9 & 0x1f);
          *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
               *(undefined1 *)(in_EAX + 0x16b8);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
               *(undefined1 *)(in_EAX + 0x16b9);
          *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
          iVar9 = *(int *)(in_EAX + 0x16bc) + -0x10;
          *(ushort *)(in_EAX + 0x16b8) = uVar3 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
        }
        else {
          *(ushort *)(in_EAX + 0x16b8) =
               *(ushort *)(in_EAX + 0x16b8) | *puVar1 << ((byte)iVar9 & 0x1f);
        }
        iVar9 = iVar9 + (uint)uVar2;
        *(int *)(in_EAX + 0x16bc) = iVar9;
        iVar6 = *(int *)(&DAT_00601d58 + iVar7);
        if (iVar6 != 0) {
          iVar7 = uVar11 - *(int *)(&DAT_00602690 + iVar7);
          if (0x10 - iVar6 < iVar9) {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar7 << ((byte)iVar9 & 0x1f));
            *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
                 *(undefined1 *)(in_EAX + 0x16b8);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
                 *(undefined1 *)(in_EAX + 0x16b9);
            *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
            iVar6 = *(int *)(in_EAX + 0x16bc) + -0x10 + iVar6;
            *(ushort *)(in_EAX + 0x16b8) =
                 (ushort)iVar7 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
          }
          else {
            *(ushort *)(in_EAX + 0x16b8) =
                 *(ushort *)(in_EAX + 0x16b8) | (ushort)(iVar7 << ((byte)iVar9 & 0x1f));
            iVar6 = iVar9 + iVar6;
          }
          goto LAB_0046cc87;
        }
      }
    } while (uVar5 < *(uint *)(in_EAX + 0x16a0));
  }
  uVar2 = *(ushort *)(param_1 + 0x402);
  iVar9 = *(int *)(in_EAX + 0x16bc);
  if ((int)(0x10 - (uint)uVar2) < iVar9) {
    uVar3 = *(ushort *)(param_1 + 0x400);
    *(ushort *)(in_EAX + 0x16b8) = *(ushort *)(in_EAX + 0x16b8) | uVar3 << ((byte)iVar9 & 0x1f);
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    iVar9 = *(int *)(in_EAX + 0x16bc) + -0x10;
    *(ushort *)(in_EAX + 0x16b8) = uVar3 >> (0x10U - (char)*(int *)(in_EAX + 0x16bc) & 0x1f);
  }
  else {
    *(ushort *)(in_EAX + 0x16b8) =
         *(ushort *)(in_EAX + 0x16b8) | *(short *)(param_1 + 0x400) << ((byte)iVar9 & 0x1f);
  }
  *(uint *)(in_EAX + 0x16bc) = iVar9 + (uint)uVar2;
  *(uint *)(in_EAX + 0x16b4) = (uint)*(ushort *)(param_1 + 0x402);
  return;
}

