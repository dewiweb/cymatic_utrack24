// rea decompile_all
// name: FUN_00177cb4
// address: 0x177cb4
// body: available
// range: 0x177cb4-0x177e13 inclusive
// range: 0x177f28-0x178143 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00177cb4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r3;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  undefined1 auStack_3c [12];
  uint local_30;
  int iStack_2c;
  int local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_00203e2c(auStack_3c);
  uVar1 = FUN_000b4964();
  iVar2 = FUN_000b4840(uVar1,s_AudioHWService_00177e14,auStack_3c,extraout_r3,uVar1);
  if (iVar2 == 0) {
    FUN_00002898(_DAT_00177e24);
    FUN_000d04f8(auStack_3c);
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_0022bc60(auStack_3c);
    iVar2 = (**(code **)(*piVar3 + 0x50))(piVar3,0);
    if (iVar2 == 0) {
      FUN_00002898(s___ERROR__HWCom__updateAvPortSett_00177e26 + 2);
      FUN_000d04f8(auStack_3c);
      uVar1 = 0;
    }
    else {
      piVar3 = (int *)FUN_0022bc60(auStack_3c);
      iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,2);
      if (iVar4 == 0) {
        FUN_00002898(s_ERROR__HWCom__updateAvPortSettin_00177e68);
        FUN_000d04f8(auStack_3c);
        uVar1 = 0;
      }
      else {
        piVar3 = (int *)FUN_0022bc60(auStack_3c);
        iVar5 = (**(code **)(*piVar3 + 0x50))(piVar3,3);
        if (iVar5 == 0) {
          FUN_00002898(s_ERROR__HWCom__updateAvPortSettin_00177ea8);
          FUN_000d04f8(auStack_3c);
          uVar1 = 0;
        }
        else {
          piVar3 = (int *)FUN_0022bc60(auStack_3c);
          local_40 = (**(code **)(*piVar3 + 0x50))(piVar3,4);
          if (local_40 == 0) {
            FUN_00002898(s_ERROR__HWCom__updateAvPortSettin_00177ee8);
            FUN_000d04f8(auStack_3c);
            uVar1 = 0;
          }
          else {
            iVar6 = FUN_001a7434(iVar2);
            FUN_00229378(iVar6 + 0x6c,&local_44);
            iVar6 = FUN_001a7434(iVar4);
            FUN_00229378(iVar6 + 0x6c,&local_48);
            iVar6 = FUN_001a7434(iVar5);
            FUN_00229378(iVar6 + 0x6c,&local_4c);
            iVar6 = FUN_001a7434(local_40);
            FUN_00229378(iVar6 + 0x6c,&local_50);
            if ((local_28 == 1) || (local_28 == 2)) {
              FUN_001a2fcc(param_1 + 0xb4,local_28);
              FUN_001a2fcc(param_1 + 0x14c,local_28);
              FUN_001a2fcc(param_1 + 0x1e4,local_28);
              local_44 = 2;
              local_48 = 2;
              local_4c = 2;
              local_50 = 2;
              local_54 = 1;
            }
            else {
              if ((local_28 != 3) && (local_28 != 4)) {
                FUN_00002898(DAT_00178144,*(undefined4 *)(param_1 + 0x374));
                FUN_000d04f8(auStack_3c);
                return 0;
              }
              FUN_001a2fcc(param_1 + 0xb4,local_28);
              FUN_001a2fcc(param_1 + 0x14c,local_28);
              FUN_001a2fcc(param_1 + 0x1e4,local_28);
              local_44 = 0;
              local_48 = 0;
              local_4c = 0;
              local_50 = 0;
              local_54 = 0;
            }
            iVar2 = FUN_001a7434(iVar2);
            local_30 = local_44 & 0xff;
            FUN_00201e28(iVar2 + 0x6c,&local_30,0xffffffff);
            iVar2 = FUN_001a7434(iVar4);
            local_30 = local_48 & 0xff;
            FUN_00201e28(iVar2 + 0x6c,&local_30,0xffffffff);
            iVar2 = FUN_001a7434(iVar5);
            local_30 = local_4c & 0xff;
            FUN_00201e28(iVar2 + 0x6c,&local_30,0xffffffff);
            iVar2 = FUN_001a7434(local_40);
            local_30 = local_50 & 0xff;
            FUN_00201e28(iVar2 + 0x6c,&local_30,0xffffffff);
            iVar2 = FUN_001a7434(iVar4);
            local_30 = local_54;
            FUN_00201e28(iVar2 + 0x90,&local_30,0xffffffff);
            FUN_000d04f8(auStack_3c);
            uVar1 = 1;
          }
        }
      }
    }
  }
  return uVar1;
}

