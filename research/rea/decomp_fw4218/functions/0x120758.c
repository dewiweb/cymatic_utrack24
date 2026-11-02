// rea decompile_all
// name: FUN_00120758
// address: 0x120758
// body: available
// range: 0x120758-0x12090b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00120758(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_2c;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  local_2c = DAT_0012090c;
  local_18 = DAT_0012090c;
  local_14 = DAT_0012090c;
  iVar1 = FUN_001f01c4(0x400000,1);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_00002898(_DAT_00120910,0x400000,0x300000);
    iVar1 = FUN_001f01c4(0x300000,1);
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0) {
      FUN_00002898(_DAT_00120910,0x300000,0x200000);
      iVar1 = FUN_001f01c4(0x200000,1);
      *(int *)(param_1 + 0x20) = iVar1;
      if (iVar1 == 0) {
        FUN_00002898(DAT_001209a0,0x200000);
        goto LAB_001208e8;
      }
      uVar2 = 0x200000;
    }
    else {
      uVar2 = 0x300000;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = 0x400000;
  }
  iVar1 = FUN_000f4648(&local_2c,&local_18,&local_14,local_28,local_24,local_20);
  if (iVar1 == 0) {
    pcVar4 = s___ERROR__USBDFUDownloadHandler___00120912 + 2;
  }
  else {
    uVar2 = FUN_000b4964(iVar1);
    iVar1 = FUN_000b4840(uVar2,s_USBStackService_00120948,param_1 + 8);
    if (iVar1 == 0) {
      pcVar4 = s_ERROR__USBDFUDownloadHandler__in_00120958;
    }
    else {
      iVar3 = FUN_001f01c4(500,1);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = FUN_001ac168(iVar3,param_1,1,*(undefined2 *)(param_1 + 0x18),
                             *(undefined2 *)(param_1 + 0x1a));
      }
      *(int *)(param_1 + 4) = iVar1;
      pcVar4 = DAT_00120998;
      if (iVar1 != 0) {
        FUN_001ab3ac(iVar1,local_2c,local_18,local_14,local_28[0],local_24[0],local_20[0]);
        iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                          (*(int **)(param_1 + 0x10),*(undefined4 *)(param_1 + 4));
        pcVar4 = DAT_0012099c;
        if (iVar1 != 0) {
          FUN_002329f0(&local_14);
          FUN_002329f0(&local_18);
          FUN_002329f0(&local_2c);
          return 1;
        }
      }
    }
  }
  FUN_00002898(pcVar4);
LAB_001208e8:
  FUN_002329f0(&local_14);
  FUN_002329f0(&local_18);
  FUN_002329f0(&local_2c);
  return 0;
}

