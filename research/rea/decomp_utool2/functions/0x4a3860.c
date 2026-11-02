// rea decompile_all
// name: FUN_004a3860
// address: 0x4a3860
// body: available
// range: 0x4a3860-0x4a3c35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a3860(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int in_ECX;
  int iVar10;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int iVar11;
  uint uVar12;
  undefined1 local_4c [16];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00703605;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar11 = -*(int *)(in_ECX + 0x14);
  local_28 = 0;
  local_8 = 0;
  local_14 = iVar11;
  if (*(int *)(in_ECX + 0xc) == 0) {
    iVar10 = FUN_006cf9c0(local_4c);
    local_20 = *(int *)(iVar10 + 0xc);
  }
  else {
    local_20 = *(int *)(*(int *)(in_ECX + 0xc) + 0x1c);
  }
  local_8 = 0xffffffff;
  local_20 = local_20 + iVar11;
  iVar10 = *(int *)(in_ECX + 0x88);
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    *(undefined1 *)(*(int *)(*(int *)(in_ECX + 0x80) + iVar10 * 4) + 0xc) = 0;
  }
  piVar9 = *(int **)(*(int *)(in_ECX + 0x7c) + 0x9c);
  if ((piVar9 == (int *)0x0) || (*(char *)(*(int *)(in_ECX + 0x7c) + 0xae) != '\0')) {
    iVar5 = 0;
  }
  else {
    iVar5 = -piVar9[7];
  }
  while ((local_18 = piVar9, piVar9 != (int *)0x0 && (iVar5 < local_20))) {
    local_28 = iVar5 + piVar9[7];
    if (iVar11 <= local_28) {
      iVar11 = *(int *)(in_ECX + 0x88) + -1;
      if (-1 < iVar11) {
        do {
          iVar10 = *(int *)(*(int *)(in_ECX + 0x80) + iVar11 * 4);
          if (*(int *)(iVar10 + 8) == piVar9[0xb]) {
            *(undefined1 *)(iVar10 + 0xc) = 1;
            iVar11 = local_14;
            goto LAB_004a3b0e;
          }
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
      piVar6 = (int *)(**(code **)(*piVar9 + 0x1c))(uVar4);
      iVar11 = local_14;
      if (piVar6 != (int *)0x0) {
        local_1c = operator_new(0x10);
        local_8 = 1;
        local_24 = piVar9[0xb];
        if (piVar6[0x19] == 0) {
          puVar7 = operator_new(0xc);
          *puVar7 = juce::ReferenceCountedObject::vftable;
          piVar1 = puVar7 + 1;
          *piVar1 = 0;
          *puVar7 = juce::WeakReference<juce::Component,juce::ReferenceCountedObject>::SharedPointer
                    ::vftable;
          puVar7[2] = piVar6;
          if ((undefined4 *)piVar6[0x19] != puVar7) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            puVar2 = (undefined4 *)piVar6[0x19];
            piVar6[0x19] = (int)puVar7;
            if (puVar2 != (undefined4 *)0x0) {
              LOCK();
              piVar1 = puVar2 + 1;
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)*puVar2)(1);
              }
            }
          }
        }
        iVar11 = piVar6[0x19];
        *local_1c = iVar11;
        if (iVar11 != 0) {
          LOCK();
          *(int *)(iVar11 + 4) = *(int *)(iVar11 + 4) + 1;
          UNLOCK();
        }
        local_1c[1] = (int)piVar9;
        local_1c[2] = local_24;
        *(undefined1 *)(local_1c + 3) = 1;
        local_8 = 0xffffffff;
        iVar11 = *(int *)(in_ECX + 0x88);
        iVar10 = iVar11 + 1;
        if ((int)*(uint *)(in_ECX + 0x84) < iVar10) {
          if (iVar10 < 0) {
            iVar10 = iVar11 + 2;
          }
          uVar12 = iVar11 + 9 + (iVar10 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0x84) != uVar12) {
            if ((int)uVar12 < 1) {
              FID_conflict__free(*(void **)(in_ECX + 0x80));
              *(undefined4 *)(in_ECX + 0x80) = 0;
            }
            else if (*(int *)(in_ECX + 0x80) == 0) {
              uVar8 = FUN_004c554b();
              *(undefined4 *)(in_ECX + 0x80) = uVar8;
            }
            else {
              uVar8 = FUN_004c553b(*(int *)(in_ECX + 0x80),uVar12 * 4);
              *(undefined4 *)(in_ECX + 0x80) = uVar8;
            }
            *(uint *)(in_ECX + 0x84) = uVar12;
          }
        }
        iVar11 = *(int *)(in_ECX + 0x88);
        *(int *)(in_ECX + 0x88) = iVar11 + 1;
        *(int **)(*(int *)(in_ECX + 0x80) + iVar11 * 4) = local_1c;
        (**(code **)(*piVar6 + 0x28))(1);
        iVar10 = -1;
        iVar11 = local_14;
        if (piVar6[3] != in_ECX) {
          if (piVar6[3] == 0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(piVar6);
          }
          piVar6[3] = in_ECX;
          if ((*(byte *)(piVar6 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar6 + 0x69) & 1) == 0) &&
             (iVar10 = *(int *)(in_ECX + 0x30), 0 < iVar10)) {
            piVar9 = (int *)(*(int *)(in_ECX + 0x28) + (iVar10 + -1) * 4);
            do {
              if ((*(byte *)(*piVar9 + 0x69) & 1) == 0) break;
              iVar10 = iVar10 + -1;
              piVar9 = piVar9 + -1;
            } while (0 < iVar10);
          }
          FUN_00410380(iVar10,piVar6);
          FUN_006cedf0();
          FUN_006cef00();
          iVar11 = local_14;
        }
      }
    }
LAB_004a3b0e:
    piVar9 = (int *)FUN_0068f9c0(1);
    iVar5 = local_28;
    iVar10 = extraout_ECX;
  }
  iVar11 = *(int *)(in_ECX + 0x88);
  do {
    while( true ) {
      iVar11 = iVar11 + -1;
      if (iVar11 < 0) {
        ExceptionList = local_10;
        return;
      }
      piVar9 = *(int **)(*(int *)(in_ECX + 0x80) + iVar11 * 4);
      if (*piVar9 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar9 + 8);
      }
      do {
        if (iVar5 == 0) goto LAB_004a3b61;
        iVar5 = *(int *)(iVar5 + 0xc);
      } while (iVar5 != in_ECX);
      if ((char)piVar9[3] != '\0') break;
LAB_004a3beb:
      cVar3 = FUN_004a3f80();
      iVar10 = extraout_ECX_03;
      if (cVar3 == '\0') {
LAB_004a3b61:
        FUN_004ad860(iVar11,iVar10);
        iVar10 = extraout_ECX_00;
      }
      else if (*piVar9 == 0) {
        FUN_006e9790(uRam00000010,uRam00000014,0,0);
        iVar10 = extraout_ECX_05;
      }
      else {
        iVar10 = *(int *)(*piVar9 + 8);
        FUN_006e9790(*(undefined4 *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14),0,0);
        iVar10 = extraout_ECX_04;
      }
    }
    FUN_00690520(&local_3c,0);
    local_30 = *(int *)(piVar9[1] + 0x1c);
    if ((local_38 + local_30 < local_14) || (local_20 <= local_38)) goto LAB_004a3beb;
    if (*piVar9 == 0) {
      FUN_006e9790(local_3c,local_38,local_34,local_30);
      iVar10 = extraout_ECX_02;
    }
    else {
      FUN_006e9790(local_3c,local_38,local_34,local_30);
      iVar10 = extraout_ECX_01;
    }
  } while( true );
}

