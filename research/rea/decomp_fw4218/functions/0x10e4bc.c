// rea decompile_all
// name: FUN_0010e4bc
// address: 0x10e4bc
// body: available
// range: 0x10e4bc-0x10e7d3 inclusive
// range: 0x10e808-0x10e86f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010e4bc(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  uVar3 = FUN_00232964(auStack_28,&DAT_0010e7d4,auStack_2c);
  FUN_00243210(param_1 + 0xa0,0xc,uVar3);
  FUN_002329f0(auStack_28);
  uVar1 = FUN_001b557c(uVar2);
  *(undefined1 *)(param_1 + 0xd8) = uVar1;
  *(undefined1 *)(param_1 + 0xd9) = uVar1;
  uVar1 = FUN_001b5b50(uVar2);
  *(undefined1 *)(param_1 + 0xdd) = uVar1;
  *(undefined1 *)(param_1 + 0xde) = uVar1;
  uVar1 = FUN_001b59d4(uVar2);
  *(undefined1 *)(param_1 + 0xdb) = uVar1;
  *(undefined1 *)(param_1 + 0xdc) = uVar1;
  uVar1 = FUN_001b54c0(uVar2);
  *(undefined1 *)(param_1 + 0xda) = uVar1;
  uVar3 = FUN_0024310c(param_1 + 0x94);
  iVar4 = FUN_001b5844(uVar2);
  if ((iVar4 == 0) || (iVar4 = FUN_000bc47c(param_1 + 0x18), iVar4 != 0)) {
    iVar4 = FUN_00248974(uVar3,s_Unload_Playlist_0010e7d8);
    if (iVar4 != 0) {
      uVar3 = FUN_0024310c(param_1 + 0x94);
      FUN_00243124(param_1 + 0x94,uVar3);
      uVar3 = FUN_00244140(param_1 + 0xe4);
      FUN_0024418c(param_1 + 0xe4,uVar3);
    }
  }
  else {
    iVar4 = FUN_00248a8c(uVar3,s_Unload_Playlist_0010e7d8);
    if (iVar4 != 0) {
      uVar5 = FUN_00232964(auStack_30,s_Unload_Playlist_0010e7d8,auStack_34);
      FUN_0024326c(param_1 + 0x94,uVar3,uVar5);
      FUN_002329f0(auStack_30);
      uVar3 = FUN_00244140(param_1 + 0xe4);
      local_38 = 0x1f;
      FUN_00244278(param_1 + 0xe4,uVar3,&local_38);
      uVar3 = FUN_00243490(param_1 + 0xa0,0);
      FUN_002329fc(uVar3,&DAT_0010e7d4);
    }
  }
  iVar4 = FUN_0024310c(param_1 + 0x94);
  iVar4 = iVar4 + 4;
  iVar6 = FUN_001b5adc(uVar2);
  if (iVar6 == 0) {
    iVar6 = FUN_00248974(iVar4,s_Switch_to_96kHz_0010e7e8);
    if ((iVar6 != 0) || (iVar4 = FUN_00248974(iVar4,s_Switch_to_48kHz_0010e7f8), iVar4 != 0)) {
      iVar4 = FUN_0024310c(param_1 + 0x94);
      FUN_00243124(param_1 + 0x94,iVar4 + 4);
      iVar4 = FUN_00244140(param_1 + 0xe4);
      FUN_0024418c(param_1 + 0xe4,iVar4 + 4);
    }
  }
  else {
    FUN_000f8ee0();
    FUN_001b9a28();
    iVar6 = FUN_001bab0c();
    if (iVar6 == 0) {
      piVar7 = (int *)FUN_000f8ee0();
      iVar6 = (**(code **)(*piVar7 + 0x6c))(piVar7);
      if ((iVar6 == 1) || (iVar6 == 2)) {
        iVar6 = FUN_00248a8c(iVar4,s_Switch_to_96kHz_0010e7e8);
        if (iVar6 != 0) {
          uVar2 = FUN_00232964(auStack_30,s_Switch_to_96kHz_0010e7e8,auStack_34);
          FUN_0024326c(param_1 + 0x94,iVar4,uVar2);
          FUN_002329f0(auStack_30);
          iVar4 = FUN_00244140(param_1 + 0xe4);
          local_38 = 0x21;
          FUN_00244278(param_1 + 0xe4,iVar4 + 4,&local_38);
          uVar2 = FUN_00243490(param_1 + 0xa0,0);
          FUN_002329fc(uVar2,&DAT_0010e7d4);
        }
      }
      else {
        iVar6 = FUN_00248a8c(iVar4,s_Switch_to_48kHz_0010e7f8);
        if (iVar6 != 0) {
          uVar2 = FUN_00232964(auStack_30,s_Switch_to_48kHz_0010e7f8,auStack_34);
          FUN_0024326c(param_1 + 0x94,iVar4,uVar2);
          FUN_002329f0(auStack_30);
          iVar4 = FUN_00244140(param_1 + 0xe4);
          local_38 = 0x21;
          FUN_00244278(param_1 + 0xe4,iVar4 + 4,&local_38);
          uVar2 = FUN_00243490(param_1 + 0xa0,0);
          FUN_002329fc(uVar2,&DAT_0010e7d4);
        }
      }
    }
  }
  FUN_0010c254(param_1);
  return;
}

