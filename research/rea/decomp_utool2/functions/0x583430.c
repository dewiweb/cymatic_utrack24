// rea decompile_all
// name: FUN_00583430
// address: 0x583430
// body: available
// range: 0x583430-0x583728 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00583430(void)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int *piVar10;
  int **ppiVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *in_ECX;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float fVar19;
  undefined4 **ppuVar20;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int *local_1c;
  float local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712dfa;
  local_10 = ExceptionList;
  uVar9 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = (undefined4 *)0x0;
  local_20 = in_ECX;
  if (*(char *)(in_ECX + 0x3c) == '\0') {
    operator_new(0x28);
    piVar10 = (int *)FUN_00468990(uVar9);
    local_14 = piVar10;
    if (piVar10 != (int *)0x0) {
      LOCK();
      piVar10[1] = piVar10[1] + 1;
      UNLOCK();
    }
    ppiVar11 = &local_14;
    bVar8 = false;
    bVar7 = false;
    bVar6 = true;
  }
  else {
    operator_new(0x28);
    piVar10 = (int *)FUN_00468990(uVar9);
    if (piVar10 != (int *)0x0) {
      LOCK();
      piVar10[1] = piVar10[1] + 1;
      UNLOCK();
    }
    local_8 = 0;
    local_24 = (undefined4 *)0x1;
    local_14 = piVar10;
    ppiVar11 = (int **)FUN_00680580(&local_28);
    bVar8 = true;
    bVar7 = true;
    bVar6 = false;
  }
  piVar4 = *ppiVar11;
  *ppiVar11 = (int *)0x0;
  local_8 = 2;
  local_1c = piVar4;
  if ((bVar6) && (local_14 != (int *)0x0)) {
    LOCK();
    piVar13 = local_14 + 1;
    iVar17 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar17 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  if ((bVar7) && (local_28 != (undefined4 *)0x0)) {
    LOCK();
    piVar13 = local_28 + 1;
    iVar17 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar17 == 1) {
      (**(code **)*local_28)(1);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  if ((bVar8) && (piVar10 != (int *)0x0)) {
    LOCK();
    piVar13 = piVar10 + 1;
    iVar17 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar17 == 1) {
      (**(code **)*piVar10)(1);
    }
  }
  puVar14 = local_20;
  iVar17 = local_20[6] + -10;
  local_18 = (float)(int)local_20[7] * 0.6;
  puVar12 = (undefined4 *)FUN_00683640(&local_24);
  uVar5 = puVar14[0x45];
  local_14 = puVar14 + 0x45;
  puVar14[0x45] = *puVar12;
  *puVar12 = uVar5;
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar10 = local_24 + 1;
    iVar2 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_24)(1);
    }
  }
  piVar10 = local_14;
  fVar19 = (float)iVar17;
  if (10.0 < fVar19) {
    local_20 = puVar14 + 0x22;
    FUN_006831f0(local_20);
    if ((float)iVar17 < fVar19) {
      do {
        local_18 = ((float)iVar17 / fVar19) * local_18;
        piVar13 = (int *)FUN_00683640(&local_2c);
        iVar2 = *piVar10;
        *piVar10 = *piVar13;
        *piVar13 = iVar2;
        if (local_2c != (undefined4 *)0x0) {
          LOCK();
          piVar13 = local_2c + 1;
          iVar2 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_2c)(1);
          }
        }
        if (*(int *)(*piVar10 + 8) == 0) {
          ppuVar20 = &local_30;
          FUN_004681b0(ppuVar20,piVar10);
          puVar14 = (undefined4 *)FUN_004682f0(ppuVar20,piVar10);
          uVar5 = *(undefined4 *)(*local_14 + 8);
          *(undefined4 *)(*local_14 + 8) = *puVar14;
          *puVar14 = uVar5;
          piVar10 = local_14;
          if (local_30 != (undefined4 *)0x0) {
            LOCK();
            piVar13 = local_30 + 1;
            iVar2 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*local_30)(1);
              piVar10 = local_14;
            }
          }
        }
        fVar18 = (float10)(**(code **)(**(int **)(*piVar10 + 8) + 0x14))(local_20);
        iVar2 = *piVar10;
        local_24 = (undefined4 *)(float)fVar18;
        puVar14 = local_24;
        if (*(float *)(iVar2 + 0x1c) != 0.0) {
          iVar16 = 0;
          pbVar15 = (byte *)*local_20;
          while( true ) {
            while( true ) {
              bVar3 = *pbVar15;
              pbVar15 = pbVar15 + 1;
              if (-1 < (char)bVar3) break;
              if ((*pbVar15 & 0xc0) != 0x80) goto LAB_005836c1;
              do {
                pbVar1 = pbVar15 + 1;
                pbVar15 = pbVar15 + 1;
              } while ((*pbVar1 & 0xc0) == 0x80);
              iVar16 = iVar16 + 1;
            }
            if (bVar3 == 0) break;
LAB_005836c1:
            iVar16 = iVar16 + 1;
          }
          puVar14 = (undefined4 *)((float)iVar16 * *(float *)(iVar2 + 0x1c) + (float)local_24);
        }
        fVar19 = *(float *)(iVar2 + 0x14) * (float)puVar14 * *(float *)(iVar2 + 0x18);
        piVar10 = local_14;
      } while ((float)iVar17 < fVar19);
    }
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar10 = piVar4 + 1;
    iVar17 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar17 == 1) {
      (**(code **)*piVar4)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

