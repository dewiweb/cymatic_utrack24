// rea decompile_all
// name: FUN_005b6c80
// address: 0x5b6c80
// body: available
// range: 0x5b6c80-0x5b703b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6c80(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  BOOL BVar8;
  int *in_ECX;
  int iVar9;
  int *extraout_ECX;
  DWORD local_26c;
  DWORD local_268;
  DWORD local_264;
  int *local_260;
  int local_25c;
  int local_258;
  undefined1 *local_254;
  uint local_250;
  int *local_24c;
  undefined4 local_248;
  int local_244;
  int local_23c;
  LPCSTR local_238;
  int local_234;
  undefined4 local_230;
  int *local_22c;
  uint local_228;
  CHAR local_224 [264];
  CHAR local_11c [264];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00719642;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar9 = 0;
  local_250 = 0;
  local_228 = 0;
  if (0 < in_ECX[2]) {
    do {
      iVar4 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      *(undefined1 *)(*(int *)(*in_ECX + iVar4) + 8) = 0;
    } while (iVar9 < in_ECX[2]);
  }
  local_24c = (int *)0x0;
  local_248 = 0;
  local_244 = 0;
  local_8 = 0;
  FUN_0062da40();
  if (0 < local_244) {
    local_23c = local_244;
    local_22c = local_24c;
    do {
      piVar3 = (int *)(*local_22c + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      cVar2 = FUN_005b69e0();
      if (cVar2 != '\0') {
        iVar9 = 0;
        if (0 < in_ECX[2]) {
          do {
            piVar3 = *(int **)(*in_ECX + iVar9 * 4);
            if (piVar3[1] == *local_22c) {
LAB_005b6f7d:
              *(undefined1 *)(piVar3 + 2) = 1;
              piVar7 = local_22c;
              goto LAB_005b6eca;
            }
            iVar4 = FUN_0045c1e0(piVar3[1]);
            if (iVar4 == 0) goto LAB_005b6f7d;
            iVar9 = iVar9 + 1;
          } while (iVar9 < in_ECX[2]);
        }
        piVar3 = operator_new(0x10);
        piVar7 = local_22c;
        local_8._0_1_ = 1;
        local_260 = piVar3;
        local_230 = FUN_0062d940();
        local_254 = &stack0xfffffd80;
        local_8 = CONCAT31(local_8._1_3_,2);
        local_250 = local_228 | 1;
        iVar9 = *piVar7;
        piVar5 = (int *)(iVar9 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        local_228 = local_250;
        FUN_006377c0(iVar9);
        piVar5 = (int *)FUN_00637730();
        iVar9 = *piVar5;
        *piVar3 = iVar9;
        piVar5 = (int *)(iVar9 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        iVar9 = *piVar7;
        piVar3[1] = iVar9;
        piVar5 = (int *)(iVar9 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          *piVar5 = *piVar5 + 1;
          UNLOCK();
        }
        *(undefined1 *)(piVar3 + 2) = 1;
        piVar3[3] = (int)&DAT_00bfe12c;
        local_228 = local_228 & 0xfffffffd;
        piVar5 = (int *)(local_258 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8 = 0;
        local_228 = local_228 & 0xfffffffe;
        piVar5 = (int *)(local_25c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar5);
            piVar5 = extraout_ECX;
          }
        }
        uVar6 = FUN_005b6820(piVar3,piVar5);
        FUN_00411110(uVar6);
LAB_005b6eca:
        piVar7 = (int *)(*piVar7 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          *piVar7 = *piVar7 + 1;
          UNLOCK();
        }
        FUN_006377c0();
        local_8 = CONCAT31(local_8._1_3_,4);
        BVar8 = GetVolumeInformationA
                          (local_238,local_224,0x105,&local_26c,&local_268,&local_264,local_11c,
                           0x105);
        if (BVar8 == 0) {
          *(undefined1 *)(piVar3 + 2) = 0;
        }
        else {
          FUN_0045c990();
          iVar9 = piVar3[3];
          piVar3[3] = local_234;
          piVar3 = (int *)(iVar9 + -8);
          local_234 = iVar9;
          if (piVar3 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(piVar3);
            }
          }
        }
        local_8 = local_8 & 0xffffff00;
        piVar3 = (int *)(local_238 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            FID_conflict__free(piVar3);
          }
        }
      }
      local_22c = local_22c + 1;
      local_23c = local_23c + -1;
    } while (local_23c != 0);
    local_23c = 0;
  }
  iVar9 = local_244;
  iVar4 = 0;
  if (0 < local_244) {
    do {
      piVar3 = (int *)(local_24c[iVar4] + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar9);
  }
  FID_conflict__free(local_24c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

