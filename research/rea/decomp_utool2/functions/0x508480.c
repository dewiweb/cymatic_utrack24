// rea decompile_all
// name: FUN_00508480
// address: 0x508480
// body: available
// range: 0x508480-0x508896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00508480(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *_Memory;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uStack_a4;
  int *piStack_a0;
  int local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  char local_3f [36];
  char local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070818a;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x78) != 0) {
    for (iVar1 = *(int *)(in_ECX + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    }
    iVar1 = *(int *)(in_ECX + 0x84);
    *(int *)(in_ECX + 0x80) = (*(int *)(in_ECX + 0x80) / iVar1) * iVar1;
    *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x78) / iVar1;
    FUN_006e6350();
    local_68 = 0;
    if (0 < *(int *)(in_ECX + 0x88)) {
      do {
        pcVar8 = local_1b + 2;
        local_1b[2] = 0;
        uVar7 = *(int *)(in_ECX + 0x84) * local_68 + 1;
        if ((int)uVar7 < 0) {
          uVar7 = -uVar7;
          do {
            pcVar9 = pcVar8;
            pcVar8 = pcVar9 + -1;
            uVar6 = uVar7 / 10;
            *pcVar8 = (char)uVar7 + (char)uVar6 * -10 + '0';
            uVar7 = uVar6;
          } while (uVar6 != 0);
          pcVar9[-2] = '-';
        }
        else {
          do {
            pcVar8 = pcVar8 + -1;
            uVar6 = uVar7 / 10;
            *pcVar8 = (char)uVar7 + (char)uVar6 * -10 + '0';
            uVar7 = uVar6;
          } while (uVar6 != 0);
        }
        FUN_004557e0();
        pcVar8 = local_3f + 2;
        local_8 = 0;
        local_68 = local_68 + 1;
        uVar7 = *(int *)(in_ECX + 0x84) * local_68;
        local_3f[2] = 0;
        if ((int)uVar7 < 0) {
          uVar7 = -uVar7;
          do {
            pcVar9 = pcVar8;
            pcVar8 = pcVar9 + -1;
            uVar6 = uVar7 / 10;
            *pcVar8 = (char)uVar7 + (char)uVar6 * -10 + '0';
            uVar7 = uVar6;
          } while (uVar6 != 0);
          pcVar9[-2] = '-';
        }
        else {
          do {
            pcVar8 = pcVar8 + -1;
            uVar6 = uVar7 / 10;
            *pcVar8 = (char)uVar7 + (char)uVar6 * -10 + '0';
            uVar7 = uVar6;
          } while (uVar6 != 0);
        }
        FUN_004557e0();
        local_8._0_1_ = 1;
        piStack_a0 = (int *)0x50861b;
        operator_new(0x118);
        local_8._0_1_ = 2;
        piVar3 = (int *)FUN_005839d0();
        local_8._0_1_ = 1;
        piStack_a0 = (int *)0x508647;
        FUN_00683790();
        local_8._0_1_ = 3;
        piStack_a0 = (int *)0x1500;
        uStack_a4 = 0x50865c;
        FUN_00683790();
        local_8._0_1_ = 1;
        piStack_a0 = (int *)0x50866a;
        FUN_00411520();
        iVar1 = DAT_00c7ef94;
        piVar3[0x3a] = DAT_00c7ef94;
        piVar3[0x3b] = iVar1;
        FUN_006e6400(&uStack_a4);
        FUN_006ce9f0(1);
        _Memory = (int *)(local_6c + -8);
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          *_Memory = *_Memory + 1;
          UNLOCK();
        }
        piStack_a0 = (int *)0x5086b6;
        FUN_006377c0();
        FUN_00637730();
        local_8._0_1_ = 4;
        FUN_006e54f0();
        local_8._0_1_ = 1;
        piVar5 = (int *)(local_74 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piStack_a0 = &local_6c;
        uStack_a4 = 0x508709;
        FUN_00637690();
        piStack_a0 = (int *)0x508715;
        FUN_006377c0();
        piVar5 = (int *)FUN_00637730();
        local_8 = CONCAT31(local_8._1_3_,5);
        if ((undefined **)piVar3[0x1c] == ImgStripPushButton::vftable) {
          piVar4 = (int *)(*piVar5 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          LOCK();
          iVar1 = piVar3[0x1d];
          piVar3[0x1d] = *piVar5;
          UNLOCK();
          piVar5 = (int *)(iVar1 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar5;
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar5);
            }
          }
          *(undefined1 *)((int)piVar3 + 0xde) = 0;
        }
        else {
          (*(code *)((undefined **)piVar3[0x1c])[2])();
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        piVar5 = (int *)(local_78 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        if ((-(uint)(in_ECX != 0) & in_ECX + 0x70U) != 0) {
          FUN_004097d0();
        }
        (**(code **)(*piVar3 + 0x28))();
        piStack_a0 = (int *)0x5087c8;
        FUN_006e5050();
        piStack_a0 = (int *)0x5087e1;
        FUN_006e5380();
        piVar3 = (int *)(local_64 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar3);
          }
        }
        local_8 = 0xffffffff;
        if (_Memory != &DAT_00bfe124) {
          LOCK();
          iVar1 = *_Memory;
          *_Memory = *_Memory + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(_Memory);
          }
        }
      } while (local_68 < *(int *)(in_ECX + 0x88));
    }
    FUN_005088a0();
    iVar1 = *(int *)(in_ECX + 0x74);
    uVar2 = *(undefined4 *)(in_ECX + 0x84);
    *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(in_ECX + 0x80);
    *(undefined4 *)(iVar1 + 0xb0) = uVar2;
    FUN_0050ffd0();
    FUN_006e9e70();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

