// rea decompile_all
// name: FUN_00510590
// address: 0x510590
// body: available
// range: 0x510590-0x510a46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00510590(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int extraout_EDX;
  int iVar5;
  undefined1 auStack_110 [8];
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  int local_80;
  int local_78;
  int local_74;
  undefined4 *local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708ba0;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54._0_4_ = 0;
  local_54._4_4_ = 0xc0500000;
  uStack_4c = 0;
  uStack_48 = 0xc0440000;
  local_44 = 0;
  uStack_40 = 0xc03e0000;
  uStack_3c = 0;
  uStack_38 = 0xc0340000;
  local_34 = 0;
  uStack_30 = 0xc02e0000;
  uStack_2c = 0;
  uStack_28 = 0xc0240000;
  local_24 = 0;
  uStack_20 = 0xc0140000;
  uStack_1c = 0;
  uStack_18 = 0;
  iVar2 = (int)((float)*(int *)(in_ECX + 0x78) * 0.8);
  FUN_0057f4a0();
  local_8 = extraout_EDX;
  if (*(char *)(param_1 + 2) != (char)extraout_EDX) {
    *(char *)(param_1 + 2) = (char)extraout_EDX;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_5c = 0;
  local_60 = 0;
  do {
    iStack_100 = 0x510652;
    iVar3 = FUN_00510c80();
    if ((local_5c == 0) || ((float)iVar3 + (float)local_64[5] < (float)local_5c)) {
      FUN_00635260();
      local_8._0_1_ = 1;
      if (local_5c == 0) {
        iStack_100 = 0x5106aa;
        FUN_0045c990();
        iVar5 = local_58;
        local_58 = local_74;
        local_74 = iVar5;
        piVar4 = (int *)(iVar5 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            iStack_100 = 0x5106d7;
            FID_conflict__free(piVar4);
          }
        }
      }
      fVar1 = (float)local_64[5];
      iStack_100 = 0x51074f;
      FUN_0045c990();
      local_8._0_1_ = 2;
      iStack_100 = 0x51075d;
      FUN_0057f430();
      iStack_100 = 0x510764;
      FUN_00684c50();
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar4 = (int *)(local_78 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          iStack_100 = 0x510789;
          FID_conflict__free(piVar4);
        }
      }
      if ((float)*(int *)(in_ECX + 0x78) <
          (float)(*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x78))) {
        iStack_100 = 0x5107e2;
        (**(code **)(*(int *)*param_1 + 0x50))();
      }
      if ((float)*(int *)(in_ECX + 0x78) <
          (float)(*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x78))) {
        iStack_100 = 0x51083b;
        (**(code **)(*(int *)*param_1 + 0x50))();
      }
      if ((local_5c != 0) && (-20.0 <= (double)(&local_54)[local_60])) {
        iVar5 = 1;
        do {
          if ((float)(*(int *)(in_ECX + 0x78) + 4) <
              (float)((*(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x78)) + -4)) {
            iStack_100 = 0x5108f9;
            (**(code **)(*(int *)*param_1 + 0x50))();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 5);
      }
      iStack_100 = 0x51091c;
      FUN_0045c990();
      local_8._0_1_ = 3;
      iStack_100 = 0x51092a;
      FUN_0057f430();
      iStack_100 = 0x510931;
      FUN_00684c50();
      local_8._0_1_ = 1;
      piVar4 = (int *)(local_80 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          iStack_100 = 0x510956;
          FID_conflict__free(piVar4);
        }
      }
      uStack_108 = 0x510972;
      iStack_104 = (int)((float)iVar3 - fVar1 * 0.5);
      iStack_100 = iVar2;
      FUN_00472d90();
      iStack_100 = 0x22;
      FUN_0040e4d0(auStack_110);
      FUN_006830c0(&local_58);
      uStack_108 = 0x5109b3;
      iStack_104 = (int)((float)iVar3 - fVar1 * 0.5);
      iStack_100 = iVar2;
      FUN_00472d90();
      iStack_100 = 0x21;
      FUN_0040e4d0(auStack_110);
      FUN_006830c0(&local_58);
      local_8 = (uint)local_8._1_3_ << 8;
      piVar4 = (int *)(local_58 + -8);
      local_5c = iVar3;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          iStack_100 = 0x5109fe;
          FID_conflict__free(piVar4);
        }
      }
    }
    local_60 = local_60 + 1;
  } while (local_60 < 8);
  if (local_64 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_64 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      iStack_100 = 0x510a29;
      (**(code **)*local_64)();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

