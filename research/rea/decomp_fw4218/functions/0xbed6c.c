// rea decompile_all
// name: FUN_000bed6c
// address: 0xbed6c
// body: available
// range: 0xbed6c-0xbf163 inclusive
// range: 0xbf1a4-0xbf30b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000bed6c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [4];
  int local_194;
  undefined1 auStack_190 [44];
  undefined1 auStack_164 [20];
  undefined4 local_150;
  undefined1 auStack_14c [20];
  int local_138;
  undefined1 auStack_114 [44];
  undefined1 auStack_e8 [28];
  int local_cc;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 auStack_54 [28];
  uint local_38;
  int *local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 *local_28;
  
  FUN_0023143c(param_2,0,0xffffffff);
  local_28 = (undefined4 *)FUN_000cbaf0();
  uVar1 = (**(code **)*local_28)(local_28);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = FUN_00230e4c(auStack_30);
  uVar1 = FUN_00231ef4(auStack_2c,&DAT_000bf164,uVar1);
  FUN_001156a4(auStack_54,param_1 + 4,*(undefined4 *)(param_1 + 0x58),uVar1);
  FUN_00232190(auStack_2c);
  local_34 = (int *)FUN_000cbaf0();
  iVar2 = (**(code **)(*local_34 + 8))(local_34,auStack_54,0,0xffffffff);
  if (iVar2 == 0) {
    local_58 = FUN_001ba160(auStack_54);
    while( true ) {
      FUN_00115750(auStack_190,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58);
      piVar3 = (int *)FUN_000cbaf0();
      iVar2 = (**(code **)(*piVar3 + 8))(piVar3,auStack_190,0,0xffffffff);
      if (iVar2 != 0) break;
      local_194 = FUN_001ba16c(auStack_190);
      psVar4 = (short *)FUN_001c06f8(local_194);
      if (*psVar4 == 0) {
        FUN_001157b0(auStack_190);
LAB_000bf06c:
        FUN_0012c504(auStack_164,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58);
        piVar3 = (int *)FUN_000cbaf0();
        (**(code **)(*piVar3 + 8))(piVar3,auStack_164,0xffffffff);
        FUN_0012c578(auStack_164);
        uVar1 = FUN_00230e4c(auStack_30);
        local_150 = FUN_0022d168(param_2);
        uVar1 = FUN_00231ef4(auStack_2c,local_150,uVar1);
        FUN_00123418(auStack_78,param_1 + 4,*(undefined4 *)(param_1 + 0x58),uVar1,1);
        FUN_00232190(auStack_2c);
        piVar3 = (int *)FUN_000cbaf0();
        iVar2 = (**(code **)(*piVar3 + 8))(piVar3,auStack_78,0,0xffffffff);
        if (iVar2 != 0) {
          uVar1 = FUN_001b29dc(auStack_78);
          FUN_00002898(DAT_000bf1a0,uVar1);
          FUN_0012346c(auStack_78);
          FUN_001156f4(auStack_54);
          return 0;
        }
        local_58 = FUN_001bac50(auStack_78);
        local_1a0 = 0;
        local_1a4 = 0x70;
        FUN_00123544(auStack_114,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58,auStack_e8);
        piVar3 = (int *)FUN_000cbaf0();
        iVar2 = (**(code **)(*piVar3 + 8))(piVar3,auStack_114,0,0xffffffff);
        if (iVar2 != 0) {
          uVar1 = FUN_001b29dc(auStack_114);
          FUN_00002898(DAT_000bf30c,uVar1);
          FUN_001235f0(auStack_114);
          FUN_0012346c(auStack_78);
          FUN_001156f4(auStack_54);
          return 0;
        }
        FUN_0012c504(auStack_164,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_58);
        piVar3 = (int *)FUN_000cbaf0();
        (**(code **)(*piVar3 + 8))(piVar3,auStack_164,0xffffffff);
        FUN_0012c578(auStack_164);
        FUN_000ce0b8(auStack_14c);
        uVar1 = FUN_0011a068();
        FUN_00118e04(uVar1,2,auStack_14c);
        if ((local_cc == local_138) && (local_cc != 0)) {
          FUN_0023143c(param_2,0,0xffffffff);
        }
        iVar2 = FUN_0022d19c(param_2);
        local_38 = (uint)(iVar2 != 0);
        FUN_001235f0(auStack_114);
        FUN_0012346c(auStack_78);
        FUN_001156f4(auStack_54);
        return local_38;
      }
      if (*(char *)(local_194 + 8) == '\x10') {
        FUN_001157b0(auStack_190);
      }
      else {
        uVar1 = FUN_00230e4c(auStack_198);
        uVar5 = FUN_001c06f8(local_194);
        FUN_00231ef4(auStack_19c,uVar5,uVar1);
        uVar6 = FUN_0022d19c(auStack_19c);
        iVar2 = FUN_000038be(u_uTRACK24_Release_000bf170);
        iVar7 = FUN_000038be(u__bcd_000bf194);
        if (uVar6 < (uint)(iVar7 + iVar2)) {
          FUN_00232190(auStack_19c);
          FUN_001157b0(auStack_190);
        }
        else {
          uVar1 = FUN_000038be(u_uTRACK24_Release_000bf170);
          FUN_0022d1b0(&local_1a0,auStack_19c,0,uVar1);
          iVar2 = FUN_0022d19c(auStack_19c);
          FUN_0022d1b0(&local_1a4,auStack_19c,iVar2 + -4,4);
          iVar2 = FUN_0022d260(&local_1a0,u_uTRACK24_Release_000bf170);
          if (iVar2 == 0) {
            iVar2 = FUN_0022d260(&local_1a4,u__bcd_000bf194);
            if (iVar2 == 0) {
              FUN_0023223c(param_2,auStack_19c);
              FUN_00232190(&local_1a4);
              FUN_00232190(&local_1a0);
              FUN_00232190(auStack_19c);
              FUN_001157b0(auStack_190);
              goto LAB_000bf06c;
            }
            FUN_00232190(&local_1a4);
            FUN_00232190(&local_1a0);
            FUN_00232190(auStack_19c);
            FUN_001157b0(auStack_190);
          }
          else {
            FUN_00232190(&local_1a4);
            FUN_00232190(&local_1a0);
            FUN_00232190(auStack_19c);
            FUN_001157b0(auStack_190);
          }
        }
      }
    }
    uVar1 = FUN_001b29dc(auStack_190);
    FUN_00002898(DAT_000bf16c,iVar2,uVar1);
    FUN_001157b0(auStack_190);
    FUN_001156f4(auStack_54);
  }
  else {
    uVar1 = FUN_001b29dc(auStack_54);
    FUN_00002898(DAT_000bf168,uVar1);
    FUN_001156f4(auStack_54);
  }
  return 0;
}

