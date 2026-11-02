// rea decompile_all
// name: FUN_006d4600
// address: 0x6d4600
// body: available
// range: 0x6d4600-0x6d49a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d4600(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *in_ECX;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727296;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar13 = in_ECX + 0x3e;
  iVar14 = 2;
  do {
    puVar1 = (undefined4 *)*piVar13;
    if (puVar1 != (undefined4 *)0x0) {
      *piVar13 = 0;
      (**(code **)*puVar1)(1,uVar6);
    }
    piVar13 = piVar13 + -1;
    iVar14 = iVar14 + -1;
  } while (-1 < iVar14);
  local_8 = 0;
  if ((*(char *)((int)in_ECX + 0x71) == '\0') ||
     (((*(byte *)(in_ECX + 0x1a) & 1) == 0 && (cVar5 = FUN_006e6420(), cVar5 != '\0')))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_8 = 0xffffffff;
  if (!bVar4) {
    iVar14 = FUN_006e9580();
    if ((*(byte *)(in_ECX + 0x3a) & 1) != 0) {
      puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar14 + 0x34) + 8))(1);
      puVar1 = (undefined4 *)in_ECX[0x3c];
      if ((puVar1 != puVar7) && (in_ECX[0x3c] = (int)puVar7, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    if ((*(byte *)(in_ECX + 0x3a) & 2) != 0) {
      puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar14 + 0x34) + 8))(2);
      puVar1 = (undefined4 *)in_ECX[0x3d];
      if ((puVar1 != puVar7) && (in_ECX[0x3d] = (int)puVar7, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    if ((*(byte *)(in_ECX + 0x3a) & 4) != 0) {
      puVar7 = (undefined4 *)(**(code **)(*(int *)(iVar14 + 0x34) + 8))(4);
      puVar1 = (undefined4 *)in_ECX[0x3e];
      if ((puVar1 != puVar7) && (in_ECX[0x3e] = (int)puVar7, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    piVar13 = in_ECX + 0x3c;
    local_18 = 3;
    do {
      piVar2 = (int *)*piVar13;
      if (piVar2 != (int *)0x0) {
        if (in_ECX[0x42] == 0) {
          puVar7 = operator_new(8);
          *puVar7 = juce::DocumentWindow::ButtonListenerProxy::vftable;
          puVar7[1] = in_ECX;
          puVar1 = (undefined4 *)in_ECX[0x42];
          if ((puVar1 != puVar7) && (in_ECX[0x42] = (int)puVar7, puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
        }
        iVar14 = in_ECX[0x42];
        if (iVar14 != 0) {
          piVar8 = (int *)piVar2[0x23];
          piVar12 = piVar8 + piVar2[0x25];
          for (; piVar8 != piVar12; piVar8 = piVar8 + 1) {
            if (iVar14 == *piVar8) goto LAB_006d47dc;
          }
          iVar3 = piVar2[0x25];
          iVar10 = iVar3 + 1;
          if (piVar2[0x24] < iVar10) {
            if (iVar10 < 0) {
              iVar10 = iVar3 + 2;
            }
            FUN_00409cf0((iVar10 >> 1) + iVar3 + 9 & 0xfffffff8);
          }
          iVar3 = piVar2[0x25];
          piVar2[0x25] = iVar3 + 1;
          piVar12 = (int *)(piVar2[0x23] + iVar3 * 4);
          if (piVar12 != (int *)0x0) {
            *piVar12 = iVar14;
          }
        }
LAB_006d47dc:
        *(byte *)(piVar2 + 0x1a) = *(byte *)(piVar2 + 0x1a) & 0xdf;
        (**(code **)(*piVar2 + 0x28))(1);
        piVar12 = (int *)piVar2[3];
        iVar14 = -1;
        if (piVar12 != in_ECX) {
          if (piVar12 == (int *)0x0) {
            FUN_006cfd60();
          }
          else {
            piVar11 = (int *)piVar12[10];
            piVar8 = piVar11 + piVar12[0xc];
            for (; piVar11 != piVar8; piVar11 = piVar11 + 1) {
              if (piVar2 == (int *)*piVar11) {
                FUN_006cf0a0((int)piVar11 - piVar12[10] >> 2,1,1);
                goto LAB_006d483f;
              }
            }
            FUN_006cf0a0(0xffffffff,1,1);
          }
LAB_006d483f:
          piVar2[3] = (int)in_ECX;
          if ((*(byte *)(piVar2 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar2 + 0x69) & 1) == 0) && (iVar14 = in_ECX[0xc], 0 < iVar14)) {
            piVar12 = (int *)(in_ECX[10] + (iVar14 + -1) * 4);
            do {
              if ((*(byte *)(*piVar12 + 0x69) & 1) == 0) break;
              iVar14 = iVar14 + -1;
              piVar12 = piVar12 + -1;
            } while (0 < iVar14);
          }
          FUN_00410380(iVar14,piVar2);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      piVar13 = piVar13 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    piVar13 = (int *)in_ECX[0x3e];
    if (piVar13 != (int *)0x0) {
      iVar14 = piVar13[0x20] + 1;
      if ((piVar13[0x1f] < iVar14) &&
         (uVar6 = piVar13[0x20] + 9 + iVar14 / 2 & 0xfffffff8, piVar13[0x1f] != uVar6)) {
        if ((int)uVar6 < 1) {
          FID_conflict__free((void *)piVar13[0x1e]);
          piVar13[0x1e] = 0;
        }
        else if (piVar13[0x1e] == 0) {
          iVar14 = FUN_004c554b();
          piVar13[0x1e] = iVar14;
        }
        else {
          iVar14 = FUN_004c553b(piVar13[0x1e],uVar6 * 0xc);
          piVar13[0x1e] = iVar14;
        }
        piVar13[0x1f] = uVar6;
      }
      iVar14 = piVar13[0x20];
      piVar13[0x20] = iVar14 + 1;
      puVar1 = (undefined4 *)(piVar13[0x1e] + iVar14 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0x10073;
        puVar1[1] = 4;
        puVar1[2] = 0;
      }
      (**(code **)(*piVar13 + 0x40))();
    }
  }
  (**(code **)(*in_ECX + 0xb0))();
  (**(code **)(*in_ECX + 0x84))();
  if ((*(byte *)(in_ECX + 0x1a) & 1) != 0) {
    uVar15 = 0;
    uVar9 = (**(code **)(*in_ECX + 0xb4))(0);
    FUN_006e9aa0(uVar9,uVar15);
    if (((*(byte *)(in_ECX + 0x1a) & 1) != 0) && (iVar14 = FUN_006d1d80(), iVar14 != 0)) {
      *(int *)(iVar14 + 0x1c) = in_ECX[0x36];
    }
  }
  ExceptionList = local_10;
  return;
}

