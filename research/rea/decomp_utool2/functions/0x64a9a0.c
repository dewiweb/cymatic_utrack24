// rea decompile_all
// name: FUN_0064a9a0
// address: 0x64a9a0
// body: available
// range: 0x64a9a0-0x64ac8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64ac88 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a9a0(void)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  int in_ECX;
  int iVar20;
  int in_EDX;
  uint uVar21;
  int iVar22;
  int local_8;
  
  if ((in_ECX != 0) && (in_EDX != 0)) {
    FUN_0064ac90();
    if ((*(byte *)(in_EDX + 8) & 8) == 0) {
      if (*(char *)(in_EDX + 0x19) == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
    }
    else {
      FUN_00648ac0(*(undefined2 *)(in_EDX + 0x14));
    }
    if ((*(byte *)(in_EDX + 8) & 0x10) != 0) {
      if (((*(uint *)(in_ECX + 0x30) & 0x80000) != 0) && (*(char *)(in_EDX + 0x19) == '\x03')) {
        uVar21 = (uint)*(ushort *)(in_EDX + 0x16);
        iVar20 = 0;
        if ((uVar21 != 0) && (0x1f < uVar21)) {
          iVar22 = *(int *)(in_EDX + 0x9c);
          do {
            pcVar1 = (char *)(iVar22 + iVar20);
            cVar5 = pcVar1[1];
            cVar6 = pcVar1[2];
            cVar7 = pcVar1[3];
            cVar8 = pcVar1[4];
            cVar9 = pcVar1[5];
            cVar10 = pcVar1[6];
            cVar11 = pcVar1[7];
            cVar12 = pcVar1[8];
            cVar13 = pcVar1[9];
            cVar14 = pcVar1[10];
            cVar15 = pcVar1[0xb];
            cVar16 = pcVar1[0xc];
            cVar17 = pcVar1[0xd];
            cVar18 = pcVar1[0xe];
            cVar19 = pcVar1[0xf];
            pcVar2 = (char *)(iVar22 + iVar20);
            *pcVar2 = -1 - *pcVar1;
            pcVar2[1] = -1 - cVar5;
            pcVar2[2] = -1 - cVar6;
            pcVar2[3] = -1 - cVar7;
            pcVar2[4] = -1 - cVar8;
            pcVar2[5] = -1 - cVar9;
            pcVar2[6] = -1 - cVar10;
            pcVar2[7] = -1 - cVar11;
            pcVar2[8] = -1 - cVar12;
            pcVar2[9] = -1 - cVar13;
            pcVar2[10] = -1 - cVar14;
            pcVar2[0xb] = -1 - cVar15;
            pcVar2[0xc] = -1 - cVar16;
            pcVar2[0xd] = -1 - cVar17;
            pcVar2[0xe] = -1 - cVar18;
            pcVar2[0xf] = -1 - cVar19;
            pcVar1 = (char *)(iVar22 + 0x10 + iVar20);
            cVar5 = pcVar1[1];
            cVar6 = pcVar1[2];
            cVar7 = pcVar1[3];
            cVar8 = pcVar1[4];
            cVar9 = pcVar1[5];
            cVar10 = pcVar1[6];
            cVar11 = pcVar1[7];
            cVar12 = pcVar1[8];
            cVar13 = pcVar1[9];
            cVar14 = pcVar1[10];
            cVar15 = pcVar1[0xb];
            cVar16 = pcVar1[0xc];
            cVar17 = pcVar1[0xd];
            cVar18 = pcVar1[0xe];
            cVar19 = pcVar1[0xf];
            pcVar2 = (char *)(iVar22 + 0x10 + iVar20);
            *pcVar2 = -1 - *pcVar1;
            pcVar2[1] = -1 - cVar5;
            pcVar2[2] = -1 - cVar6;
            pcVar2[3] = -1 - cVar7;
            pcVar2[4] = -1 - cVar8;
            pcVar2[5] = -1 - cVar9;
            pcVar2[6] = -1 - cVar10;
            pcVar2[7] = -1 - cVar11;
            pcVar2[8] = -1 - cVar12;
            pcVar2[9] = -1 - cVar13;
            pcVar2[10] = -1 - cVar14;
            pcVar2[0xb] = -1 - cVar15;
            pcVar2[0xc] = -1 - cVar16;
            pcVar2[0xd] = -1 - cVar17;
            pcVar2[0xe] = -1 - cVar18;
            pcVar2[0xf] = -1 - cVar19;
            iVar20 = iVar20 + 0x20;
          } while (iVar20 < (int)(uVar21 & 0xffffffe0));
        }
        if (iVar20 < (int)uVar21) {
          iVar22 = *(int *)(in_EDX + 0x9c);
          do {
            pbVar3 = (byte *)(iVar22 + iVar20);
            *pbVar3 = ~*pbVar3;
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)uVar21);
        }
      }
      FUN_00648010(in_EDX + 0xa0,*(undefined2 *)(in_EDX + 0x16),*(undefined1 *)(in_EDX + 0x19));
    }
    if ((*(byte *)(in_EDX + 8) & 0x20) != 0) {
      FUN_00647e30(*(undefined1 *)(in_EDX + 0x19));
    }
    if ((*(byte *)(in_EDX + 8) & 0x40) != 0) {
      FUN_00647d60(*(undefined2 *)(in_EDX + 0x14));
    }
    if ((*(uint *)(in_EDX + 8) & 0x100) != 0) {
      FUN_00647840(*(undefined4 *)(in_EDX + 0xb8),*(undefined1 *)(in_EDX + 0xbc));
    }
    if ((*(uint *)(in_EDX + 8) & 0x400) != 0) {
      FUN_00647570(*(undefined4 *)(in_EDX + 0xd4),*(undefined4 *)(in_EDX + 0xd8),
                   *(undefined1 *)(in_EDX + 0xe4),*(undefined1 *)(in_EDX + 0xe5),
                   *(undefined4 *)(in_EDX + 0xdc),*(undefined4 *)(in_EDX + 0xe0));
    }
    if ((*(uint *)(in_EDX + 8) & 0x4000) != 0) {
      FUN_006474b0(*(undefined4 *)(in_EDX + 0x100),*(undefined4 *)(in_EDX + 0x104));
    }
    if ((*(byte *)(in_EDX + 8) & 0x80) != 0) {
      FUN_006473f0(*(undefined4 *)(in_EDX + 0xc4),*(undefined1 *)(in_EDX + 200));
    }
    if ((*(uint *)(in_EDX + 8) & 0x200) != 0) {
      FUN_00647310();
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x200;
    }
    if (((*(uint *)(in_EDX + 8) & 0x2000) != 0) && (iVar20 = 0, 0 < *(int *)(in_EDX + 0xf8))) {
      do {
        FUN_00648440();
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)(in_EDX + 0xf8));
    }
    local_8 = 0;
    if (0 < *(int *)(in_EDX + 0x80)) {
      iVar20 = *(int *)(in_EDX + 0x88);
      iVar22 = 0;
      do {
        iVar4 = *(int *)(iVar22 + iVar20);
        if (iVar4 < 1) {
          if (iVar4 == 0) {
            FUN_00647b60(*(undefined4 *)(iVar22 + 8 + iVar20),iVar20,0);
            iVar20 = *(int *)(in_EDX + 0x88);
            *(undefined4 *)(iVar22 + iVar20) = 0xfffffffe;
          }
          else if (iVar4 == -1) {
            FUN_00647c80(*(undefined4 *)(iVar22 + 8 + iVar20),iVar20);
            goto LAB_0064ac4e;
          }
        }
        else {
          FUN_00647900(*(undefined4 *)(iVar22 + 4 + iVar20),*(undefined4 *)(iVar22 + 0x14 + iVar20),
                       *(undefined4 *)(iVar22 + 0x18 + iVar20),*(undefined4 *)(iVar22 + 8 + iVar20))
          ;
LAB_0064ac4e:
          iVar20 = *(int *)(in_EDX + 0x88);
          *(undefined4 *)(iVar22 + iVar20) = 0xfffffffd;
        }
        iVar22 = iVar22 + 0x1c;
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(in_EDX + 0x80));
    }
    FUN_0064add0(2);
  }
  return;
}

