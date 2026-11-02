// rea decompile_all
// name: FUN_00687a80
// address: 0x687a80
// body: available
// range: 0x687a80-0x687d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00687a80(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  void *local_28;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00720f89;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x24) == '\0') {
    *(undefined1 *)(in_ECX + 0x24) = 1;
    local_8 = 0;
    if (((((*(int *)(in_ECX + 4) == 0) || (cVar4 = FUN_006e6420(uVar5), cVar4 == '\0')) ||
         (*(int *)(*(int *)(in_ECX + 4) + 0x18) < 1)) || (*(int *)(*(int *)(in_ECX + 4) + 0x1c) < 1)
        ) || ((cVar4 = FUN_00687a20(), cVar4 == '\0' && (*(int *)(*(int *)(in_ECX + 4) + 0xc) == 0))
             )) {
      FUN_00407fe0();
      if (*(int *)(in_ECX + 0xc) != 0) {
        FID_conflict__free(*(void **)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = 0;
        *(undefined4 *)(in_ECX + 0xc) = 0;
      }
      *(undefined4 *)(in_ECX + 0x10) = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x10);
      while (iVar2 < 4) {
        local_28 = operator_new(0x84);
        local_8._0_1_ = 1;
        uVar6 = FUN_004a4fc0(*(undefined4 *)(in_ECX + 4),in_ECX + 0x14);
        local_8 = (uint)local_8._1_3_ << 8;
        iVar2 = *(int *)(in_ECX + 0x10);
        iVar9 = iVar2 + 1;
        if (*(int *)(in_ECX + 0xc) < iVar9) {
          if (iVar9 < 0) {
            iVar9 = iVar2 + 2;
          }
          FUN_00409cf0((iVar9 >> 1) + iVar2 + 9 & 0xfffffff8);
        }
        iVar2 = *(int *)(in_ECX + 0x10);
        *(int *)(in_ECX + 0x10) = iVar2 + 1;
        *(undefined4 *)(*(int *)(in_ECX + 8) + iVar2 * 4) = uVar6;
        iVar2 = *(int *)(in_ECX + 0x10);
      }
      iVar2 = *(int *)(in_ECX + 4);
      uVar5 = 3;
      iVar9 = *(int *)(iVar2 + 0x10);
      iVar8 = *(int *)(in_ECX + 0x1c);
      if (*(int *)(in_ECX + 0x1c) < *(int *)(in_ECX + 0x20)) {
        iVar8 = *(int *)(in_ECX + 0x20);
      }
      iVar8 = iVar8 + *(int *)(in_ECX + 0x18);
      iVar10 = *(int *)(iVar2 + 0x14) - iVar8;
      iVar3 = *(int *)(iVar2 + 0x18);
      iVar2 = *(int *)(iVar2 + 0x1c) + iVar8 * 2;
      do {
        if ((uVar5 < *(uint *)(in_ECX + 0x10)) &&
           (iVar11 = *(int *)(*(int *)(in_ECX + 8) + uVar5 * 4), iVar11 != 0)) {
          puVar7 = (undefined4 *)FUN_0040de70(iVar11);
        }
        else {
          puVar7 = (undefined4 *)0x0;
        }
        if (puVar7 != (undefined4 *)0x0) {
          LOCK();
          puVar7[1] = puVar7[1] + 1;
          UNLOCK();
        }
        local_8 = CONCAT31(local_8._1_3_,2);
        if (puVar7 == (undefined4 *)0x0) break;
        if (puVar7[2] == 0) {
LAB_00687cb4:
          if (puVar7 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = puVar7 + 1;
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*puVar7)(1);
            }
          }
          break;
        }
        local_28 = (void *)(CONCAT31(local_28._1_3_,*(undefined1 *)(*(int *)(in_ECX + 4) + 0x69)) &
                           0xffffff01);
        FUN_006d1c90(local_28);
        if (puVar7[2] == 0) goto LAB_00687cb4;
        iVar11 = iVar9;
        iVar12 = iVar10;
        iVar13 = iVar8;
        iVar14 = iVar8;
        switch(uVar5) {
        case 0:
          iVar11 = iVar9 - iVar8;
          iVar14 = iVar2;
          break;
        case 1:
          iVar11 = iVar9 + iVar3;
          iVar14 = iVar2;
          break;
        case 2:
          iVar13 = iVar3;
          break;
        case 3:
          iVar12 = *(int *)(*(int *)(in_ECX + 4) + 0x1c) + *(int *)(*(int *)(in_ECX + 4) + 0x14);
          iVar13 = iVar3;
          break;
        default:
          goto switchD_00687c1b_default;
        }
        FUN_006e9790(iVar11,iVar12,iVar13,iVar14);
switchD_00687c1b_default:
        if (puVar7[2] == 0) goto LAB_00687cb4;
        if (uVar5 == 3) {
          uVar6 = *(undefined4 *)(in_ECX + 4);
        }
        else {
          uVar6 = *(undefined4 *)(*(int *)(in_ECX + 8) + 4 + uVar5 * 4);
        }
        FUN_006cfc30(uVar6);
        if (puVar7[2] == 0) goto LAB_00687cb4;
        local_8 = local_8 & 0xffffff00;
        LOCK();
        piVar1 = puVar7 + 1;
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)*puVar7)(1);
        }
        uVar5 = uVar5 - 1;
      } while (-1 < (int)uVar5);
    }
    *(undefined1 *)(in_ECX + 0x24) = 0;
  }
  ExceptionList = local_10;
  return;
}

