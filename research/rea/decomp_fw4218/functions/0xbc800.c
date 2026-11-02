// rea decompile_all
// name: FUN_000bc800
// address: 0xbc800
// body: available
// range: 0xbc800-0xbca3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000bc800(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined1 auStack_ac [4];
  undefined4 local_a8;
  undefined1 auStack_a4 [68];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [28];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  
  do {
    iVar1 = FUN_0022c84c(param_1 + 4,auStack_2c,0);
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)FUN_000cbaf0();
  uVar3 = (**(code **)*puVar2)(puVar2);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  FUN_001156a4(auStack_48,param_1 + 4,*(undefined4 *)(param_1 + 0x58),param_2);
  piVar4 = (int *)FUN_000cbaf0();
  iVar1 = (**(code **)(*piVar4 + 8))(piVar4,auStack_48,0xffffffff);
  if (iVar1 == 0) {
    uVar3 = FUN_001ba160(auStack_48);
    do {
      FUN_00115750(auStack_a4,param_1 + 4,*(undefined4 *)(param_1 + 0x58),uVar3);
      piVar4 = (int *)FUN_000cbaf0();
      iVar1 = (**(code **)(*piVar4 + 8))(piVar4,auStack_a4,0xffffffff);
      if (iVar1 == 0) {
        local_a8 = FUN_001ba16c(auStack_a4);
        psVar5 = (short *)FUN_001c06f8(local_a8);
        if (*psVar5 == 0) {
          iVar1 = 1;
        }
        else {
          FUN_00232084(auStack_ac,param_2);
          FUN_00231500(auStack_ac,&DAT_000bca40);
          uVar6 = FUN_001c06f8(local_a8);
          FUN_00231500(auStack_ac,uVar6);
          FUN_000bd954(param_1,auStack_ac);
          FUN_00232190(auStack_ac);
        }
      }
      else if (iVar1 == 1) {
        local_a8 = FUN_001b29dc(auStack_a4);
        FUN_00002898(s_ERROR__Read_directory_failed_wit_000bca44,local_a8);
      }
      else {
        FUN_00002898(s_ERROR__Read_directory_failed_000bca6c);
      }
      FUN_001157b0(auStack_a4);
    } while (iVar1 == 0);
    FUN_0012c504(auStack_60,param_1 + 4,*(undefined4 *)(param_1 + 0x58),uVar3);
    piVar4 = (int *)FUN_000cbaf0();
    (**(code **)(*piVar4 + 8))(piVar4,auStack_60,0xffffffff);
    local_28 = FUN_000bd954(param_1,param_2);
    FUN_0012c578(auStack_60);
    FUN_001156f4(auStack_48);
  }
  else {
    uVar3 = FUN_0022d168(param_2);
    FUN_00002898(DAT_000bca3c,iVar1,uVar3);
    FUN_001156f4(auStack_48);
    local_28 = 0;
  }
  return local_28;
}

