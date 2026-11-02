// rea decompile_all
// name: FUN_000c0d94
// address: 0xc0d94
// body: available
// range: 0xc0d94-0xc105b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000c0d94(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_d0 [44];
  undefined1 auStack_a4 [32];
  undefined1 auStack_84 [68];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  int *local_38;
  int iStack_34;
  undefined4 uStack_30;
  int *local_2c;
  undefined4 *local_28;
  
  iStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  do {
    iVar1 = FUN_0022c84c(param_1 + 4,auStack_40,0);
  } while (iVar1 != 0);
  puVar2 = (undefined4 *)FUN_000cbaf0();
  uVar3 = (**(code **)*puVar2)(puVar2);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  FUN_000d6f54(auStack_84,param_1 + 4,*(undefined4 *)(param_1 + 0x58),param_2);
  piVar4 = (int *)FUN_000cbaf0();
  iVar1 = (**(code **)(*piVar4 + 8))(piVar4,auStack_84,0xffffffff);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_001b8a1c(auStack_84);
    FUN_00123418(auStack_a4,param_1 + 4,*(undefined4 *)(param_1 + 0x58),param_2,1);
    piVar4 = (int *)FUN_000cbaf0();
    iVar1 = (**(code **)(*piVar4 + 8))(piVar4,auStack_a4,0xffffffff);
    if (iVar1 == 0) {
      local_3c = FUN_001bac50(auStack_a4);
      if ((char *)*puVar2 < s_Reset_Board____0003fff4 + 0xd) {
        iVar1 = FUN_001c6a94(*puVar2,_DAT_000c10c0);
        if (iVar1 == 0) {
          FUN_00002898(s____ERROR__System_out_of_memory_a_000c10c1 + 3);
          FUN_000c1220(param_1,local_3c);
          FUN_0012346c(auStack_a4);
          FUN_000d6fb8(auStack_84);
          uVar3 = 0;
        }
        else {
          FUN_00123544(auStack_d0,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_3c,iVar1,*puVar2
                       ,1);
          local_38 = (int *)FUN_000cbaf0();
          iVar6 = (**(code **)(*local_38 + 8))(local_38,auStack_d0,0xffffffff);
          if (iVar6 == 0) {
            FUN_000c1220(param_1,local_3c);
            *local_2c = iVar1;
            *local_28 = *puVar2;
            FUN_001235f0(auStack_d0);
            FUN_0012346c(auStack_a4);
            FUN_000d6fb8(auStack_84);
            uVar3 = 1;
          }
          else {
            uVar3 = FUN_001b29dc(auStack_d0);
            FUN_00002898(s_ERROR__Read_File_failed_with__d_000c1100,uVar3);
            FUN_000c1220(param_1,local_3c);
            FUN_001c6a64(iVar1);
            FUN_001235f0(auStack_d0);
            FUN_0012346c(auStack_a4);
            FUN_000d6fb8(auStack_84);
            uVar3 = 0;
          }
        }
      }
      else {
        FUN_00002898(s___ERROR__PlayList_File_too_big__B_000c108e + 2);
        FUN_000c1220(param_1,local_3c);
        FUN_0012346c(auStack_a4);
        FUN_000d6fb8(auStack_84);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = FUN_001b29dc(auStack_a4);
      uVar5 = FUN_0022d168(param_2);
      FUN_00002898(_DAT_000c108c,uVar5,uVar3);
      FUN_0012346c(auStack_a4);
      FUN_000d6fb8(auStack_84);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = FUN_0022d168(param_2);
    uVar5 = FUN_001b29dc(auStack_84);
    FUN_00002898(s_ERROR__File_Stat_failed_with__d_f_000c105c,uVar5,uVar3);
    FUN_000d6fb8(auStack_84);
    uVar3 = 0;
  }
  return uVar3;
}

