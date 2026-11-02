// rea decompile_all
// name: FUN_005afbe0
// address: 0x5afbe0
// body: available
// range: 0x5afbe0-0x5afea1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005afbe0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071874c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004eb7e0(1);
  piVar3 = in_ECX + 0x4c;
  *in_ECX = WelcomeWizard::vftable;
  in_ECX[0x1c] = WelcomeWizard::vftable;
  *piVar3 = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_18[0] = operator_new(0x810);
  local_8._0_1_ = 2;
  uVar1 = FUN_005aee90(in_ECX);
  local_8._0_1_ = 1;
  iVar2 = in_ECX[0x4e] + 1;
  if ((int)in_ECX[0x4d] < iVar2) {
    FUN_00409cf0(iVar2 / 2 + in_ECX[0x4e] + 9 & 0xfffffff8);
  }
  iVar2 = in_ECX[0x4e];
  in_ECX[0x4e] = iVar2 + 1;
  *(undefined4 *)(*piVar3 + iVar2 * 4) = uVar1;
  local_18[0] = operator_new(0x228);
  local_8._0_1_ = 3;
  uVar1 = FUN_005ae860(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = in_ECX[0x4e] + 1;
  if ((int)in_ECX[0x4d] < iVar2) {
    FUN_00409cf0(iVar2 / 2 + in_ECX[0x4e] + 9 & 0xfffffff8);
  }
  iVar2 = in_ECX[0x4e];
  in_ECX[0x4e] = iVar2 + 1;
  *(undefined4 *)(*piVar3 + iVar2 * 4) = uVar1;
  local_18[0] = (void *)0x0;
  if (0 < (int)in_ECX[0x4e]) {
    do {
      if ((local_18[0] < (void *)in_ECX[0x4e]) &&
         (iVar2 = *(int *)(in_ECX[0x4c] + (int)local_18[0] * 4), iVar2 != 0)) {
        iVar4 = -1;
        if (*(undefined4 **)(iVar2 + 0xc) != in_ECX) {
          if (*(undefined4 **)(iVar2 + 0xc) == (undefined4 *)0x0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(iVar2);
          }
          *(undefined4 **)(iVar2 + 0xc) = in_ECX;
          if ((*(byte *)(iVar2 + 0x68) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)(iVar2 + 0x69) & 1) == 0) && (iVar4 = in_ECX[0xc], 0 < iVar4)) {
            do {
              if ((*(byte *)(*(int *)(in_ECX[10] + -4 + iVar4 * 4) + 0x69) & 1) == 0) break;
              iVar4 = iVar4 + -1;
            } while (0 < iVar4);
          }
          FUN_00410380(iVar4,iVar2);
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      local_18[0] = (void *)((int)local_18[0] + 1);
    } while ((int)local_18[0] < (int)in_ECX[0x4e]);
  }
  in_ECX[0x4f] = 0;
  FUN_0045c990(&DAT_007485cc);
  local_8._0_1_ = 4;
  FUN_004eabf0(0,local_18,1);
  local_8._0_1_ = 1;
  piVar3 = (int *)((int)local_18[0] - 8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990(&DAT_007485c4);
  local_8._0_1_ = 5;
  FUN_004eabf0(1,local_18,1);
  local_8._0_1_ = 1;
  piVar3 = (int *)((int)local_18[0] - 8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("Finish");
  local_8._0_1_ = 6;
  FUN_004eabf0(2,local_18,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar3 = (int *)((int)local_18[0] - 8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_005afa40(0);
  ExceptionList = local_10;
  return;
}

